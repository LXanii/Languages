#include <Geode/Geode.hpp> 
#include <Geode/modify/SetTextPopup.hpp>

using namespace geode::prelude; 
      
class $modify(SetTextPopup) {
    bool init(gd::string p0, gd::string p1, int p2, gd::string p3, gd::string p4, bool p5, float p6) {
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        if (p3 == "Find Level") {
            if (langType == "Espanol") p3 = "Buscar Nivel";
            if (langType == "Portugues") p3 = "Encontrar Nivel";
            if (langType == "Russki") p3 = "Najti Uroven";
            if (langType == "Deutsch") p3 = "Level Finden";
        }
        if (p3 == "Set Folder Name") {
            if (langType == "Espanol") p3 = "Establecer nombre de Carpeta";
            if (langType == "Portugues") p3 = "Definir nome da Pasta";
            if (langType == "Russki") p3 = "Ustanovit imja Papki";
            if (langType == "Deutsch") p3 = "Ordnername Festlegen";
        }
        return SetTextPopup::init(p0, p1, p2, p3, p4, p5, p6);
    }
};