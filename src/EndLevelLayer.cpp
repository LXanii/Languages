#include <Geode/Geode.hpp> 
#include <Geode/modify/EndLevelLayer.hpp>

#include "splitFunc.hpp"

using namespace geode::prelude;

class $modify(EndLevelLayer) {
    void customSetup() {
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        EndLevelLayer::customSetup();

        auto mainLayer = this->getChildByID("main-layer");
        auto attemptLabel = reinterpret_cast<CCLabelBMFont*>(mainLayer->getChildByID("attempts-label"));
        auto jumpsLabel = reinterpret_cast<CCLabelBMFont*>(mainLayer->getChildByID("jumps-label"));
        auto timeLabel = reinterpret_cast<CCLabelBMFont*>(mainLayer->getChildByID("time-label"));
        auto time = splitString(timeLabel->getString(), ':');
        auto playTime = fmt::format("{}:{}", time[1], time[2]);
        
        if (langType == "Espanol") {
            attemptLabel->setString(fmt::format("Intentos: {}", m_playLayer->m_attempts).c_str()); // "Attempts: 0"
            jumpsLabel->setString(fmt::format("Saltos: {}", m_playLayer->m_jumps).c_str()); // "Jumps: 0"
            timeLabel->setString(fmt::format("Tiempo:{}", playTime).c_str()); // "Time: 0"
        }
        if (langType == "Portugues") {
            attemptLabel->setString(fmt::format("Tentativas: {}", m_playLayer->m_attempts).c_str());
            jumpsLabel->setString(fmt::format("Saltos: {}", m_playLayer->m_jumps).c_str());
            timeLabel->setString(fmt::format("Tempo:{}", playTime).c_str());
        }
        if (langType == "Russki") {
            attemptLabel->setString(fmt::format("Popytki: {}", m_playLayer->m_attempts).c_str());
            jumpsLabel->setString(fmt::format("Pryzki: {}", m_playLayer->m_jumps).c_str());
            timeLabel->setString(fmt::format("Vremja:{}", playTime).c_str());
        }
        if (langType == "Deutsch") {
            attemptLabel->setString(fmt::format("Versuche: {}", m_playLayer->m_attempts).c_str());
            jumpsLabel->setString(fmt::format("Spruenge: {}", m_playLayer->m_jumps).c_str());
            timeLabel->setString(fmt::format("Zeit:{}", playTime).c_str());
        }

        if (reinterpret_cast<CCNode*>(mainLayer->getChildByID("complete-message")) != nullptr) {
            auto completeMessage = reinterpret_cast<CCNode*>(mainLayer->getChildByID("complete-message"));
            auto messageLabel = reinterpret_cast<CCLabelBMFont*>(reinterpret_cast<CCNode*>(completeMessage->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(0));
            if (langType == "Espanol") {messageLabel->setString("Nivel Verificado!"); messageLabel->setPositionX(messageLabel->getPositionX() - 3);}
            if (langType == "Portugues") {messageLabel->setString("Nivel Verificado!"); messageLabel->setPositionX(messageLabel->getPositionX() - 3);}
            if (langType == "Russki") {messageLabel->setString("Uroven Proveren!"); messageLabel->setPositionX(messageLabel->getPositionX() - 3);}
            if (langType == "Deutsch") {messageLabel->setString("Level Verifiziert!"); messageLabel->setPositionX(messageLabel->getPositionX() - 3);}
        }
    }
};