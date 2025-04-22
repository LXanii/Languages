#include <Geode/Geode.hpp> 
#include <Geode/modify/LevelBrowserLayer.hpp>

using namespace geode::prelude; 
        
class $modify(LevelBrowserLayer) {
    bool init(GJSearchObject* p0) {
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        bool result = LevelBrowserLayer::init(p0);

        auto mainLayer = this->getChildByID("GJListLayer");
        auto mylevelsLabel = reinterpret_cast<CCLabelBMFont*>(mainLayer->getChildByID("title"));

        if (langType == "Espanol") {
            mylevelsLabel->setString(("Mis Niveles"));
        }
        if (langType == "Portuguese") {
            mylevelsLabel->setString(("Os Meus Niveis"));
        }
        if (langType == "Russki") {
            mylevelsLabel->setString(("Moi Urovni"));
        }
        if (langType == "Deutsch") {
            mylevelsLabel->setString(("Meine Levels"));
       

        }
        return result;
    }
};