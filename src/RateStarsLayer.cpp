#include <Geode/Geode.hpp> 
#include <Geode/modify/RateStarsLayer.hpp>

using namespace geode::prelude;

class $modify(RateStarsLayer) {
    bool init(int p0, bool p1, bool p2) {
        bool result = RateStarsLayer::init(p0, p1, p2);
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");

        auto buttonMenu = reinterpret_cast<CCNode*>(reinterpret_cast<CCLayer*>(this->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(2));
        auto rateLabel = reinterpret_cast<CCLabelBMFont*>(reinterpret_cast<CCLayer*>(this->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(1));
        auto submitLabel = reinterpret_cast<CCLabelBMFont*>(reinterpret_cast<CCNode*>(reinterpret_cast<CCMenuItemSpriteExtra*>(buttonMenu->getChildren()->objectAtIndex(11))->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(0));
        auto cancelLabel = reinterpret_cast<CCLabelBMFont*>(reinterpret_cast<CCNode*>(reinterpret_cast<CCMenuItemSpriteExtra*>(buttonMenu->getChildren()->objectAtIndex(10))->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(0));
        
        if (langType == "Espanol") {
            rateLabel->setString("Valora las Estrellas"); // "Rate Stars"
            submitLabel->setString("Enviar"); submitLabel->setScale(submitLabel->getScale() - 0.1); // "Submit"
            cancelLabel->setString("Cancelar"); cancelLabel->setScale(cancelLabel->getScale() - 0.2); // "Cancel"
        }
        if (langType == "Portugues") {
            rateLabel->setString("Avaliar Estrelas"); // "Rate Stars"
            submitLabel->setString("Enviar"); submitLabel->setScale(submitLabel->getScale() - 0.1); // "Submit"
            cancelLabel->setString("Cancelar"); cancelLabel->setScale(cancelLabel->getScale() - 0.2); // "Cancel"
        }
        if (langType == "Russki") {
            rateLabel->setString("Ocenite Zvezdy"); // "Rate Stars"
            submitLabel->setString("Otpravit"); submitLabel->setScale(submitLabel->getScale() - 0.2); // "Submit"
            cancelLabel->setString("Otmenit"); cancelLabel->setScale(cancelLabel->getScale() - 0.2); // "Cancel"
        }
        if (langType == "Deutsch") {
            rateLabel->setString("Sterne Bewerten"); // "Rate Stars"
            submitLabel->setString("Einreichen"); submitLabel->setScale(submitLabel->getScale() - 0.3); // "Submit"
            cancelLabel->setString("Abbrechen"); cancelLabel->setScale(cancelLabel->getScale() - 0.3); // "Cancel"
        }

        return result;
    }
};