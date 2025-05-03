#include <Geode/Geode.hpp> 
#include <Geode/modify/LevelPage.hpp>

using namespace geode::prelude;

class $modify(LevelPage) {
    void create(GJGameLevel* level) {
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        LevelPage::create(level);
        auto normalLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("normal-mode-label"));
        auto practiceLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("practice-mode-label"));
        log::info("regjlnrenl");
        if (langType == "Espanol") {
            normalLabel->setString("Modo Normal");
            practiceLabel->setString("Modo de Practica");
        }
        if (langType == "Portugues") {
            normalLabel->setString("Modo Normal");
            practiceLabel->setString("Modo de Pratica");
        }
        if (langType == "Russki") {
            normalLabel->setString("Obycnyj rezim");
            practiceLabel->setString("Rezim trenirovki");
        }
        if (langType == "Deutsch") {
            normalLabel->setString("Normaler Modus");
            practiceLabel->setString("Uebungsmodus");
        }
    }
};