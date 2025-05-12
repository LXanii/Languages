#include <Geode/Geode.hpp> 
#include <Geode/modify/LevelPage.hpp>

using namespace geode::prelude;

class $modify(LevelPage) {
    void create(GJGameLevel* level) {
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        LevelPage::create(level);
        auto normalLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("normal-mode-label"));
        auto practiceLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("practice-mode-label"));
        
        if (langType == "Espanol") {
            if (this->getChildByID("coming-soon-label") != nullptr) reinterpret_cast<CCLabelBMFont*>(this->getChildByID("coming-soon-label"))->setString("Proximamente!")
            normalLabel->setString("Modo Normal");
            practiceLabel->setString("Modo de Practica");
        }
        if (langType == "Portugues") {
            if (this->getChildByID("coming-soon-label") != nullptr) reinterpret_cast<CCLabelBMFont*>(this->getChildByID("coming-soon-label"))->setString("Em Breve!")
            normalLabel->setString("Modo Normal");
            practiceLabel->setString("Modo de Pratica");
        }
        if (langType == "Russki") {
            if (this->getChildByID("coming-soon-label") != nullptr) reinterpret_cast<CCLabelBMFont*>(this->getChildByID("coming-soon-label"))->setString("Skoro Budet!")
            normalLabel->setString("Obycnyj rezim");
            practiceLabel->setString("Rezim trenirovki");
        }
        if (langType == "Deutsch") {
            if (this->getChildByID("coming-soon-label") != nullptr) reinterpret_cast<CCLabelBMFont*>(this->getChildByID("coming-soon-label"))->setString("Demnaechst Erhaeltlich!")
            normalLabel->setString("Normaler Modus");
            practiceLabel->setString("Uebungsmodus");
        }
    }
};