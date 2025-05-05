#include <Geode/Geode.hpp> 
#include <Geode/modify/ShareCommentLayer.hpp>

#include "splitFunc.hpp"

using namespace geode::prelude;

class $modify(ShareCommentLayer) {
    bool init(gd::string title, int charLimit, CommentType type, int ID, gd::string desc) {
        bool result = ShareCommentLayer::init(title, charLimit, type, ID, desc);
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");

        auto buttonMenu = reinterpret_cast<CCNode*>(reinterpret_cast<CCLayer*>(this->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(2));
        log::info("{}", buttonMenu->getChildrenCount());
        auto commentLabel = reinterpret_cast<CCLabelBMFont*>(reinterpret_cast<CCLayer*>(this->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(1));
        //auto submitLabel = reinterpret_cast<CCLabelBMFont*>(reinterpret_cast<CCNode*>(reinterpret_cast<CCMenuItemSpriteExtra*>(buttonMenu->getChildren()->objectAtIndex(2))->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(1));
        //auto cancelLabel = reinterpret_cast<CCLabelBMFont*>(reinterpret_cast<CCNode*>(reinterpret_cast<CCMenuItemSpriteExtra*>(buttonMenu->getChildren()->objectAtIndex(3))->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(1));
        //for (int i = 0; i < cancelLabel->getChildrenCount(); i++) log::info("{} {} {}", cancelLabel->getChildren()->objectAtIndex(i), cancelLabel, i);
        
        //if (submitLabel != NULL) {
            if (langType == "Espanol") {
                if ((std::string)commentLabel->getString() == "Add Comment") commentLabel->setString("Anadir Comentario"); // "Add Comment"
                if ((std::string)commentLabel->getString() == "Friend request") {
                    auto friendLabel = reinterpret_cast<CCLabelBMFont*>(reinterpret_cast<CCLayer*>(this->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(2));
                    auto name = splitString(friendLabel->getString(), ' '); //name[4]
                    commentLabel->setString("Solicitud de Amistad"); // "Friend Request"
                    friendLabel->setString(fmt::format("Enviar solicitud de amistad a {}", name[4]).c_str());
                }
                //submitLabel->setString("Enviar"); submitLabel->setScale(submitLabel->getScale() - 0.1); // "Submit"
                //cancelLabel->setString("Cancelar"); cancelLabel->setScale(cancelLabel->getScale() - 0.2); // "Cancel"
            }
            if (langType == "Portugues") {
                if ((std::string)commentLabel->getString() == "Add Comment") commentLabel->setString("Adicionar Comentario");
                if ((std::string)commentLabel->getString() == "Friend request") {
                    auto friendLabel = reinterpret_cast<CCLabelBMFont*>(reinterpret_cast<CCLayer*>(this->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(2));
                    auto name = splitString(friendLabel->getString(), ' '); //name[4]
                    commentLabel->setString("Solicitacao de Amizade");
                    friendLabel->setString(fmt::format("Enviar solicitacao de amizade para {}", name[4]).c_str());
                }
                //submitLabel->setString("Enviar"); submitLabel->setScale(submitLabel->getScale() - 0.1); // "Submit"
                //cancelLabel->setString("Cancelar"); cancelLabel->setScale(cancelLabel->getScale() - 0.2); // "Cancel"
            }
            if (langType == "Russki") {
                if ((std::string)commentLabel->getString() == "Add Comment") commentLabel->setString("Dobavit Kommentarij");
                if ((std::string)commentLabel->getString() == "Friend request") {
                    auto friendLabel = reinterpret_cast<CCLabelBMFont*>(reinterpret_cast<CCLayer*>(this->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(2));
                    auto name = splitString(friendLabel->getString(), ' '); //name[4]
                    commentLabel->setString("Zapros Druga");
                    friendLabel->setString(fmt::format("Otpravit zapros na druzbu dlja {}", name[4]).c_str());
                }
                //submitLabel->setString("Otpravit"); submitLabel->setScale(submitLabel->getScale() - 0.2); // "Submit"
               // cancelLabel->setString("Otmenit"); cancelLabel->setScale(cancelLabel->getScale() - 0.2); // "Cancel"
            }
            if (langType == "Deutsch") {
                if ((std::string)commentLabel->getString() == "Add Comment") commentLabel->setString("Kommentar Hinzufuegen");
                if ((std::string)commentLabel->getString() == "Friend request") {
                    auto friendLabel = reinterpret_cast<CCLabelBMFont*>(reinterpret_cast<CCLayer*>(this->getChildren()->objectAtIndex(0))->getChildren()->objectAtIndex(2));
                    auto name = splitString(friendLabel->getString(), ' '); //name[4]
                    commentLabel->setString("Freundschaftsanfrage");
                    friendLabel->setString(fmt::format("Freundschaftsanfrage an {} senden", name[4]).c_str());
                }
                //submitLabel->setString("Einreichen"); submitLabel->setScale(submitLabel->getScale() - 0.3); // "Submit"
                //cancelLabel->setString("Abbrechen"); cancelLabel->setScale(cancelLabel->getScale() - 0.3); // "Cancel"
            }
        //}

        return result;
    }
};