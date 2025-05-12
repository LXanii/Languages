#include <Geode/Geode.hpp> 
#include <Geode/modify/SecretLayer4.hpp>

using namespace geode::prelude;

class $modify(SecretLayer4) {
    bool init() {
        bool result = SecretLayer4::init();
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        auto vaultLabel = reinterpret_cast<CCLabelBMFont*>(this->getChildByID("vault-name"));

        if (langType == "Espanol") vaultLabel->setString("La Camara de Los Secretos");
        if (langType == "Portugues") vaultLabel->setString("Camara de Segredos");
        if (langType == "Russki") vaultLabel->setString("Tajnaja Komnata");
        if (langType == "Deutsch") vaultLabel->setString("Die Kammer des Schreckens");

        return result;
    }
};