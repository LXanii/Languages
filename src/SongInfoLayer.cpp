#include <Geode/Geode.hpp> 
#include <Geode/modify/SongInfoLayer.hpp>

using namespace geode::prelude;

class $modify(SongInfoLayer) {
    bool init(gd::string p0, gd::string p1, gd::string p2, gd::string p3, gd::string p4, gd::string p5, int p6, gd::string p7, int p8) {
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        bool result = SongInfoLayer::init(p0, p1, p2, p3, p4, p5, p6, p7, p8);
        auto menuLabel = reinterpret_cast<CCLabelBMFont*>(reinterpret_cast<CCMenu*>(this->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(1));
        auto practiceLabel = reinterpret_cast<CCLabelBMFont*>(reinterpret_cast<CCMenu*>(this->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(2));
        if (langType == "Espanol") {
            //menuLabel->setString("Modo Normal");
            practiceLabel->setString("Practica");
        }
        if (langType == "Portugues") {
            //menuLabel->setString("Modo Normal");
            practiceLabel->setString("Pratica");
        }
        if (langType == "Russki") {
            menuLabel->setString("Menju");
            practiceLabel->setString("Praktika");
        }
        if (langType == "Deutsch") {
            menuLabel->setString("Menue");
            practiceLabel->setString("Praxis");
        }
        log::info("{}", menuLabel->getString());
        return result;
    }
};