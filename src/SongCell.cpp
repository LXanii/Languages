#include <Geode/Geode.hpp> 
#include <Geode/modify/SongCell.hpp>

using namespace geode::prelude; 
class $modify(SongCell) {
    void loadFromObject(SongObject* song) {
        SongCell::loadFromObject(song);
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");

        auto mainLayer = reinterpret_cast<CCLayer*>(this->getChildren()->objectAtIndex(1));
        auto viewMenu = reinterpret_cast<CCMenu*>(mainLayer->getChildren()->objectAtIndex(1));
        auto viewBtn = reinterpret_cast<CCNode*>(reinterpret_cast<CCMenuItemSpriteExtra*>(viewMenu->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(0));

        auto viewText = reinterpret_cast<CCLabelBMFont*>(viewBtn->getChildren()->objectAtIndex(0));

        if (langType == "Espanol") viewText->setString("Ver");
        if (langType == "Portuguese") viewText->setString("Ver");
        if (langType == "Russki") {
            viewText->setString("Posmotret");
            viewText->setScale(viewText->getScale() - 0.3);
        }
        if (langType == "Deutsch") {
            viewText->setString("Ansehen");
            viewText->setScale(viewText->getScale() - 0.25);
        }
    }
};