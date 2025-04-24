#include <Geode/Geode.hpp> 
#include <Geode/modify/FLAlertLayer.hpp>

using namespace geode::prelude;

class $modify(FLAlertLayer) {
    bool init(FLAlertLayerProtocol* delegate, char const* title, gd::string desc, char const* btn1, char const* btn2, float width, bool p7, float p8, float p9) {
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        if ((std::string)title == "Editor Guide") {
            if (langType == "Espanol") title = "Guia del Editor";
            if (langType == "Portuguese") title = "Guia do Editor";
            if (langType == "Russki") title = "Rukovodstvo redaktora";
            if (langType == "Deutsch") title = "Editor Leitfaden";
        }
        if (desc == "Do you want to open the editor guide now?") {
            if (langType == "Espanol") desc = "Quieres abrir ahora la guía del editor?";
            if (langType == "Portuguese") desc = "Pretende abrir o guia do editor agora?";
            if (langType == "Russki") desc = "Hotite li vy otkryt rukovodstvo redaktora\nsejcas?";
            if (langType == "Deutsch") desc = "Moechten Sie den Editor Leitfaden jetzt oeffnen?";
        }
        if ((std::string)title == "Clone Level") {
            if (langType == "Espanol") title = "Nivel de Clonacion";
            if (langType == "Portuguese") title = "Nivel de Clone";
            if (langType == "Russki") title = "Uroven klonirovanija";
            if (langType == "Deutsch") title = "Klon Ebene";
        }
        if (desc == "Create a <cl>copy</c> of this <cg>level</c>?") {
            if (langType == "Espanol") desc = "Crear una <cl>copia</c> de este <cg>nivel</c>?";
            if (langType == "Portuguese") desc = "Criar uma <cl>copia</c> deste <cg>nivel</c>?";
            if (langType == "Russki") desc = "Sozdat <cl>kopiju</c> etogo <cg>urovnja</c>?";
            if (langType == "Deutsch") desc = "Eine <cl>Kopie</c> dieses <cg>Levels</c> erstellen?";
        }
        if ((std::string)btn1 == "NO") {
            if (langType == "Espanol") btn1 = "NO";
            if (langType == "Portuguese") btn1 = "NAO";
            if (langType == "Russki") btn1 = "NET";
            if (langType == "Deutsch") btn1 = "NO";
        }
        if (btn2 != NULL && (std::string)btn2 == "YES") {
            if (langType == "Espanol") btn2 = "SI";
            if (langType == "Portuguese") btn2 = "SIM";
            if (langType == "Russki") btn2 = "DA";
            if (langType == "Deutsch") btn2 = "YES";
        }
        if ((std::string)btn1 == "Cancel") {
            if (langType == "Espanol") btn1 = "Cancelar";
            if (langType == "Portuguese") btn1 = "Cancelar";
            if (langType == "Russki") btn1 = "Otmena";
            if (langType == "Deutsch") btn1 = "Abbrechen";
        }
        if (btn2 != NULL && (std::string)btn2 == "Trash") {
            if (langType == "Espanol") btn2 = "Basura";
            if (langType == "Portuguese") btn2 = "Lixo";
            if (langType == "Russki") btn2 = "Musor";
            if (langType == "Deutsch") btn2 = "Papierkorb";
        }
        if ((std::string)title == "Move to Top") {
            if (langType == "Espanol") title = "Ir arriba";
            if (langType == "Portuguese") title = "Ir para o topo";
            if (langType == "Russki") title = "Perejti k nacalu";
            if (langType == "Deutsch") title = "Nach oben Gehen";
        }
        if (desc == "Move this level to the top of the created levels list?") {
            if (langType == "Espanol") desc = "Mover este nivel al principio de la lista de niveles creados?";
            if (langType == "Portuguese") desc = "Mover este nivel para o topo da lista de niveis criados?";
            if (langType == "Russki") desc = "Peremestit etot uroven v nacalo spiska sozdannyh urovnej?";
            if (langType == "Deutsch") desc = "Diese Ebene an den Anfang der Liste der erstellten Ebenen verschieben?";
        }

        // oh boy

        if ((std::string)title == "Upload Guidelines") {
            if (langType == "Espanol") title = "Directrices de Carga";
            if (langType == "Portuguese") title = "Diretrizes de Carregamento";
            if (langType == "Russki") title = "Rekomendacii po Zagruzke";
            if (langType == "Deutsch") title = "Richtlinien zum Hochladen";
        }
        if (desc == "Hateful, abusive, or otherwise inappropriate content, whether it is in the level, name, or description may lead to <cr>deletion</c>. The same applies to levels abusing cheats or exploits. Stealing assets from other levels is <co>discouraged</c> and may stop a level from being rated depending on the context, severity, credit, and more. Levels verified with hacks cannot be rated.\n<cy>These guidelines and their enforcement are entirely at RobTop's discretion.</c>") {
            if (langType == "Espanol") desc = "El contenido odioso, abusivo o inapropiado, ya sea en el nivel, el nombre o la descripcion, puede llevar a la <cr>eliminacion</c>. Lo mismo se aplica a los niveles que abusen de trampas o exploits. Robar recursos de otros niveles esta <co>desaconsejado</c> y puede impedir que un nivel sea clasificado dependiendo del contexto, la gravedad, el credito, etc. Los niveles verificados con hacks no pueden ser puntuados.\n<cy>Estas directrices y su aplicacion quedan a discrecion de RobTop.</c>";
            if (langType == "Portuguese") desc = "Conteudo de odio, abusivo ou inapropriado, seja no nivel, no nome ou na descricao, pode levar a <cr>exclusao</c>. O mesmo se aplica a niveis que abusam de trapacas ou exploits. O roubo de recursos de outros niveis e <co>desencorajado</c> e pode impedir que um nivel seja classificado, dependendo do contexto, gravidade, credito e muito mais. Niveis verificados com hacks nao podem ser classificados.\n<cy>Estas diretrizes e sua aplicacao sao inteiramente a criterio do RobTop.</c>";
            if (langType == "Russki") desc = "Nenavist, oskorblenija ili drugoe neumestnoe soderzanie, bud to v urovne, nazvanii ili opisanii, mozet privesti k <cr>udaleniju</c>. To ze samoe otnositsja k urovnjam, ispol zujuŝim city ili eksplojty. Kraza aktivov s drugih urovnej <co>ne poosrjaetsja</c> i mozet privesti k tomu, cto uroven ne budet ocenen v zavisimosti ot konteksta, ser eznosti, zaslugi i procego. Urovni, proverennye s pomos ju vzlomov, ne mogut byt oceneny.\n<cy>Eti pravila i ih sobljudenie polnost ju zavisjat ot usmotrenija RobTop.</c>";
            if (langType == "Deutsch") desc = "Hassvolle, beleidigende oder anderweitig unangemessene Inhalte, sei es im Level, im Namen oder in der Beschreibung, koennen zur <cr>Loeschung</c> fuehren. Dasselbe gilt fuer Level, die Cheats oder Exploits missbrauchen. Das Stehlen von Assets aus anderen Levels wird <co>entmutigt</c> und kann dazu fuehren, dass ein Level nicht bewertet wird, je nach Kontext, Schweregrad, Credit und mehr. Level, die mit Hacks verifiziert wurden, koennen nicht bewertet werden. <cy>Diese Richtlinien und ihre Durchsetzung liegen ganz im Ermessen von RobTop.</c>";
        }

        if ((std::string)title == "Trash level") {
            if (langType == "Espanol") title = "Nivel de Basura";
            if (langType == "Portuguese") title = "Nivel do Lixo";
            if (langType == "Russki") title = "Uroven Musora";
            if (langType == "Deutsch") title = "Ebene des Papierkorbs";
        }
        if (desc == "Are you sure you want to <cr>trash</c> this level?\n<cy>You can restore the level or permanently delete it through the Trashcan.</c>") {
            if (langType == "Espanol") desc = "¿Estás seguro de que quieres <cr>borrar</c> este nivel?\n<cy>Puedes restaurar el nivel o borrarlo permanentemente a traves de la papelera.</c>";
            if (langType == "Portuguese") desc = "Tens a certeza de que queres <cr>apagar</c> este nivel?\n<cy>Podes restaurar o nivel ou apaga-lo permanentemente atraves da Lixeira.</c>";
            if (langType == "Russki") desc = "Vy uvereny, cto hotite <cr>vybrosit</c> etot uroven?\n<cy>Vy mozete vosstanovit uroven ili udalit ego navsegda cerez korzinu.</c>";
            if (langType == "Deutsch") desc = "Bist du sicher, dass du diesen Level <cr>Papierkorb</c> loeschen willst?\n<cy>Du kannst den Level wiederherstellen oder ihn ueber den Papierkorb dauerhaft loeschen.</c>";
        }
        log::info("{}", desc);
        return FLAlertLayer::init(delegate, title, desc, btn1, btn2, width, p7, p8, p9);
    };
};