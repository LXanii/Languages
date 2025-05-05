#include <Geode/Geode.hpp> 
#include <Geode/modify/LikeItemLayer.hpp>

using namespace geode::prelude;

class $modify(LikeItemLayer) {
    bool init(LikeItemType p0, int p1, int p2) {
        bool result = LikeItemLayer::init(p0, p1, p2);
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");

        auto voteLabel = reinterpret_cast<CCLabelBMFont*>(reinterpret_cast<CCLayer*>(this->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(2));

        //if (langType == "Espanol") searchLabel->setString("Opciones Avanzadas");
        if (langType == "Portugues") voteLabel->setString("Votacao");
        if (langType == "Russki") voteLabel->setString("Golosujte");
        if (langType == "Deutsch") {voteLabel->setString("Waehlen Sie"); voteLabel->setScale(voteLabel->getScale() - 0.15);}

        return result;
    }
};