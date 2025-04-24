#include <Geode/Geode.hpp> 
#include <Geode/modify/GJListLayer.hpp>

using namespace geode::prelude;

class $modify(GJListLayer) {
    bool init(BoomListView* p0, char const* p1, cocos2d::ccColor4B p2, float p3, float p4, int p5) {
        std::string newString = p1;
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        if (langType == "Espanol") {
            if (newString == "My Levels") newString = "Mis Niveles"; // "My Levels"
            if (newString == "Saved Levels") newString = "Niveles Guardados"; // "Saved Levels"
            if (newString == "Online Levels") newString = "Niveles en Linea"; // "Online Levels"
            if (newString == "My Lists") newString = "Mis Listas"; // "My Lists"
            if (newString == "Favorite Lists") newString = "Listas Favoritas"; // "Online Lists"
            if (newString == "Online Lists") newString = "Listas en Linea"; // "Favorite Lists"
        }
        if (langType == "Portuguese") {
            if (newString == "My Levels") newString = "Meus Niveis";
            if (newString == "Saved Levels") newString = "Niveis Guardados";
            if (newString == "Online Levels") newString = "Niveis em Linha";
            if (newString == "My Lists") newString = "As Minhas Listas"; // "My Lists"
            if (newString == "Favorite Lists") newString = "Listas de Favoritos"; // "Online Lists"
            if (newString == "Online Lists") newString = "Listas online"; // "Favorite Lists"
        }
        if (langType == "Russki") {
            if (newString == "My Levels") newString = "Moi Urovni";
            if (newString == "Saved Levels") newString = "Sohranennye Urovni";
            if (newString == "Online Levels") newString = "Onlajn Urovni";
            if (newString == "My Lists") newString = "Moi Spiski"; // "My Lists"
            if (newString == "Favorite Lists") newString = "Ljubimye Spiski"; // "Online Lists"
            if (newString == "Online Lists") newString = "Onlajn Spiski"; // "Favorite Lists"
        }
        if (langType == "Deutsch") {
            if (newString == "My Levels") newString = "Meine Level";
            if (newString == "Saved Levels") newString = "Gespeicherte Level";
            if (newString == "Online Levels") newString = "Online Level";
            if (newString == "My Lists") newString = "Meine Listen"; // "My Lists"
            if (newString == "Favorite Lists") newString = "Bevorzugte Listen"; // "Online Lists"
            if (newString == "Online Lists") newString = "Online Listen"; // "Favorite Lists"
        }
        return GJListLayer::init(p0, newString.c_str(), p2, p3, p4, p5);
    }
};