#include <Geode/Geode.hpp> 
#include <Geode/modify/AchievementCell.hpp>

using namespace geode::prelude;

class $modify(AchievementCell) {
    bool init() {
        bool result = AchievementCell::init();
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");

        if (langType == "Espanol") {}
        if (langType == "Portuguese") {}
        if (langType == "Russki") {}
        if (langType == "Deutsch") {}
        
        return result;
    }
};