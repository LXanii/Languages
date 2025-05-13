#include <Geode/Geode.hpp> 
#include <Geode/modify/ParentalOptionsLayer.hpp>

using namespace geode::prelude;

class $modify(ParentalOptionsLayer) {
    
    bool init() {
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        bool result = ParentalOptionsLayer::init();

        std::vector<std::string> parentalReplace = {};

        auto mainLayer = reinterpret_cast<CCNode*>(this->getChildren()->objectAtIndex(0));
        auto labelsLayer = reinterpret_cast<CCLayer*>(mainLayer->getChildren()->objectAtIndex(3));
        auto titleLabel = reinterpret_cast<CCLabelBMFont*>(mainLayer->getChildren()->objectAtIndex(1));

        if (langType == "Espanol") {parentalReplace = {"Desactivar\nComentarios", "Desactivar\nComentarios de la\nCuenta", "Permitir solo\nNiveles Destacados"}; titleLabel->setString("Control Parental");}
        if (langType == "Portugues") {parentalReplace = {"Desativar\nComentarios", "Desativar\nComentarios da\nConta", "Permitir Somente\nNiveis em Destaque"}; titleLabel->setString("Controle dos Pais");}
        if (langType == "Russki") {parentalReplace = {"Otkljucit\nKommentariis", "Otključit\nKommentarii\nAkkaunta", "Razrešit tol ko\nTematiceskie\nUrovni"}; titleLabel->setString("Roditel skij Kontrol");}
        if (langType == "Deutsch") {parentalReplace = {"Kommentare\nDeaktivieren", "Kontokommentare\nDeaktivieren", "Nur Featured\nLevels Zulassen"}; titleLabel->setString("Elterliche Kontrolle");}
        log::info("{} {}", labelsLayer->getChildrenCount(), parentalReplace.size());
        if (langType != "English") if (labelsLayer->getChildrenCount() == parentalReplace.size()) for (int i = 0; i < labelsLayer->getChildrenCount(); i++) reinterpret_cast<CCLabelBMFont*>(labelsLayer->getChildren()->objectAtIndex(i))->setString(parentalReplace[i].c_str());

        return result;
    }
};