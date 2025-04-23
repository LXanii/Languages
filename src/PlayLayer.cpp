#include <Geode/Geode.hpp> 
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude; 

class $modify(PlayLayer) {
    void resetLevel() {
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        PlayLayer::resetLevel();

        if (langType == "Espanol") m_attemptLabel->setString(fmt::format("Intento {}", m_attempts).c_str()); //"Attempts"
        if (langType == "Portuguese") m_attemptLabel->setString(fmt::format("Tentativa {}", m_attempts).c_str());
        if (langType == "Russki") m_attemptLabel->setString(fmt::format("Popytka {}", m_attempts).c_str());
        if (langType == "Deutsch") m_attemptLabel->setString(fmt::format("Versuch {}", m_attempts).c_str());
    }
};