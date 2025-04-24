#pragma once

#include <Geode/DefaultInclude.hpp>
#include <Geode/modify/LevelBrowserLayer.hpp>
#include <Geode/utils/web.hpp>
#include <cocos2d.h>

using namespace geode::prelude;

class LanguagePopupLayer : public geode::Popup<> {

public:
    static constexpr float POPUP_WIDTH = 480.f;
    static constexpr float POPUP_HEIGHT = 275.f;

    static LanguagePopupLayer* create();
    
    void show();
    void openDiscord(CCObject*);
    void openRepo(CCObject*);

private:
    bool setup() override;
};

bool LanguagePopupLayer::setup() {

    auto screenSize = CCDirector::sharedDirector()->getWinSize();
    auto mainLayer = static_cast<CCLayer*>(this->getChildren()->objectAtIndex(0));
    CCLabelBMFont* langText = CCLabelBMFont::create("Languages", "goldFont.fnt");
    CCScale9Sprite* langsBG = CCScale9Sprite::create("square02_001-uhd.png");
    langsBG->setContentSize(CCSize(397, 212));

    CCMenu* bottomMenu = CCMenu::create();

    CCMenu* rightSide = CCMenu::create();
    rightSide->setID("right-side-menu");

    rightSide->setLayout(
        ColumnLayout::create()
        ->setGap(5.f)
        ->setAutoScale(false)
        ->setAxisAlignment(AxisAlignment::End)
    );

    CCSprite* discordSprite = CCSprite::createWithSpriteFrameName("gj_discordIcon_001.png");
    CCSprite* githubSprite = CCSprite::create("githubBtn.png"_spr);
    CCMenuItemSpriteExtra* discordBtn = CCMenuItemSpriteExtra::create(discordSprite, this, menu_selector(LanguagePopupLayer::openDiscord));
    CCMenuItemSpriteExtra* githubBtn = CCMenuItemSpriteExtra::create(githubSprite, this, menu_selector(LanguagePopupLayer::openRepo));

    rightSide->addChild(discordBtn);
    rightSide->addChild(githubBtn);
    rightSide->setPosition({rightSide->getPositionX() + 173, rightSide->getPositionY() - 51});
    rightSide->updateLayout();

    langText->setPosition({screenSize.width / 2 - 40, screenSize.height / 2 + 97});
    langsBG->setPosition({screenSize.width / 2 - 47, screenSize.height / 2 - 24});
    langsBG->setOpacity(80);

    mainLayer->addChild(langText);
    mainLayer->addChild(langsBG);
    mainLayer->addChild(rightSide);
    return true;
};

void LanguagePopupLayer::openDiscord(CCObject*) {
    geode::utils::web::openLinkInBrowser("https://discord.gg/W3BkznGTV8");
};

void LanguagePopupLayer::openRepo(CCObject*) {
    geode::utils::web::openLinkInBrowser("https://github.com/LXanii/Languages");
};

void LanguagePopupLayer::show() {
    CCDirector::sharedDirector()->getRunningScene()->addChild(LanguagePopupLayer::create());
};

LanguagePopupLayer* LanguagePopupLayer::create() {
    auto ret = new LanguagePopupLayer;
    auto screenSize = CCDirector::sharedDirector()->getWinSize();
    if (ret->initAnchored(POPUP_WIDTH, POPUP_HEIGHT)) {
        ret->autorelease();
        return ret;
    }

    delete ret;
    return nullptr;
}