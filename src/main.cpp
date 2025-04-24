#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <Geode/ui/GeodeUI.hpp>

#include "LanguagePopupLayer.hpp"

using namespace geode::prelude;

class $modify(LanguageLayer, MenuLayer) {

	struct Fields {
		CCSprite* langBtnSprite;
		CCMenuItemSpriteExtra* langBtn;
		LanguagePopupLayer* LPL;
	};

	bool init() {
		bool result = MenuLayer::init();
		auto rightMenu = this->getChildByID("right-side-menu");

		m_fields->langBtnSprite = CCSprite::create("langBtnSprite.png"_spr);
		m_fields->langBtnSprite->setScale(0.38);
		m_fields->langBtn = CCMenuItemSpriteExtra::create(m_fields->langBtnSprite, this, menu_selector(LanguageLayer::openList));

		#if !defined(GEODE_IS_ANDROID)
			rightMenu->addChild(m_fields->langBtn, -1);
			rightMenu->updateLayout(false);
		#endif

		return result;
	}

	void openList(CCObject*) {
		openSettingsPopup(Mod::get());
	}
};