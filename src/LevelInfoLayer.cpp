#include <Geode/Geode.hpp> 
#include <Geode/modify/LevelInfoLayer.hpp>

using namespace geode::prelude;

class $modify(LevelInfoLayer) {
    bool init(GJGameLevel* level, bool challenge) {
        bool result = LevelInfoLayer::init(level, challenge);
        changeLength();
        return result;
    }

    void levelDownloadFinished(GJGameLevel* level) {
        LevelInfoLayer::levelDownloadFinished(level);
        changeLength();
    }

    void changeLength() {
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        auto lengthLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("length-label"));
        auto normalLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("normal-mode-label"));
        auto practiceLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("practice-mode-label"));
        
        if (langType == "Espanol") {
            if ((std::string)lengthLabel->getString() == "Tiny") lengthLabel->setString("Tiny"); // "Tiny"
            if ((std::string)lengthLabel->getString() == "Short") lengthLabel->setString("Corto"); // "Short"
            if ((std::string)lengthLabel->getString() == "Medium") lengthLabel->setString("Mediana");
            if ((std::string)lengthLabel->getString() == "Long") lengthLabel->setString("Largo"); // "Large"
            normalLabel->setString("Modo Normal");
            practiceLabel->setString("Modo de Practica");
        }
        if (langType == "Portugues") {
            if ((std::string)lengthLabel->getString() == "Tiny") lengthLabel->setString("Pequeno"); // "Tiny"
            if ((std::string)lengthLabel->getString() == "Short") lengthLabel->setString("Curto"); // "Short"
            if ((std::string)lengthLabel->getString() == "Medium") lengthLabel->setString("Medio");
            if ((std::string)lengthLabel->getString() == "Long") lengthLabel->setString("Longo"); // "Large"
            normalLabel->setString("Modo Normal");
            practiceLabel->setString("Modo de Pratica");
        }
        if (langType == "Russki") {
            if ((std::string)lengthLabel->getString() == "Tiny") lengthLabel->setString("Kroshechny"); // "Tiny"
            if ((std::string)lengthLabel->getString() == "Short") lengthLabel->setString("Korotkiy"); // "Short"
            if ((std::string)lengthLabel->getString() == "Medium") lengthLabel->setString("Sredniy");
            if ((std::string)lengthLabel->getString() == "Long") lengthLabel->setString("Dlinniy"); // "Large"
            normalLabel->setString("Obycnyj rezim");
            practiceLabel->setString("Rezim trenirovki");
        }
        if (langType == "Deutsch") {
            if ((std::string)lengthLabel->getString() == "Tiny") lengthLabel->setString("Winzig"); // "Tiny"
            if ((std::string)lengthLabel->getString() == "Short") lengthLabel->setString("Kurz"); // "Short"
            if ((std::string)lengthLabel->getString() == "Medium") lengthLabel->setString("Mittel");
            if ((std::string)lengthLabel->getString() == "Long") lengthLabel->setString("Lang"); // "Large"
            normalLabel->setString("Normaler Modus");
            practiceLabel->setString("Uebungsmodus");
        }
    }
};