#include <Geode/Geode.hpp> 
#include <Geode/modify/RewardsPage.hpp>

using namespace geode::prelude; 

class $modify(RewardsPage) {
    void updateTimers(float p0) {
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        RewardsPage::updateTimers(p0);

        if (langType == "Espanol") {
            if ((std::string)m_leftLabel->getString() == "Open") m_leftLabel->setString("Abrir");
            if ((std::string)m_rightLabel->getString() == "Open") m_rightLabel->setString("Abrir");
        }
        if (langType == "Portuguese") {
            if ((std::string)m_leftLabel->getString() == "Open") m_leftLabel->setString("Aberto");
            if ((std::string)m_rightLabel->getString() == "Open") m_rightLabel->setString("Aberto");
        }
        if (langType == "Russki") {
            if ((std::string)m_leftLabel->getString() == "Open") m_leftLabel->setString("Otkryt");
            if ((std::string)m_rightLabel->getString() == "Open") m_rightLabel->setString("Otkryt");
        }
        if (langType == "Deutsch") {
            if ((std::string)m_leftLabel->getString() == "Open") m_leftLabel->setString("Oeffnen Sie");
            if ((std::string)m_rightLabel->getString() == "Open") m_rightLabel->setString("Oeffnen Sie");
        }
    }
};