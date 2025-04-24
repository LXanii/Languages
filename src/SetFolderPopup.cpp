#include <Geode/Geode.hpp> 
#include <Geode/modify/SetFolderPopup.hpp>

using namespace geode::prelude;

class $modify(SetFolderPopup) {
    bool init(int value, bool isCreated, gd::string title) {
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        if (title == "Go to Folder") {
            if (langType == "Espanol") title = "Ir a Carpeta";
            if (langType == "Portuguese") title = "Ir para a Pasta";
            if (langType == "Russki") title = "Perejti v Papku";
            if (langType == "Deutsch") title = "Gehe zu Ordner";
        }
        if (title == "Set Folder") {
            if (langType == "Espanol") title = "Establecer Carpeta";
            if (langType == "Portuguese") title = "Definir Pasta";
            if (langType == "Russki") title = "Ustanovit Papku";
            if (langType == "Deutsch") title = "Ordner Einstellen";
        }
        return SetFolderPopup::init(value, isCreated, title);
    };
};