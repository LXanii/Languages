#include <Geode/Geode.hpp> 
#include <Geode/modify/ChallengeNode.hpp>

#include "splitFunc.hpp"

using namespace geode::prelude;

class $modify(ChallengeNode) {
    bool init(GJChallengeItem* challengeItem, ChallengesPage* challengesPage, bool isNew) {
        bool result = ChallengeNode::init(challengeItem, challengesPage, isNew);
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        auto taskLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("collect-label"));
        auto titleLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("title-label"));
        auto splitTask = splitString(taskLabel->getString(), ' ');
        
        if (langType != "English") this->getChildByID("collect-icon")->setVisible(false); // idiot hardcoded positions im not dealing w it
        if (langType == "Espanol") {
            if ((std::string)titleLabel->getString() == "Orb Finder") titleLabel->setString("Buscador de Orbes");
            if ((std::string)titleLabel->getString() == "Star Finder") titleLabel->setString("Buscador de Estrellas");
            if ((std::string)titleLabel->getString() == "Coin Finder") titleLabel->setString("Buscador de Monedas");
            if ((std::string)titleLabel->getString() == "Orb Collector") titleLabel->setString("Coleccionista de Orbes");
            if ((std::string)titleLabel->getString() == "Star Collector") titleLabel->setString("Coleccionista de Estrellas");
            if ((std::string)titleLabel->getString() == "Coin Collector") titleLabel->setString("Coleccionista de Monedas");
            if ((std::string)titleLabel->getString() == "Orb Master") titleLabel->setString("Maestro del Orbe");
            if ((std::string)titleLabel->getString() == "Star Master") titleLabel->setString("Maestro de las Estrellas");
            if ((std::string)titleLabel->getString() == "Coin Master") titleLabel->setString("Maquina de Monedas");
            if ((std::string)splitTask[2] == "Silver") { // Collect {} Silver Coins.
                taskLabel->setString(fmt::format("Consigue {} Monedas de Plata.", splitTask[1]).c_str());
            }
            if ((std::string)splitTask[2] == "Mana") { // Collect {} Mana Orbs.
                taskLabel->setString(fmt::format("Recoge {} Orbes de Mana.", splitTask[1]).c_str());
            }
            if ((std::string)splitTask[2] == "Stars/Moons.") { // Collect {} Stars/Moons.
                taskLabel->setString(fmt::format("Recoge {} Estrellas/Lunas.", splitTask[1]).c_str());
            }
        }
        if (langType == "Portugues") {
            if ((std::string)titleLabel->getString() == "Orb Finder") titleLabel->setString("Localizador de Orbe");
            if ((std::string)titleLabel->getString() == "Star Finder") titleLabel->setString("Localizador de Estrelas");
            if ((std::string)titleLabel->getString() == "Coin Finder") titleLabel->setString("Localizador de Moedas");
            if ((std::string)titleLabel->getString() == "Orb Collector") titleLabel->setString("Coletor de Orbes");
            if ((std::string)titleLabel->getString() == "Star Collector") titleLabel->setString("Coletor de Estrelas");
            if ((std::string)titleLabel->getString() == "Coin Collector") titleLabel->setString("Coletor de Moedas");
            if ((std::string)titleLabel->getString() == "Orb Master") titleLabel->setString("Mestre de Orbe");
            if ((std::string)titleLabel->getString() == "Star Master") titleLabel->setString("Mestre das Estrelas");
            //if ((std::string)titleLabel->getString() == "Coin Master") titleLabel->setString("Maquina de Monedas");
            if ((std::string)splitTask[2] == "Silver") { // Collect {} Silver Coins.
                taskLabel->setString(fmt::format("Colete {} Moedas de Prata.", splitTask[1]).c_str());
            }
            if ((std::string)splitTask[2] == "Mana") { // Collect {} Mana Orbs.
                taskLabel->setString(fmt::format("Colete {} Mana Orbs.", splitTask[1]).c_str());
            }
            if ((std::string)splitTask[2] == "Stars/Moons.") { // Collect {} Stars/Moons.
                taskLabel->setString(fmt::format("Colete {} Estrelas/Moedas.", splitTask[1]).c_str());
            }
        }
        if (langType == "Russki") {
            if ((std::string)titleLabel->getString() == "Orb Finder") titleLabel->setString("Poisk Sfer");
            if ((std::string)titleLabel->getString() == "Star Finder") titleLabel->setString("Poisk Zvezd");
            if ((std::string)titleLabel->getString() == "Coin Finder") titleLabel->setString("Poisk Monet");
            if ((std::string)titleLabel->getString() == "Orb Collector") titleLabel->setString("Kollekcioner Sfer");
            if ((std::string)titleLabel->getString() == "Star Collector") titleLabel->setString("Kollekcioner Zvezd");
            if ((std::string)titleLabel->getString() == "Coin Collector") titleLabel->setString("Kollekcioner Monet");
            if ((std::string)titleLabel->getString() == "Orb Master") titleLabel->setString("Master Sfery");
            if ((std::string)titleLabel->getString() == "Star Master") titleLabel->setString("Zvezdnyj Master");
            if ((std::string)titleLabel->getString() == "Coin Master") titleLabel->setString("Master Monet");
            if ((std::string)splitTask[2] == "Silver") { // Collect {} Silver Coins.
                taskLabel->setString(fmt::format("Soberite {} Serebrjanyh Monet.", splitTask[1]).c_str());
                taskLabel->setScale(taskLabel->getScale() - 0.05);
            }
            if ((std::string)splitTask[2] == "Mana") { // Collect {} Mana Orbs.
                taskLabel->setString(fmt::format("Soberite {} Sfer Many.", splitTask[1]).c_str());
            }
            if ((std::string)splitTask[2] == "Stars/Moons.") { // Collect {} Stars/Moons.
                taskLabel->setString(fmt::format("Soberite {} Zvezd/Monet.", splitTask[1]).c_str());
            }
        }
        if (langType == "Deutsch") {
            if ((std::string)titleLabel->getString() == "Orb Finder") titleLabel->setString("Orb-Finder");
            if ((std::string)titleLabel->getString() == "Star Finder") titleLabel->setString("Stern-Finder");
            if ((std::string)titleLabel->getString() == "Coin Finder") titleLabel->setString("Muenzsucher");
            if ((std::string)titleLabel->getString() == "Orb Collector") titleLabel->setString("Kugelsammler");
            if ((std::string)titleLabel->getString() == "Star Collector") titleLabel->setString("Sternsammler");
            if ((std::string)titleLabel->getString() == "Coin Collector") titleLabel->setString("Muenzsammler");
            if ((std::string)titleLabel->getString() == "Orb Master") titleLabel->setString("Orb-Meister");
            if ((std::string)titleLabel->getString() == "Star Master") titleLabel->setString("Stern-Meister");
            if ((std::string)titleLabel->getString() == "Coin Master") titleLabel->setString("Muenzmeister");
            if ((std::string)splitTask[2] == "Silver") { // Collect {} Silver Coins.
                taskLabel->setString(fmt::format("Sammle {} Silbermuenzen.", splitTask[1]).c_str());
            }
            if ((std::string)splitTask[2] == "Mana") { // Collect {} Mana Orbs.
                taskLabel->setString(fmt::format("Sammle {} Mana-Kugeln.", splitTask[1]).c_str());
            }
            if ((std::string)splitTask[2] == "Stars/Moons.") { // Collect {} Stars/Moons.
                taskLabel->setString(fmt::format("Sammle {} Sterne/Moons.", splitTask[1]).c_str());
            }
        }
        return result;
    }
};