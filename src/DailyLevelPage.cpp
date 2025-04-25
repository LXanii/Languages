#include <Geode/Geode.hpp> 
#include <Geode/modify/DailyLevelPage.hpp>

#include "splitFunc.hpp"

using namespace geode::prelude;

class $modify(DailyLevelPage) {

    struct Fields {
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
    };

    void updateTimers(float p0) {
        DailyLevelPage::updateTimers(p0);
        auto mainLayer = reinterpret_cast<CCNode*>(this->getChildren()->objectAtIndex(0));
        auto timeLabel = reinterpret_cast<CCLabelBMFont*>(mainLayer->getChildByID("time-label"));
        if (timeLabel != NULL) {
            try {
                auto splitLabel = splitString(timeLabel->getString(), ':');
                if (m_fields->langType == "Espanol") timeLabel->setString(fmt::format("Nuevo nivel diario en:{}", splitLabel[1]).c_str());
                if (m_fields->langType == "Portuguese") timeLabel->setString(fmt::format("Novo nivel diario em:{}", splitLabel[1]).c_str());
                if (m_fields->langType == "Russki") timeLabel->setString(fmt::format("Novyj ezednevnyj uroven v:{}", splitLabel[1]).c_str());
                if (m_fields->langType == "Deutsch") timeLabel->setString(fmt::format("Neues Tageslevel in:{}", splitLabel[1]).c_str());
            }
            catch (...) {
            }
        }
    }

    bool init(GJTimedLevelType p0) {
        bool result = DailyLevelPage::init(p0);
        auto mainLayer = reinterpret_cast<CCNode*>(this->getChildren()->objectAtIndex(0));
        auto timeLabel = reinterpret_cast<CCLabelBMFont*>(mainLayer->getChildByID("time-label"));
        try{
            auto splitLabel = splitString(timeLabel->getString(), ':');
            if (m_fields->langType == "Espanol") timeLabel->setString(fmt::format("Nuevo nivel diario en:{}", splitLabel[1]).c_str());
            if (m_fields->langType == "Portuguese") timeLabel->setString(fmt::format("Novo nivel diario em:{}", splitLabel[1]).c_str());
            if (m_fields->langType == "Russki") timeLabel->setString(fmt::format("Novyj ezednevnyj uroven v:{}", splitLabel[1]).c_str());
            if (m_fields->langType == "Deutsch") timeLabel->setString(fmt::format("Neues Tageslevel in:{}", splitLabel[1]).c_str());
    
            if (m_fields->langType == "Espanol") timeLabel->setPositionX(timeLabel->getPositionX() - 20);
            if (m_fields->langType == "Portuguese") timeLabel->setPositionX(timeLabel->getPositionX() - 20);
            if (m_fields->langType == "Russki") timeLabel->setPositionX(timeLabel->getPositionX() - 30);
            if (m_fields->langType == "Deutsch") timeLabel->setPositionX(timeLabel->getPositionX() - 20);
        }
        catch (...) {
        }
        return result;
    };
};