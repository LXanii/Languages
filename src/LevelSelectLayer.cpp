#include <Geode/Geode.hpp> 
#include <Geode/modify/LevelSelectLayer.hpp>

using namespace geode::prelude;

class $modify(LevelSelectLayer) {

    struct Fields {
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
    };

    bool init(int page) {
        bool result = LevelSelectLayer::init(page);

        auto soundtrackMenu = reinterpret_cast<CCNode*>(this->getChildByID("bottom-center-menu")->getChildByID("download-soundtrack-button"));
        auto soundtrackLabel = reinterpret_cast<CCLabelBMFont*>(soundtrackMenu->getChildByID("download-soundtrack-label"));
        if ((std::string)soundtrackLabel->getString() == "Download the soundtrack") {
            if (m_fields->langType == "Espanol") soundtrackLabel->setString("Descargar la banda sonora"); // "Download the soundtrack"
            if (m_fields->langType == "Portugues") soundtrackLabel->setString("Baixar a trilha sonora");
            if (m_fields->langType == "Russki") soundtrackLabel->setString("Skacat saundtrek");
            if (m_fields->langType == "Deutsch") soundtrackLabel->setString("Download des Soundtracks");
        }

        changeText();
        return result;
    }

    void onNext(CCObject* sender) {
        LevelSelectLayer::onNext(sender);
        changePageSwap();
    }

    void onPrev(CCObject* sender) {
        LevelSelectLayer::onPrev(sender);
        changePageSwap();
    }

    void changePageSwap() {
        auto levelsLayer = reinterpret_cast<CCNode*>(reinterpret_cast<CCNode*>(this->getChildByID("levels-list"))->getChildByID("level-pages"));
        auto levelPage = levelsLayer->getChildByID("level-page-3");

        if (levelPage != NULL) {
            auto normalLabel = reinterpret_cast<CCLabelBMFont*>(levelPage->getChildByID("normal-mode-label"));
            auto practiceLabel = reinterpret_cast<CCLabelBMFont*>(levelPage->getChildByID("practice-mode-label"));
    
            if ((std::string)normalLabel->getString() == "Normal Mode") {
                if (m_fields->langType == "Espanol") {
                    normalLabel->setString("Modo Normal");
                    practiceLabel->setString("Modo de Practica");
                }
                if (m_fields->langType == "Portugues") {
                    normalLabel->setString("Modo Normal");
                    practiceLabel->setString("Modo de Pratica");
                }
                if (m_fields->langType == "Russki") {
                    normalLabel->setString("Obycnyj rezim");
                    practiceLabel->setString("Rezim trenirovki");
                }
                if (m_fields->langType == "Deutsch") {
                    normalLabel->setString("Normaler Modus");
                    practiceLabel->setString("Uebungsmodus");
                }
            }
        }
    }

    void changeText() {
        auto levelsLayer = reinterpret_cast<CCNode*>(reinterpret_cast<CCNode*>(this->getChildByID("levels-list"))->getChildByID("level-pages"));
        for (int i = 0; i < levelsLayer->getChildrenCount(); ++i) {
            auto levelPage = levelsLayer->getChildByID(fmt::format("level-page-{}", i).c_str());
            if (levelPage != NULL) {
                auto normalLabel = reinterpret_cast<CCLabelBMFont*>(levelPage->getChildByID("normal-mode-label"));
                auto practiceLabel = reinterpret_cast<CCLabelBMFont*>(levelPage->getChildByID("practice-mode-label"));

                if (m_fields->langType == "Espanol") {
                    normalLabel->setString("Modo Normal");
                    practiceLabel->setString("Modo de Practica");
                }
                if (m_fields->langType == "Portugues") {
                    normalLabel->setString("Modo Normal");
                    practiceLabel->setString("Modo de Pratica");
                }
                if (m_fields->langType == "Russki") {
                    normalLabel->setString("Obycnyj rezim");
                    practiceLabel->setString("Rezim trenirovki");
                }
                if (m_fields->langType == "Deutsch") {
                    normalLabel->setString("Normaler Modus");
                    practiceLabel->setString("Uebungsmodus");
                }
            }
        }
    }
};