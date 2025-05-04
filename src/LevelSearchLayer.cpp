#include <Geode/Geode.hpp> 
#include <Geode/modify/LevelSearchLayer.hpp>

using namespace geode::prelude;

class $modify(LevelSearchLayer) {
    bool init(int num) {
        bool result = LevelSearchLayer::init(num);
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        auto searchMenu = this->getChildByID("quick-search-menu");
        auto searchLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("quick-search-title"));
        auto filterLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("filters-title"));

        for (int i = 0; i < searchMenu->getChildrenCount(); i++) {

            auto button = reinterpret_cast<CCNode*>(searchMenu->getChildren()->objectAtIndex(i));
            auto buttonLabel = reinterpret_cast<CCLabelBMFont*>(reinterpret_cast<CCNode*>(button->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(0));
            auto buttonSprite = reinterpret_cast<CCSprite*>(reinterpret_cast<CCNode*>(button->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(1));
            if (langType == "Espanol") {
                if ((std::string)buttonLabel->getString() == "Downloads") buttonLabel->setString("Descargas");
                if ((std::string)buttonLabel->getString() == "Likes") {
                    buttonLabel->setString("Le Gusta");
                    buttonLabel->setScale(buttonLabel->getScale() - 0.08);
                    buttonLabel->setPositionX(buttonLabel->getPositionX() - 5);
                    buttonSprite->setPositionX(buttonSprite->getPositionX() + 5);
                }
                if ((std::string)buttonLabel->getString() == "Sent") {buttonLabel->setString("Enviados"); buttonLabel->setScale(buttonLabel->getScale() - 0.05); buttonSprite->setPositionX(buttonSprite->getPositionX() + 14);}
                if ((std::string)buttonLabel->getString() == "Trending") {buttonLabel->setString("Tendencias"); buttonLabel->setScale(buttonLabel->getScale() - 0.1);}
                if ((std::string)buttonLabel->getString() == "Recent") {buttonLabel->setString("Recientes"); buttonLabel->setPositionX(buttonLabel->getPositionX() - 3); buttonLabel->setScale(buttonLabel->getScale() - 0.08);} 
                if ((std::string)buttonLabel->getString() == "Magic") buttonLabel->setString("Magia");
                if ((std::string)buttonLabel->getString() == "Awarded") {buttonLabel->setString("Concedido"); buttonLabel->setScale(buttonLabel->getScale() - 0.05);} 
                if ((std::string)buttonLabel->getString() == "Followed") buttonLabel->setString("Seguidos");
                if ((std::string)buttonLabel->getString() == "Friends") buttonLabel->setString("Amigos");
            }
            if (langType == "Portugues") {
                //if ((std::string)buttonLabel->getString() == "Downloads") buttonLabel->setString("Descargas");
                if ((std::string)buttonLabel->getString() == "Likes") {buttonLabel->setString("Gostos"); buttonLabel->setPositionX(buttonLabel->getPositionX() - 5); buttonSprite->setPositionX(buttonSprite->getPositionX() + 5);}
                if ((std::string)buttonLabel->getString() == "Sent") {buttonLabel->setString("Enviados"); buttonLabel->setScale(buttonLabel->getScale() - 0.05); buttonSprite->setPositionX(buttonSprite->getPositionX() + 14);}
                if ((std::string)buttonLabel->getString() == "Trending") {buttonLabel->setString("Tendencias"); buttonLabel->setScale(buttonLabel->getScale() - 0.1);}
                if ((std::string)buttonLabel->getString() == "Recent") {buttonLabel->setString("Recientes"); buttonLabel->setPositionX(buttonLabel->getPositionX() - 3); buttonLabel->setScale(buttonLabel->getScale() - 0.08);} 
                if ((std::string)buttonLabel->getString() == "Magic") buttonLabel->setString("Magica");
                if ((std::string)buttonLabel->getString() == "Awarded") buttonLabel->setString("Premiado");
                if ((std::string)buttonLabel->getString() == "Followed") buttonLabel->setString("Seguidos");
                if ((std::string)buttonLabel->getString() == "Friends") buttonLabel->setString("Amigos");
            }
            if (langType == "Russki") {
                if ((std::string)buttonLabel->getString() == "Downloads") buttonLabel->setString("Zagruzki");
                if ((std::string)buttonLabel->getString() == "Likes") {
                    buttonLabel->setString("Nravitsja");
                    buttonLabel->setScale(buttonLabel->getScale() - 0.08);
                    buttonLabel->setPositionX(buttonLabel->getPositionX() - 5);
                    buttonSprite->setPositionX(buttonSprite->getPositionX() + 5);
                }
                if ((std::string)buttonLabel->getString() == "Sent") {buttonLabel->setString("Otpravleno"); buttonLabel->setScale(buttonLabel->getScale() - 0.1); buttonSprite->setPositionX(buttonSprite->getPositionX() + 18);}
                //if ((std::string)buttonLabel->getString() == "Trending") buttonLabel->setString("Tendencias");
                if ((std::string)buttonLabel->getString() == "Recent") {buttonLabel->setString("Poslednie"); buttonLabel->setScale(buttonLabel->getScale() - 0.1); buttonLabel->setPositionX(buttonLabel->getPositionX() - 3);}
                if ((std::string)buttonLabel->getString() == "Magic") buttonLabel->setString("Magija");
                if ((std::string)buttonLabel->getString() == "Awarded") {buttonLabel->setString("Nagrazden"); buttonLabel->setScale(buttonLabel->getScale() - 0.08);}
                if ((std::string)buttonLabel->getString() == "Followed") {buttonLabel->setString("Sledujusie"); buttonLabel->setScale(buttonLabel->getScale() - 0.05);}
                if ((std::string)buttonLabel->getString() == "Friends") buttonLabel->setString("Druz ja");
            }
            if (langType == "Deutsch") {
                //if ((std::string)buttonLabel->getString() == "Downloads") buttonLabel->setString("Descargas");
                if ((std::string)buttonLabel->getString() == "Likes") {
                    buttonLabel->setString("Gefaellt mir");
                    buttonLabel->setScale(buttonLabel->getScale() - 0.13);
                    buttonSprite->setPositionX(buttonSprite->getPositionX() + 15);
                }
                if ((std::string)buttonLabel->getString() == "Sent") {buttonLabel->setString("Gesendet"); buttonSprite->setPositionX(buttonSprite->getPositionX() + 18);}
                if ((std::string)buttonLabel->getString() == "Trending") buttonLabel->setString("Laufende");
                if ((std::string)buttonLabel->getString() == "Recent") {buttonLabel->setString("Neueste"); buttonLabel->setPositionX(buttonLabel->getPositionX() - 3);}
                if ((std::string)buttonLabel->getString() == "Magic") buttonLabel->setString("Magie");
                if ((std::string)buttonLabel->getString() == "Awarded") {buttonLabel->setString("Verliehen"); buttonLabel->setScale(buttonLabel->getScale() - 0.05);}
                if ((std::string)buttonLabel->getString() == "Followed") buttonLabel->setString("Gefolgt");
                if ((std::string)buttonLabel->getString() == "Friends") buttonLabel->setString("Freunde");
            }
        };

        if (langType == "Espanol") {
            searchLabel->setString("Busqueda Rapida");
            if (this->getChildByID("length-filter-menu")->getChildByID("tiny-filter-button") != nullptr) {
                auto tinyLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("length-filter-menu")->getChildByID("tiny-filter-button")->getChildren()->objectAtIndex(0));
                auto shortLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("length-filter-menu")->getChildByID("short-filter-button")->getChildren()->objectAtIndex(0));
                auto mediumLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("length-filter-menu")->getChildByID("medium-filter-button")->getChildren()->objectAtIndex(0));
                auto longLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("length-filter-menu")->getChildByID("long-filter-button")->getChildren()->objectAtIndex(0));

                shortLabel->setString("Corto"); shortLabel->setPositionX(shortLabel->getPositionX() - 5);
                mediumLabel->setString("Mediana"); mediumLabel->setPositionX(mediumLabel->getPositionX() - 5);
                longLabel->setString("Longo"); 
            }
        }
        if (langType == "Portugues") {
            searchLabel->setString("Pesquisa Rapida");
            if (this->getChildByID("length-filter-menu")->getChildByID("tiny-filter-button") != nullptr) {
                auto tinyLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("length-filter-menu")->getChildByID("tiny-filter-button")->getChildren()->objectAtIndex(0));
                auto shortLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("length-filter-menu")->getChildByID("short-filter-button")->getChildren()->objectAtIndex(0));
                auto mediumLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("length-filter-menu")->getChildByID("medium-filter-button")->getChildren()->objectAtIndex(0));
                auto longLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("length-filter-menu")->getChildByID("long-filter-button")->getChildren()->objectAtIndex(0));

                tinyLabel->setString("Pequeno"); tinyLabel->setScale(tinyLabel->getScale() - 0.05); tinyLabel->setPositionX(tinyLabel->getPositionX() + 2);
                shortLabel->setString("Curto"); shortLabel->setPositionX(shortLabel->getPositionX() + 7);
                mediumLabel->setString("Medio");
                longLabel->setString("Longo"); 
            }
        }
        if (langType == "Russki") {
            searchLabel->setString("Bystryj Poisk");
            if (this->getChildByID("length-filter-menu")->getChildByID("tiny-filter-button") != nullptr) {
                auto tinyLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("length-filter-menu")->getChildByID("tiny-filter-button")->getChildren()->objectAtIndex(0));
                auto shortLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("length-filter-menu")->getChildByID("short-filter-button")->getChildren()->objectAtIndex(0));
                auto mediumLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("length-filter-menu")->getChildByID("medium-filter-button")->getChildren()->objectAtIndex(0));
                auto longLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("length-filter-menu")->getChildByID("long-filter-button")->getChildren()->objectAtIndex(0));

                tinyLabel->setString("Kroshechny"); tinyLabel->setScale(tinyLabel->getScale() - 0.2);
                shortLabel->setString("Korotkiy"); shortLabel->setScale(shortLabel->getScale() - 0.1); shortLabel->setPositionX(shortLabel->getPositionX() + 2);
                mediumLabel->setString("Sredniy"); mediumLabel->setScale(mediumLabel->getScale() - 0.1); mediumLabel->setPositionX(mediumLabel->getPositionX() + 2);
                longLabel->setString("Dlinniy"); longLabel->setScale(longLabel->getScale() - 0.1); longLabel->setPositionX(longLabel->getPositionX() + 2);
            }
        }
        if (langType == "Deutsch") {
            searchLabel->setString("Schnelle Suche");
            if (this->getChildByID("length-filter-menu")->getChildByID("tiny-filter-button") != nullptr) {
                auto tinyLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("length-filter-menu")->getChildByID("tiny-filter-button")->getChildren()->objectAtIndex(0));
                auto shortLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("length-filter-menu")->getChildByID("short-filter-button")->getChildren()->objectAtIndex(0));
                auto mediumLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("length-filter-menu")->getChildByID("medium-filter-button")->getChildren()->objectAtIndex(0));
                auto longLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("length-filter-menu")->getChildByID("long-filter-button")->getChildren()->objectAtIndex(0));

                tinyLabel->setString("Winzig"); tinyLabel->setPositionX(tinyLabel->getPositionX() + 4);
                shortLabel->setString("Kurz"); shortLabel->setPositionX(shortLabel->getPositionX() + 8);
                mediumLabel->setString("Mittel"); mediumLabel->setPositionX(mediumLabel->getPositionX() + 2);
                longLabel->setString("Lang");
            }
        }

        return result;
    }
};