#include <Geode/Geode.hpp> 
#include <Geode/modify/DailyLevelNode.hpp>

using namespace geode::prelude;

class $modify(DailyLevelNode) {
    bool init(GJGameLevel* p0, DailyLevelPage* p1, bool p2) {
        bool result = DailyLevelNode::init(p0, p1, p2);
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        auto bonusLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("bonus-label"));

        if (langType == "Espanol") bonusLabel->setString("Bonificacion:");
        //if (langType == "Portuguese") bonusLabel->setString("Ir a Carpeta");
        //if (langType == "Russki") bonusLabel->setString("Ir a Carpeta");
        //if (langType == "Deutsch") bonusLabel->setString("Ir a Carpeta");
        
        return result;
    }
};