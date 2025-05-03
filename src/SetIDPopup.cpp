#include <Geode/Geode.hpp> 
#include <Geode/modify/SetIDPopup.hpp>

using namespace geode::prelude; 
      
class $modify(SetIDPopup) {
    bool init(int current, int begin, int end, gd::string title, gd::string button, bool p5, int p6, float p7, bool p8, bool p9) {
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        if (title == "Go to Page") {
            if (langType == "Espanol") title = "Ir a la Pagina";
            if (langType == "Portugues") title = "Ir para a Pagina";
            if (langType == "Russki") title = "Perejti na Stranicu";
            if (langType == "Deutsch") title = "Weiter zur Seite";
        }
        return SetIDPopup::init(current, begin, end, title, button, p5, p6, p7, p8, p9);
    }
};