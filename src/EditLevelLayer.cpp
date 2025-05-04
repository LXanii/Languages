#include <Geode/Geode.hpp> 
#include <Geode/modify/EditLevelLayer.hpp>

using namespace geode::prelude;

class $modify(EditLevelLayer) {
    bool init(GJGameLevel* p0) {
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        
        bool result = EditLevelLayer::init(p0);
        auto lengthLabel = reinterpret_cast<CCLabelBMFont*>(reinterpret_cast<CCNode*>(this->getChildByID("level-length"))->getChildren()->objectAtIndex(1));
        auto verifiedLabel = reinterpret_cast<CCLabelBMFont*>(reinterpret_cast<CCNode*>(this->getChildByID("level-verified"))->getChildren()->objectAtIndex(1));
        auto versionLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("version-label"));
        std::string length = lengthLabel->getString();
        std::string verified = verifiedLabel->getString();
        
        if (langType == "Espanol") {
            if (verified == "Verified") verifiedLabel->setString("Verificado"); // "Verified"
            else verifiedLabel->setString("Sin verificar"); // "Unverified"
            verifiedLabel->setPositionX(verifiedLabel->getPositionX() + 12);
            versionLabel->setString(fmt::format("Version: {}", p0->m_levelVersion).c_str());
            
            if (length == "Tiny") lengthLabel->setString("Tiny"); // "Tiny"
            if (length == "Short") lengthLabel->setString("Corto"); // "Short"
            if (length == "Medium") {
                lengthLabel->setString("Mediana"); // "Medium"
                lengthLabel->setPositionX(lengthLabel->getPositionX() + 5);
            }
            if (length == "Long") {
                lengthLabel->setString("Largo");// "Large"
                lengthLabel->setPositionX(lengthLabel->getPositionX() + 5);
            }
            if (length == "XL") lengthLabel->setString("XL");
        }
        if (langType == "Portugues") {
            if (verified == "Verified") verifiedLabel->setString("Verificado"); // "Verified"
            else verifiedLabel->setString("Nao verificar"); // "Unverified"
            verifiedLabel->setPositionX(verifiedLabel->getPositionX() + 12);
            versionLabel->setString(fmt::format("Versao: {}", p0->m_levelVersion).c_str());
            
            if (length == "Tiny") {
                lengthLabel->setString("Pequeno"); // "Tiny"
                lengthLabel->setPositionX(lengthLabel->getPositionX() + 15);
            }
            if (length == "Short") {
                lengthLabel->setString("Curto"); // "Short"
                lengthLabel->setPositionX(lengthLabel->getPositionX() + 2);
            }
            if (length == "Medium") {
                lengthLabel->setString("Medio"); // "Medium"
                lengthLabel->setPositionX(lengthLabel->getPositionX() - 5);
            }
            if (length == "Long") {
                lengthLabel->setString("Longo");// "Large"
                lengthLabel->setPositionX(lengthLabel->getPositionX() + 5);
            }
            if (length == "XL") lengthLabel->setString("XL");
        }
        if (langType == "Russki") {
            if (verified == "Verified") verifiedLabel->setString("Proveren"); // "Verified"
            else verifiedLabel->setString("Neproveren"); // "Unverified"
            verifiedLabel->setPositionX(verifiedLabel->getPositionX() + 10);
            versionLabel->setString(fmt::format("Versija: {}", p0->m_levelVersion).c_str());
            
            if (length == "Tiny") {
                lengthLabel->setString("Kroshechny"); // "Tiny"
                lengthLabel->setPositionX(lengthLabel->getPositionX() + 21);
                lengthLabel->setScale(0.4);
            }
            if (length == "Short") {
                lengthLabel->setString("Korotkiy"); // "Short"
                lengthLabel->setPositionX(lengthLabel->getPositionX() + 13);
            }
            if (length == "Medium") {
                lengthLabel->setString("Sredniy"); // "Medium"
                lengthLabel->setPositionX(lengthLabel->getPositionX() + 4);
            }
            if (length == "Long") {
                lengthLabel->setString("Dlinniy");// "Large"
                lengthLabel->setPositionX(lengthLabel->getPositionX() + 8);
            }
            if (length == "XL") lengthLabel->setString("XL");
        }
        if (langType == "Deutsch") {
            if (verified == "Verified") verifiedLabel->setString("Gepruft"); // "Verified"
            else {
                verifiedLabel->setString("Nicht verifiziert"); // "Unverified"
                verifiedLabel->setPositionX(verifiedLabel->getPositionX() + 20);
                verifiedLabel->setScale(0.45);
            }
            versionLabel->setString(fmt::format("Fassung: {}", p0->m_levelVersion).c_str());
            
            if (length == "Tiny") {
                lengthLabel->setString("Winzig"); // "Tiny"
                lengthLabel->setPositionX(lengthLabel->getPositionX() + 8);
            }
            if (length == "Short") {
                lengthLabel->setString("Kurz"); // "Short"
                lengthLabel->setPositionX(lengthLabel->getPositionX() - 2);
            }
            if (length == "Medium") {
                lengthLabel->setString("Mittel"); // "Medium"
                lengthLabel->setPositionX(lengthLabel->getPositionX() + 1);
            }
            if (length == "Long") lengthLabel->setString("Lang");// "Large"
            if (length == "XL") lengthLabel->setString("XL");
        }

        return result;
    }
};

