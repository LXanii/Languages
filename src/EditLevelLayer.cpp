#include <Geode/Geode.hpp> 
#include <Geode/modify/EditLevelLayer.hpp>

using namespace geode::prelude;

class $modify(EditLevelLayer) {
    bool init(GJGameLevel* p0) {
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        bool result = EditLevelLayer::init(p0);

        auto lengthLabel = reinterpret_cast<CCLabelBMFont*>(reinterpret_cast<CCNode*>(this->getChildByID("level-length"))->getChildren()->objectAtIndex(1));
        auto verifiedLabel = reinterpret_cast<CCLabelBMFont*>(reinterpret_cast<CCNode*>(this->getChildByID("level-verified"))->getChildren()->objectAtIndex(1));
        std::string length = lengthLabel->getString();
        std::string verified = verifiedLabel->getString();

        if (langType == "Espanol") {
            if (verified == "Verified") verifiedLabel->setString("Verificado"); // "Verified"
            else verifiedLabel->setString("Sin verificar"); // "Unverified"

            if (length == "Tiny") lengthLabel->setString("Tiny"); // "Tiny"
            if (length == "Short") lengthLabel->setString("Corto"); // "Short"
            if (length == "Medium") {
                lengthLabel->setString("Mediana"); // "Medium"
                lengthLabel->setScale(0.375);
            }
            if (length == "Long") {
                lengthLabel->setString("Largo"); // "Large"
                lengthLabel->setScale(0.35);
            }
            if (length == "XL") lengthLabel->setString("XL");
        }
        return result;
    }
};