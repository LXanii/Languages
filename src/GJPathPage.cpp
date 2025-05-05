#include <Geode/Geode.hpp> 
#include <Geode/modify/GJPathPage.hpp>

using namespace geode::prelude;

class $modify(GJPathPage) {
    bool init(int p0, GJPathsLayer* p1) {
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        bool result = GJPathPage::init(p0, p1);
        log::info("{} 35", reinterpret_cast<CCLayer*>(this->getChildren()->objectAtIndex(0))->getChildrenCount());
        if (reinterpret_cast<CCLayer*>(this->getChildren()->objectAtIndex(0))->getChildrenCount() == 34) {
            auto activeLabel = reinterpret_cast<CCLabelBMFont*>(reinterpret_cast<CCLayer*>(this->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(32));
    
            if (langType == "Espanol") activeLabel->setString("Activo");
            if (langType == "Portugues") activeLabel->setString("Ativo");
            if (langType == "Russki") activeLabel->setString("Aktivnyj");
            if (langType == "Deutsch") activeLabel->setString("Aktiv");
        }

        return result;
    }
};