#include <Geode/Geode.hpp> 
#include <Geode/modify/GJListLayer.hpp>

using namespace geode::prelude;

class $modify(GJListLayer) {
    bool init(BoomListView* p0, char const* p1, cocos2d::ccColor4B p2, float p3, float p4, int p5) {
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        if (langType == "Espanol") {
            if (p1 != NULL && (std::string)p1 == "My Levels") p1 = "Mis Niveles"; // "My Levels"
            if (p1 != NULL && (std::string)p1 == "Saved Levels") p1 = "Niveles Guardados"; // "Saved Levels"
            if (p1 != NULL && (std::string)p1 == "Online Levels") p1 = "Niveles en Linea"; // "Online Levels"
            if (p1 != NULL && (std::string)p1 == "Favorite Levels") p1 = "Niveles Favoritos"; // "Favorite Levels"
            if (p1 != NULL && (std::string)p1 == "My Lists") p1 = "Mis Listas"; // "My Lists"
            if (p1 != NULL && (std::string)p1 == "Favorite Lists") p1 = "Listas Favoritas"; // "Favorite Lists"
            if (p1 != NULL && (std::string)p1 == "Online Lists") p1 = "Listas en Linea"; // "Online Lists"
            if (p1 != NULL && (std::string)p1 == "My Online Lists") p1 = "Mis Listas en Linea"; // "My Online Lists"
            if (p1 != NULL && (std::string)p1 == "Map Packs") p1 = "Paquetes de Mapas"; // "Map Packs"
            if (p1 != NULL && (std::string)p1 == "Soundtrack") p1 = "Banda sonora"; // "Soundtrack"
            if (p1 != NULL && (std::string)p1 == "Stats") p1 = "Estadisticas"; // "Stats"
            if (p1 != NULL && (std::string)p1 == "Account") p1 = "Cuenta"; // "Account"
            if (p1 != NULL && (std::string)p1 == "Support") p1 = "Soporte"; // "Support"
            if (p1 != NULL && (std::string)p1 == "SFX Library Credits") p1 = "Creditos de la Biblioteca de SFX"; // "SFX Library Credits"
            if (p1 != NULL && (std::string)p1 == "Support Links") p1 = "Enlaces de Apoyo"; // "Support Links"
            if (p1 != NULL && (std::string)p1 == "Account Help") p1 = "Ayuda para Cuentas"; // "Account Help"
        }
        if (langType == "Portugues") {
            if (p1 != NULL && (std::string)p1 == "My Levels") p1 = "Meus Niveis";
            if (p1 != NULL && (std::string)p1 == "Saved Levels") p1 = "Niveis Salvos";
            if (p1 != NULL && (std::string)p1 == "Online Levels") p1 = "Niveis Online";
            if (p1 != NULL && (std::string)p1 == "Favorite Levels") p1 = "Niveis Favoritos"; // "Favorite Levels"
            if (p1 != NULL && (std::string)p1 == "My Lists") p1 = "Minhas Listas"; // "My Lists"
            if (p1 != NULL && (std::string)p1 == "Favorite Lists") p1 = "Listas Favoritas"; // "Online Lists"
            if (p1 != NULL && (std::string)p1 == "Online Lists") p1 = "Listas Online"; // "Favorite Lists"
            if (p1 != NULL && (std::string)p1 == "My Online Lists") p1 = "Minhas Listas Online"; // "My Online Lists"
            if (p1 != NULL && (std::string)p1 == "Map Packs") p1 = "Pacotes de Mapas"; // "Map Packs"
            if (p1 != NULL && (std::string)p1 == "Soundtrack") p1 = "Trilha Sonora"; // "Soundtrack"
            if (p1 != NULL && (std::string)p1 == "Stats") p1 = "Estatisticas"; // "Stats"
            if (p1 != NULL && (std::string)p1 == "Account") p1 = "Conta"; // "Account"
            if (p1 != NULL && (std::string)p1 == "Support") p1 = "Apoio"; // "Support"
            if (p1 != NULL && (std::string)p1 == "SFX Library Credits") p1 = "Creditos da Biblioteca SFX"; // "SFX Library Credits"
            if (p1 != NULL && (std::string)p1 == "Support Links") p1 = "Links de Suporte"; // "Support Links"
            if (p1 != NULL && (std::string)p1 == "Account Help") p1 = "Ajuda da conta"; // "Account Help"
        }
        if (langType == "Russki") {
            if (p1 != NULL && (std::string)p1 == "My Levels") p1 = "Moi Urovni";
            if (p1 != NULL && (std::string)p1 == "Saved Levels") p1 = "Sohranennye Urovni";
            if (p1 != NULL && (std::string)p1 == "Online Levels") p1 = "Onlajn Urovni";
            if (p1 != NULL && (std::string)p1 == "Favorite Levels") p1 = "Ljubimye Urovni"; // "Favorite Levels"
            if (p1 != NULL && (std::string)p1 == "My Lists") p1 = "Moi Spiski"; // "My Lists"
            if (p1 != NULL && (std::string)p1 == "Favorite Lists") p1 = "Ljubimye Spiski"; // "Online Lists"
            if (p1 != NULL && (std::string)p1 == "Online Lists") p1 = "Onlajn-Spiski"; // "Favorite Lists"
            if (p1 != NULL && (std::string)p1 == "My Online Lists") p1 = "Moi Onlajn-Spiski"; // "My Online Lists"
            if (p1 != NULL && (std::string)p1 == "Map Packs") p1 = "Nabory Kart"; // "Map Packs"
            if (p1 != NULL && (std::string)p1 == "Soundtrack") p1 = "Saundtrek"; // "Soundtrack"
            if (p1 != NULL && (std::string)p1 == "Stats") p1 = "Statistika"; // "Stats"
            if (p1 != NULL && (std::string)p1 == "Account") p1 = "Scet"; // "Account"
            if (p1 != NULL && (std::string)p1 == "Support") p1 = "Podderzka"; // "Support"
            if (p1 != NULL && (std::string)p1 == "SFX Library Credits") p1 = "Kredity Biblioteki SFX"; // "SFX Library Credits"
            if (p1 != NULL && (std::string)p1 == "Support Links") p1 = "Ssylki na Podderzku"; // "Support Links"
            if (p1 != NULL && (std::string)p1 == "Account Help") p1 = "Spravka o Sostojanii Sceta"; // "Account Help"
        }
        if (langType == "Deutsch") {
            if (p1 != NULL && (std::string)p1 == "My Levels") p1 = "Meine Level";
            if (p1 != NULL && (std::string)p1 == "Saved Levels") p1 = "Gespeicherte Level";
            if (p1 != NULL && (std::string)p1 == "Online Levels") p1 = "Online Level";
            if (p1 != NULL && (std::string)p1 == "Favorite Levels") p1 = "Bevorzugte Level"; // "Favorite Levels"
            if (p1 != NULL && (std::string)p1 == "My Lists") p1 = "Meine Listen"; // "My Lists"
            if (p1 != NULL && (std::string)p1 == "Favorite Lists") p1 = "Bevorzugte Listen"; // "Online Lists"
            if (p1 != NULL && (std::string)p1 == "Online Lists") p1 = "Online Listen"; // "Favorite Lists"
            if (p1 != NULL && (std::string)p1 == "My Online Lists") p1 = "Meine Online-Listen"; // "My Online Lists"
            if (p1 != NULL && (std::string)p1 == "Map Packs") p1 = "Karten-Packs"; // "Map Packs"
            //if (p1 != NULL && (std::string)p1 == "Soundtrack") p1 = "Paquetes de Mapas"; // "Soundtrack"
            if (p1 != NULL && (std::string)p1 == "Stats") p1 = "Statistik"; // "Stats"
            if (p1 != NULL && (std::string)p1 == "Account") p1 = "Konto"; // "Account"
            if (p1 != NULL && (std::string)p1 == "Support") p1 = "Unterstuetzung"; // "Support"
            if (p1 != NULL && (std::string)p1 == "SFX Library Credits") p1 = "SFX-Bibliothek Credits"; // "SFX Library Credits"
            if (p1 != NULL && (std::string)p1 == "Support Links") p1 = "Links zur Unterstuetzung"; // "Support Links"
            if (p1 != NULL && (std::string)p1 == "Account Help") p1 = "Konto-Hilfe"; // "Account Help"
        }
        return GJListLayer::init(p0, p1, p2, p3, p4, p5);
    }
};