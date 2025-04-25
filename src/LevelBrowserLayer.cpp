#include <Geode/Geode.hpp> 
#include <Geode/modify/LevelBrowserLayer.hpp>

using namespace geode::prelude; 
      
class $modify(LevelBrowserLayer) {
    bool init(GJSearchObject* p0) {
        bool result = LevelBrowserLayer::init(p0);
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        bool allText = false;
        
        if (reinterpret_cast<CCLabelBMFont*>(this->getChildByID("select-all-text") != NULL)) allText = true;

        if (langType == "Espanol") {
            if (allText) reinterpret_cast<CCLabelBMFont*>(this->getChildByID("select-all-text"))->setString("Todos"); // "all"
        }
        if (langType == "Portuguese") {
            if (allText) reinterpret_cast<CCLabelBMFont*>(this->getChildByID("select-all-text"))->setString("Todos");
        }
        if (langType == "Russki") {
            if (allText) reinterpret_cast<CCLabelBMFont*>(this->getChildByID("select-all-text"))->setString("Vse");
        }
        if (langType == "Deutsch") {
            if (allText) reinterpret_cast<CCLabelBMFont*>(this->getChildByID("select-all-text"))->setString("Alle");
        }
        return result;
    }
};