#include <Geode/Geode.hpp> 
#include <Geode/modify/SecretLayer2.hpp>

using namespace geode::prelude;

class $modify(SecretLayer2) {
    bool init() {
        bool result = SecretLayer2::init();
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        auto vaultLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("vault-name"));

        if (langType == "Espanol") vaultLabel->setString("Boveda de Secretos");
        if (langType == "Portugues") vaultLabel->setString("Cofre de Segredos");
        if (langType == "Russki") vaultLabel->setString("Hranilise Sekretov");
        if (langType == "Deutsch") vaultLabel->setString("Das Gewoelbe des Schreckens");

        return result;
    }
};