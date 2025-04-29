#include <Geode/Geode.hpp> 
#include <Geode/modify/LevelCell.hpp>

using namespace geode::prelude;

class $modify(LevelCell) {
    void loadFromLevel(GJGameLevel* p0) {
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        LevelCell::loadFromLevel(p0);
        bool creatingTab = false;

        auto mainLayer = this->getChildByID("main-layer");
        auto viewBtn = reinterpret_cast<CCNode*>(mainLayer->getChildByID("main-menu")->getChildByID("view-button")->getChildren()->objectAtIndex(0));
        if (mainLayer->getChildByID("info-label") != NULL) creatingTab = true;

        auto lengthLabel = reinterpret_cast<CCLabelBMFont*>(mainLayer->getChildByID("length-label"));
        std::string length = lengthLabel->getString();
        
        if (langType == "Espanol") {
            if (creatingTab) {
                auto verifiedLabel = reinterpret_cast<CCLabelBMFont*>(mainLayer->getChildByID("info-label"));
                std::string verified = verifiedLabel->getString();
                if (verified == "Verified") verifiedLabel->setString("Verificado"); // "Verified"
                else verifiedLabel->setString("Sin verificar"); // "Unverified"
            }
            
            if (viewBtn->getChildrenCount() > 0) { // crash fix 4 weekly & daily
                auto viewText = reinterpret_cast<CCLabelBMFont*>(viewBtn->getChildren()->objectAtIndex(0));
    
                std::string viewText2 = viewText->getString();
    
                if (viewText2 == "View") viewText->setString("Ver"); // "View"
                else {
                    viewText->setString("Consiguelo"); // "Get It"
                    viewText->setScale(0.275);
                }
            }

            if (length == "Tiny") lengthLabel->setString("Tiny"); // "Tiny"
            if (length == "Short") lengthLabel->setString("Corto"); // "Short"
            if (length == "Medium") {
                lengthLabel->setString("Mediana"); // "Medium"
                if(creatingTab) lengthLabel->setScale(0.375);
            }
            if (length == "Long") {
                lengthLabel->setString("Largo"); // "Large"
                if(creatingTab) lengthLabel->setScale(0.35);
            }
            if (length == "XL") lengthLabel->setString("XL");
        }

        if (langType == "Portuguese") {
            if (creatingTab) {
                auto verifiedLabel = reinterpret_cast<CCLabelBMFont*>(mainLayer->getChildByID("info-label"));
                std::string verified = verifiedLabel->getString();
                if (verified == "Verified") verifiedLabel->setString("Verificar");
                else verifiedLabel->setString("Nao verificar");
            }
            
            if (viewBtn->getChildrenCount() > 0) {
                auto viewBtn = reinterpret_cast<CCNode*>(mainLayer->getChildByID("main-menu")->getChildByID("view-button")->getChildren()->objectAtIndex(0));
                auto viewText = reinterpret_cast<CCLabelBMFont*>(viewBtn->getChildren()->objectAtIndex(0));
    
                std::string viewText2 = viewText->getString();
    
                if (viewText2 == "View") viewText->setString("Ver");
                else viewText->setString("Obter");
            }

            if (length == "Tiny") {
                lengthLabel->setString("Curto");
                lengthLabel->setScale(0.35);
            }
            if (length == "Short") {
                lengthLabel->setString("Pequeno");
                if(creatingTab) lengthLabel->setScale(0.35);
            }
            if (length == "Medium") lengthLabel->setString("Medio");
            if (length == "Long") {
                lengthLabel->setString("Longo");
                if(creatingTab) lengthLabel->setScale(0.35);
            }
            if (length == "XL") lengthLabel->setString("XL");
        }
        if (langType == "Russki") {
            if (creatingTab) {
                auto verifiedLabel = reinterpret_cast<CCLabelBMFont*>(mainLayer->getChildByID("info-label"));
                std::string verified = verifiedLabel->getString();
                if (verified == "Verified") verifiedLabel->setString("Proveren");
                else verifiedLabel->setString("Neproveren");
            }
            
            if (viewBtn->getChildrenCount() > 0) {
                auto viewBtn = reinterpret_cast<CCNode*>(mainLayer->getChildByID("main-menu")->getChildByID("view-button")->getChildren()->objectAtIndex(0));
                auto viewText = reinterpret_cast<CCLabelBMFont*>(viewBtn->getChildren()->objectAtIndex(0));
    
                std::string viewText2 = viewText->getString();
    
                if (viewText2 == "View") {
                    viewText->setString("Posmotret");
                    viewText->setScale(0.275);
                }
                else {
                    viewText->setString("Polucit");
                    viewText->setScale(0.325);
                }
            }

            if (length == "Tiny") {
                lengthLabel->setString("Kroshechny");
                lengthLabel->setScale(0.2);
            }
            if (length == "Short") {
                lengthLabel->setString("Korotkiy");
                lengthLabel->setScale(0.3);
            }
            if (length == "Medium") lengthLabel->setString("Sredniy");
            if (length == "Long") {
                lengthLabel->setString("Dlinniy");
                lengthLabel->setScale(0.3);
            }
            if (length == "XL") lengthLabel->setString("XL");
        }
        if (langType == "Deutsch") {
            if (creatingTab) {
                auto verifiedLabel = reinterpret_cast<CCLabelBMFont*>(mainLayer->getChildByID("info-label"));
                std::string verified = verifiedLabel->getString();
                if (verified == "Verified") verifiedLabel->setString("Gepruft");
                else {
                    verifiedLabel->setString("Nicht verifiziert");
                    verifiedLabel->setScale(0.3);
                }
            }
            
            if (viewBtn->getChildrenCount() > 0) {
                auto viewBtn = reinterpret_cast<CCNode*>(mainLayer->getChildByID("main-menu")->getChildByID("view-button")->getChildren()->objectAtIndex(0));
                auto viewText = reinterpret_cast<CCLabelBMFont*>(viewBtn->getChildren()->objectAtIndex(0));
    
                std::string viewText2 = viewText->getString();
    
                if (viewText2 == "View") {
                    viewText->setString("Ansehen");
                    viewText->setScale(0.35);
                }
                else {
                    viewText->setString("Kriegen");
                    viewText->setScale(0.35);
                }
            }

            if (length == "Tiny") {
                lengthLabel->setString("Winzig");
                lengthLabel->setScale(0.325);
            }
            if (length == "Short") {
                lengthLabel->setString("Kurz");
            }
            if (length == "Medium") lengthLabel->setString("Mittel");
            if (length == "Long") lengthLabel->setString("Lang");
            if (length == "XL") lengthLabel->setString("XL");
        }
    }
};