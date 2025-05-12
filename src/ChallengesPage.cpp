#include <Geode/Geode.hpp> 
#include <Geode/modify/ChallengesPage.hpp>

#include "splitFunc.hpp"

using namespace geode::prelude;

class $modify(ChallengesPage) {

    struct Fields {
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
    };

    bool init() {
        bool result = ChallengesPage::init();
        auto splitTime = splitString(m_countdownLabel->getString(), ':');

        if (m_fields->langType == "Espanol") {m_countdownLabel->setString(fmt::format("Nuevas Misiones En:{}", splitTime[1]).c_str()); m_countdownLabel->setPositionX(m_countdownLabel->getPositionX() - 10);}
        if (m_fields->langType == "Portugues") m_countdownLabel->setString(fmt::format("Novas Missoes:{}", splitTime[1]).c_str());
        if (m_fields->langType == "Russki") m_countdownLabel->setString(fmt::format("Novye Zadanija:{}", splitTime[1]).c_str());
        if (m_fields->langType == "Deutsch") m_countdownLabel->setString(fmt::format("Neue Quests In:{}", splitTime[1]).c_str());

        return result;
    }

    void updateTimers(float p0) {
        ChallengesPage::updateTimers(p0);
        auto splitTime = splitString(m_countdownLabel->getString(), ':');

        if (m_fields->langType == "Espanol") m_countdownLabel->setString(fmt::format("Nuevas Misiones En:{}", splitTime[1]).c_str());
        if (m_fields->langType == "Portugues") m_countdownLabel->setString(fmt::format("Novas Missoes:{}", splitTime[1]).c_str());
        if (m_fields->langType == "Russki") m_countdownLabel->setString(fmt::format("Novye Zadanija:{}", splitTime[1]).c_str());
        if (m_fields->langType == "Deutsch") m_countdownLabel->setString(fmt::format("Neue Quests In:{}", splitTime[1]).c_str());
    }
};