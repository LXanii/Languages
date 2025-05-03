#include <Geode/Geode.hpp> 
#include <Geode/modify/PauseLayer.hpp>

using namespace geode::prelude;

class $modify(PauseLayer) {
    void customSetup() {
        PauseLayer::customSetup();
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        auto musicLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("music-label"));
        auto normalLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("normal-mode-label"));
        auto practiceLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("practice-mode-label"));

        if (langType == "Espanol") {
            musicLabel->setString("Musica");
            normalLabel->setString("Modo Normal");
            practiceLabel->setString("Modo de Practica");
        }
        if (langType == "Portugues") {
            musicLabel->setString("Musica");
            normalLabel->setString("Modo Normal");
            practiceLabel->setString("Modo de Pratica");
        }
        if (langType == "Russki") {
            musicLabel->setString("Muzyka");
            normalLabel->setString("Obycnyj rezim");
            practiceLabel->setString("Rezim trenirovki");
        }
        if (langType == "Deutsch") {
            musicLabel->setString("Musik");
            normalLabel->setString("Normaler Modus");
            practiceLabel->setString("Uebungsmodus");
        }
    }
};