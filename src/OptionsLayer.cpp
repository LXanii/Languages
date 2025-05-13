#include <Geode/Geode.hpp> 
#include <Geode/modify/OptionsLayer.hpp>

using namespace geode::prelude;

class $modify(OptionsLayer) {
    
    void customSetup() {
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        OptionsLayer::customSetup();

        std::vector<std::string> replaceStrings = {};
        auto mainLayer = reinterpret_cast<CCNode*>(this->getChildren()->objectAtIndex(0));
        auto musicLabel = reinterpret_cast<CCLabelBMFont*>(mainLayer->getChildByID("music-label"));
        auto menumusicLabel = reinterpret_cast<CCLabelBMFont*>(mainLayer->getChildByID("menu-music-label"));
        auto optionsMenu = mainLayer->getChildByID("options-menu");

        if (langType == "Espanol") {
            musicLabel->setString("Musica");
            menumusicLabel->setString("Menu\nMusica");
            replaceStrings = {"Cuenta", "Como Jugar", "Opciones", "Graficos", "Valora", "Canciones", "Ayuda"};
        }
        if (langType == "Portugues") {
            musicLabel->setString("Musica");
            menumusicLabel->setString("Menu\nMusica");
            replaceStrings = {"Conta", "Como Jogar", "Opcoes", "Graficos", "Taxa", "Musicas", "Ajuda"};
        }
        if (langType == "Russki") {
            musicLabel->setString("Muzyka");
            menumusicLabel->setString("Menju\nMuzyka");
            replaceStrings = {"Scet", "Kak Igrat", "Opcii", "Grafika", "Ocenit", "Pesni", "Pomos"};
        }
        if (langType == "Deutsch") {
            musicLabel->setString("Musik");
            menumusicLabel->setString("Menu\nMusik");
            replaceStrings = {"Konto", "Wie man Spielt", "Optionen", "Grafiken", "Bewerten", "Lieder", "Hilfe"};
        }

        if (langType != "English") if (optionsMenu->getChildrenCount() == replaceStrings.size()) {
            for (int i = 0; i < optionsMenu->getChildrenCount(); i++) {
                auto btnSprite = reinterpret_cast<CCMenuItemSpriteExtra*>(optionsMenu->getChildren()->objectAtIndex(i));
                auto button = reinterpret_cast<CCNode*>(btnSprite->getChildren()->objectAtIndex(0));
                auto textLabel = reinterpret_cast<CCLabelBMFont*>(button->getChildren()->objectAtIndex(0));
                
                if ((std::string)replaceStrings[i] == "Valora") textLabel->setScale(textLabel->getScale() - 0.1);
                if ((std::string)replaceStrings[i] == "Canciones") textLabel->setScale(textLabel->getScale() - 0.35);

                if ((std::string)replaceStrings[i] == "Wie man Spielt") textLabel->setScale(textLabel->getScale() - 0.1);
                if ((std::string)replaceStrings[i] == "Bewerten") textLabel->setScale(textLabel->getScale() - 0.3);
                
                textLabel->setString(replaceStrings[i].c_str());
            }
        }
    }
};