#include <Geode/Geode.hpp> 
#include <Geode/modify/MoreSearchLayer.hpp>

using namespace geode::prelude;

class $modify(MoreSearchLayer) {
    bool init() {
        bool result = MoreSearchLayer::init();
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        auto searchLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("main-layer")->getChildByID("advanced-options-label"));

        if (langType == "Espanol") searchLabel->setString("Opciones Avanzadas");
        if (langType == "Portugues") searchLabel->setString("Opcoes Avancadas");
        if (langType == "Russki") searchLabel->setString("Dopolnitel nye Parametry");
        if (langType == "Deutsch") searchLabel->setString("Erweiterte Optionen");

        return result;
    }
};