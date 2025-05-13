#include <Geode/Geode.hpp> 
#include <Geode/modify/FLAlertLayer.hpp>

#include "splitFunc.hpp"

using namespace geode::prelude;

class $modify(FLAlertLayer) {
    bool init(FLAlertLayerProtocol* delegate, char const* title, gd::string desc, char const* btn1, char const* btn2, float width, bool p7, float p8, float p9) {
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
        if ((std::string)title == "Editor Guide") {
            if (langType == "Espanol") title = "Guia del Editor";
            if (langType == "Portugues") title = "Guia do Editor";
            if (langType == "Russki") title = "Rukovodstvo redaktora";
            if (langType == "Deutsch") title = "Editor Leitfaden";
        }
        if (desc == "Do you want to open the editor guide now?") {
            if (langType == "Espanol") desc = "Quieres abrir ahora la guía del editor?";
            if (langType == "Portugues") desc = "Pretende abrir o guia do editor agora?";
            if (langType == "Russki") desc = "Hotite li vy otkryt rukovodstvo redaktora\nsejcas?";
            if (langType == "Deutsch") desc = "Moechten Sie den Editor Leitfaden jetzt oeffnen?";
        }
        if (desc == "Visit Newgrounds to find awesome music?") {
            if (langType == "Espanol") desc = "Visitas Newgrounds para encontrar musica increible?";
            if (langType == "Portugues") desc = "Voce visita o Newgrounds para encontrar musicas incriveis?";
            if (langType == "Russki") desc = "Posesaete Newgrounds, ctoby najti potrjasajusuju muzyku?";
            if (langType == "Deutsch") desc = "Du besuchst Newgrounds, um tolle Musik zu finden?";
        }
        if ((std::string)title == "Clone Level") {
            if (langType == "Espanol") title = "Nivel de Clonacion";
            if (langType == "Portugues") title = "Nivel de Clone";
            if (langType == "Russki") title = "Uroven Klonirovanija";
            if (langType == "Deutsch") title = "Klon Ebene";
        }
        if (desc == "Create a <cl>copy</c> of this <cg>level</c>?") {
            if (langType == "Espanol") desc = "Crear una <cl>copia</c> de este <cg>nivel</c>?";
            if (langType == "Portugues") desc = "Criar uma <cl>copia</c> deste <cg>nivel</c>?";
            if (langType == "Russki") desc = "Sozdat <cl>kopiju</c> etogo <cg>urovnja</c>?";
            if (langType == "Deutsch") desc = "Eine <cl>Kopie</c> dieses <cg>Levels</c> erstellen?";
        }
        if ((std::string)title == "Update") {
            if (langType == "Espanol") title = "Actualizacion";
            if (langType == "Portugues") title = "Atualizacao";
            if (langType == "Russki") title = "Obnovlenie";
            //if (langType == "Deutsch") title = "Klon Ebene";
        }
        if (desc == "Level is up to date.") {
            if (langType == "Espanol") desc = "El nivel esta actualizado.";
            if (langType == "Portugues") desc = "O nivel esta atualizado.";
            if (langType == "Russki") desc = "Uroven sootvetstvuet sovremennym trebovanijam.";
            if (langType == "Deutsch") desc = "Das Niveau ist auf dem neuesten Stand.";
        }
        if ((std::string)title == "Empty") {
            if (langType == "Espanol") title = "Vacío";
            if (langType == "Portugues") title = "Vazio";
            if (langType == "Russki") title = "Pustoj";
            if (langType == "Deutsch") title = "Leere";
        }
        if (desc == "You cannot share an empty level.") {
            if (langType == "Espanol") desc = "No puedes compartir un nivel vacio.";
            if (langType == "Portugues") desc = "Nao e possivel partilhar um nivel vazio.";
            if (langType == "Russki") desc = "Vy ne mozete podelit sja pustym urovnem.";
            if (langType == "Deutsch") desc = "Sie können eine leere Ebene nicht teilen.";
        }
        if ((std::string)title == "Unverified") {
            if (langType == "Espanol") title = "Sin verificar";
            if (langType == "Portugues") title = "Nao verificado";
            if (langType == "Russki") title = "Neproverennye";
            if (langType == "Deutsch") title = "Unverifiziert";
        }
        if (desc == "You cannot share a level until you have <cg>completed</c> it.\nComplete the level in <cl>Normal</c> mode to verify that it can be beaten!\nA level cannot be verified if it has a <cy>Start Pos</c>.\n<cp>Unlisted</c> levels do not need to be verified.") {
            if (langType == "Espanol") desc = "No puedes compartir un nivel hasta que lo hayas <cg>completado</c>.\nCompleta el nivel en modo <cl>Normal</c> para verificar que se puede superar!\nUn nivel no se puede verificar si tiene una <cy>Posicion de inicio</c>.\n<cp>Los niveles no listados</c> no necesitan ser verificados.";
            if (langType == "Portugues") desc = "Voce nao pode compartilhar um nivel ate que o tenha <cg>concluido</c>.\nConclua o nivel no modo <cl>Normal</c> para verificar se ele pode ser vencido!\nUm nivel nao pode ser verificado se tiver um <cy>Start Pos</c>.\n<cp>Niveis nao listados</c> nao precisam ser verificados.";
            if (langType == "Russki") desc = "Vy ne mozete podelit sja urovnem, poka ne <cg>zakoncite</c> ego.\nZakoncite uroven v <cl>normal nom</c> rezime, ctoby ubedit sja, cto ego mozno pobedit!\nUroven ne mozet byt proveren, esli u nego est <cy>Start Pos</c>.\n<cp>Ne vkljucennye</c> urovni ne nuzno proverjat.";
            if (langType == "Deutsch") desc = "Du kannst einen Level nicht freigeben, bevor du ihn <cg>abgeschlossen</c> hast.\nVollstaendig den Level im <cl>Normal</c>-Modus ab, um zu ueberpruefen, ob er besiegt werden kann!\nEin Level kann nicht ueberprueft werden, wenn er eine <cy>Start Pos</c> hat.\n<cp>Nicht aufgefuehrte</c> Level muessen nicht ueberprueft werden.";
        }
        if ((std::string)title == "Move to Top") {
            if (langType == "Espanol") title = "Ir arriba";
            if (langType == "Portugues") title = "Ir para o topo";
            if (langType == "Russki") title = "Perejti k nacalu";
            if (langType == "Deutsch") title = "Nach oben Gehen";
        }
        if (desc == "Move this level to the top of the created levels list?") {
            if (langType == "Espanol") desc = "Mover este nivel al principio de la lista de niveles creados?";
            if (langType == "Portugues") desc = "Mover este nivel para o topo da lista de niveis criados?";
            if (langType == "Russki") desc = "Peremestit etot uroven v nacalo spiska sozdannyh urovnej?";
            if (langType == "Deutsch") desc = "Diese Ebene an den Anfang der Liste der erstellten Ebenen verschieben?";
        }
        if (desc == "Are you sure you want to <cr>delete</c> this level?") {
            if (langType == "Espanol") desc = "Estas seguro de que quieres <cr>borrar</c> este nivel?";
            if (langType == "Portugues") desc = "Tens a certeza que queres <cr>eliminar</c> este nivel?";
            if (langType == "Russki") desc = "Vy uvereny, cto hotite <cr>udalit</c> etot urovenʹ?";
            if (langType == "Deutsch") desc = "Sind Sie sicher, dass Sie diese Stufe <cr>loeschen</c> wollen?";
        }
        if ((std::string)title == "Delete Level") {
            if (langType == "Espanol") title = "Suprimir Nivel";
            if (langType == "Portugues") title = "Eliminar Nivel";
            if (langType == "Russki") title = "Udalit Uroven";
            if (langType == "Deutsch") title = "Level Loeschen";
        }
        if (desc == "Are you sure you want to <cr>delete</c> this level?\n<cy>This action cannot be undone.</c>") {
            if (langType == "Espanol") desc = "Estas seguro de que quieres <cr>eliminar</c> este nivel?\n<cy>Esta accion no se puede deshacer.</c>";
            if (langType == "Portugues") desc = "Tem a certeza de que pretende <cr>eliminar</c> este nivel?\n<cy>Esta acao nao pode ser desfeita.</c>";
            if (langType == "Russki") desc = "Vy uvereny, cto hotite <cr>udalit</c> etot uroven?\n<cy>Eto dejstvie ne mozet byt otmeneno.</c>";
            if (langType == "Deutsch") desc = "Moechtest du dieses Level wirklich <cr>loeschen</c>?\n<cy>Diese Aktion kann nicht rueckgaengig gemacht werden.</c>";
        }
        if ((std::string)title == "Exit Level") {
            if (langType == "Espanol") title = "Nivel de Salida";
            if (langType == "Portugues") title = "Nivel de Saida";
            if (langType == "Russki") title = "Uroven Vyhoda";
            //if (langType == "Deutsch") title = "Level Loeschen"; still exit level
        }
        if (desc == "Are you sure you want to <cr>exit</c>?") {
            if (langType == "Espanol") desc = "Seguro que quieres <cr>salir</c>?";
            if (langType == "Portugues") desc = "Tem a certeza de que pretende <cr>sair</c>?";
            if (langType == "Russki") desc = "Vy uvereny, cto hotite <cr>vyjti</c>?";
            if (langType == "Deutsch") desc = "Sind Sie sicher, dass Sie <cr>beenden</c> wollen?";
        }
        if ((std::string)title == "Skip level") {
            if (langType == "Espanol") title = "Nivel de Salida";
            if (langType == "Portugues") title = "Nivel de Saida";
            if (langType == "Russki") title = "Uroven Vyhoda";
            if (langType == "Deutsch") title = "Level Loeschen";
        }
        if (desc == "There is a <cy>new</c> daily level available.\nSkip the current level and load the next?") {
            if (langType == "Espanol") desc = "Hay un <cy>nuevo</c> nivel diario disponible.\nSaltar el nivel actual y cargar el siguiente?";
            if (langType == "Portugues") desc = "Ha um <cy>novo</c> nivel diario disponivel.\nPassar o nivel atual e carregar o seguinte?";
            if (langType == "Russki") desc = "Dostupen <cy>novyj</c> ezednevnyj uroven.\nPerekryt tekusij uroven i zagruzit sledujusij?";
            if (langType == "Deutsch") desc = "Es ist ein <cy>neues</c> taegliches Level verfuegbar.\nDas aktuelle Level ueberspringen und das naechste laden?";
        }
        if (desc == "There is a <cy>new</c> weekly demon available.\nSkip the current level and load the next?") {
            if (langType == "Espanol") desc = "Hay un <cy>nuevo</c> demonio semanal disponible.\nSaltar el nivel actual y cargar el siguiente?";
            if (langType == "Portugues") desc = "Ha um <cy>novo</c> demonio semanal disponivel.\nPassar o nivel atual e carregar o seguinte?";
            if (langType == "Russki") desc = "Dostupen <cy>novyj</c> ezenedel nyj demon.\nPerekryt tekusij uroven i zagruzit sledujusij?";
            if (langType == "Deutsch") desc = "Es ist ein <cy>neues</c> woechentlicher daemon.\nDas aktuelle Level ueberspringen und das naechste laden?";
        }
        if ((std::string)title == "Nothing here...") {
            if (langType == "Espanol") title = "Aquí no hay Nada...";
            if (langType == "Portugues") title = "Nada Aqui...";
            if (langType == "Russki") title = "Zdes nicego Net...";
            if (langType == "Deutsch") title = "Hier ist Nichts...";
        }
        if (desc == "No levels selected.") {
            if (langType == "Espanol") desc = "No hay niveles seleccionados.";
            if (langType == "Portugues") desc = "Nenhum nivel selecionado.";
            if (langType == "Russki") desc = "Urovni ne vybrany.";
            if (langType == "Deutsch") desc = "Keine Stufen ausgewaehlt.";
        }
        if ((std::string)title == "Comment Rules") {
            if (langType == "Espanol") title = "Normas para los comentarios";
            if (langType == "Portugues") title = "Regras de comentario";
            if (langType == "Russki") title = "Pravila Kommentirovanija";
            if (langType == "Deutsch") title = "Kommentar Regeln";
        }
        if (desc == "1. Do <cr>not</c> spam.\n2. Do <cr>not</c> harass other players.\n3. Do <cr>not</c> post inappropriate or controversial content.\n4. Do <cr>not</c> try to bypass these rules.\n<cy>These rules and their enforcement are entirely at Elder Moderators' discretion.</c>") {
            if (langType == "Espanol") desc = "1. No hagas <cr>no</c> spam.\n2. No acoses a otros jugadores. No <cr>no</c> publiques contenido inapropiado o controvertido. No <cr>no</c> intentes eludir estas normas.<cy>Estas normas y su aplicacion quedan totalmente a discrecion de los Moderadores Elder.</c>";
            if (langType == "Portugues") desc = "1. Nao fazer <cr>nao</c> spam.\n2. Nao <cr>nao</c> assediar outros jogadores.\n3. Nao publique conteudo inapropriado ou controverso.\n4. Nao <cr>nao</c> tentar contornar estas regras.\n<cy>Estas regras e a sua aplicacao ficam inteiramente ao criterio dos Moderadores Anciaos.</c>";
            if (langType == "Russki") desc = "1. Ne <cr>ne</c> spamit.\n2. Ne <cr>ne</c> presledovat drugih igrokov.\n3. Ne razmesajte <cr>ne</c> neumestnyj ili spornyj kontent.\n4. Ne pytajtes obojti eti pravila.\n<cy>Eti pravila i ih sobljudenie polnost ju na usmotrenie moderatorov Eldera.</c>";
            if (langType == "Deutsch") desc = "1. Spammen Sie <cr>nicht</c>.\n2. Belaestigen Sie <cr>nicht</c> andere Spieler.\n3. Veroeffentlichen Sie <cr>nicht</c> unangemessene oder kontroverse Inhalte.\n4. Versuchen Sie <cr>nicht</c>, diese Regeln zu umgehen.\n<cy>Diese Regeln und ihre Durchsetzung liegen ganz im Ermessen der Elder-Moderatoren.</c>";
        }
        if ((std::string)title == "Delete" && langType != "English") {
            auto splitDesc = splitString(desc, ' ');
            if (langType == "Espanol") title = "Borrar"; desc = fmt::format("Estas seguro de que quieres <cr>borrar</c> los <cy>{}</c> niveles <cg>seleccionados</c>?", splitDesc[8]).c_str();
            if (langType == "Portugues") title = "Eliminar"; desc = fmt::format("Tem certeza de que deseja <cr>excluir</c> os <cy>{}</c> niveis selecionados</c>?", splitDesc[8]).c_str();
            if (langType == "Russki") title = "Urovni"; desc = fmt::format("Vy uvereny, cto hotite <cr>udalit</c> <cy>{}</c> vybrannyj <cg>uroven</c>?", splitDesc[8]).c_str();
            if (langType == "Deutsch") title = "Loeschen"; desc = fmt::format("Sind Sie sicher, dass Sie die <cy>{}</c> ausgewaehlten <cg>Ebenen</c> <cr>loeschen</c> wollen?", splitDesc[8]).c_str();
        }
        if ((std::string)title == "Update Level Desc") {
            if (langType == "Espanol") title = "Actualizacion descripcion del Nivel";
            if (langType == "Portugues") title = "Atualizacao da descricao do Nivel";
            if (langType == "Russki") title = "Obnovlenie opisanija Urovnja";
            if (langType == "Deutsch") title = "Aktualisierung der Ebenenbeschreibung";
        }
        if (desc == "Do you want to <cg>update</c> the level <cl>description</c>?") {
            if (langType == "Espanol") desc = "Quieres <cg>actualizar</c> la <cl>descripcion</c> del nivel?";
            if (langType == "Portugues") desc = "Pretende <cg>atualizar</c> o nivel <cl>descricao</c>?";
            if (langType == "Russki") desc = "Hotite li vy <cg>obnovit</c> uroven <cl>opisanija</c>?";
            if (langType == "Deutsch") desc = "Willst du die <cg>Beschreibung</c> der Ebene <cl>aktualisieren</c>?";
        }
        if ((std::string)title == "Load Data") {
            if (langType == "Espanol") title = "Datos de Carga";
            if (langType == "Portugues") title = "Dados de Carga";
            if (langType == "Russki") title = "Dannye o Nagruzke";
            if (langType == "Deutsch") title = "Daten Laden";
        }
        if (desc == "Do you want to <cg>download</c> your account data from the <cl>cloud</c>?\n<cy>This will merge current data with the saved data.</c>") {
            if (langType == "Espanol") desc = "Desea <cg>descargar</c> los datos de su cuenta de la <cl>nube</c>?\n<cy>Esto fusionara los datos actuales con los datos guardados.</c>";
            if (langType == "Portugues") desc = "Deseja fazer o <cg>download</c> dos dados da sua conta a partir da <cl>nuvem</c>?\n<cy>Isso mesclara os dados atuais com os dados salvos.</c>";
            if (langType == "Russki") desc = "Hotite li vy <cg>zagruzit</c> dannye vasego akkaunta iz <cl>oblaka</c>?\n<cy>Eto ob edinit tekusie dannye s sohranennymi.</c>";
            if (langType == "Deutsch") desc = "Moechtest du Daten aus der <cl>Cloud</c> <cg>herunterladen</c>?\n<cy>Damit werden die aktuellen Daten mit den gespeicherten Daten zusammengefuehrt.</c>";
        }
        if ((std::string)title == "Save Data") {
            if (langType == "Espanol") title = "Guardar Datos";
            if (langType == "Portugues") title = "Salvar Dados";
            if (langType == "Russki") title = "Sohranit Dannye";
            if (langType == "Deutsch") title = "Daten Speichern";
        }
        if (desc == "Do you want to <cg>save</c> your account data on the <cl>cloud</c>?\n<cy>This will overwrite previously saved data.</c>") {
            if (langType == "Espanol") desc = "Desea <cg>descargar</c> los datos de su cuenta de la <cl>nube</c>?\n<cy>Esto fusionara los datos actuales con los datos guardados.</c>";
            if (langType == "Portugues") desc = "Deseja <cg>salvar</c> os dados da sua conta na <cl>nuvem</c>?\n<cy>Isso substituira os dados salvos anteriormente.</c>";
            if (langType == "Russki") desc = "Hotite li vy <cg>sohranit</c> dannye vasej ucetnoj zapisi v <cl>oblake</c>?\n<cy>Eto perezapiset ranee sohranennye dannye.</c>";
            if (langType == "Deutsch") desc = "Willst du deine Kontodaten in der <cl>Cloud</c> <cg>speichern?</c>\n<cy>Damit werden die zuvor gespeicherten Daten überschrieben.</c>";
        }
        if ((std::string)title == "Send Email") {
            if (langType == "Espanol") title = "Enviar correo Electronico";
            if (langType == "Portugues") title = "Enviar E-mail";
            if (langType == "Russki") title = "Otpravit Elektronnoe pis mo";
            if (langType == "Deutsch") title = "E-Mail Senden";
        }
        if (desc == "For help with any issues, please contact\n<cy>support@robtopgames.com</c>") {
            if (langType == "Espanol") desc = "Si necesita ayuda, póngase en contacto con\n<cy>support@robtopgames.com</c>.";
            if (langType == "Portugues") desc = "Para obter ajuda com qualquer problema, entre em contato com\n<cy>support@robtopgames.com</c>.";
            if (langType == "Russki") desc = "Za pomos ju po ljubym voprosam obrasajtes\n<cy>support@robtopgames.com</c>.";
            if (langType == "Deutsch") desc = "Fuer Hilfe bei Problemen wenden Sie sich bitte an\n<cy>support@robtopgames.com</c>.";
        }
        if ((std::string)title == "List Info") {
            if (langType == "Espanol") title = "Informacion de la Lista";
            if (langType == "Portugues") title = "Informacoes da Lista";
            if (langType == "Russki") title = "Informacija o Spiske";
            if (langType == "Deutsch") title = "Informationen Auflisten";
        }
        if ((std::string)title == "Level Info") {
            if (langType == "Espanol") title = "Informacion de Nivel";
            if (langType == "Portugues") title = "Informacoes da Nivel";
            if (langType == "Russki") title = "Informacija ob Urovne";
            if (langType == "Deutsch") title = "Ebene Informationen";
        }
        if ((std::string)title == "Delete Song") {
            if (langType == "Espanol") title = "Borrar Cancion";
            if (langType == "Portugues") title = "Excluir Musica";
            if (langType == "Russki") title = "Udalit Pesnju";
            if (langType == "Deutsch") title = "Song Loeschen";
        }
        if (desc == "Do you want to <cr>delete</c> this song?") {
            if (langType == "Espanol") desc = "Quieres <cr>borrar</c> esta cancion?";
            if (langType == "Portugues") desc = "Voce deseja <cr>excluir</c> essa musica?";
            if (langType == "Russki") desc = "Vy hotite <cr>udalit</c> etu pesnju?";
            if (langType == "Deutsch") desc = "Willst du dieses Lied <cr>loeschen</c>?";
        }
        if ((std::string)title == "Unfriend") {
            if (langType == "Espanol") title = "Desconectar";
            if (langType == "Portugues") title = "Desfazer Amizade";
            if (langType == "Russki") title = "Otkljucit";
            if (langType == "Deutsch") title = "Auskuppeln";
        }
        if (desc == "Are you sure you want to remove this friend?") {
            if (langType == "Espanol") desc = "Estas seguro de que quieres eliminar a este amigo?";
            if (langType == "Portugues") desc = "Tem certeza de que deseja remover esse amigo?";
            if (langType == "Russki") desc = "Vy uvereny, cto hotite udalit etogo druga?";
            if (langType == "Deutsch") desc = "Sind Sie sicher, dass Sie diesen Freund entfernen moechten?";
        }
        if ((std::string)title == "Manage") {
            if (langType == "Espanol") title = "Gestione";
            if (langType == "Portugues") title = "Gerenciar";
            if (langType == "Russki") title = "Upravlenie";
            if (langType == "Deutsch") title = "Verwalten Sie";
        }
        if (desc == "Open the account management page?") {
            if (langType == "Espanol") desc = "Abrir la pagina de gestion de cuentas?";
            if (langType == "Portugues") desc = "Abrir a pagina de gerenciamento de contas?";
            if (langType == "Russki") desc = "Otkryt stranicu upravlenija ucetnoj zapis ju?";
            if (langType == "Deutsch") desc = "Die Seite der Kontoverwaltung oeffnen?";
        }
        if ((std::string)title == "Clone List") {
            if (langType == "Espanol") title = "Lista de Clones";
            if (langType == "Portugues") title = "Lista de Clones";
            if (langType == "Russki") title = "Spisok Klonov";
            if (langType == "Deutsch") title = "Klon-Liste";
        }
        if (desc == "Create a <cl>copy</c> of this <cl>list</c>?") {
            if (langType == "Espanol") desc = "Crear una <cl>copia</c> de esta <cl>lista</c>?";
            if (langType == "Portugues") desc = "Criar uma <cl>copia</c> dessa <cl>lista</c>?";
            if (langType == "Russki") desc = "Sozdat <cl>kopiju</c> etogo <cl>spiska</c>?";
            if (langType == "Deutsch") desc = "Eine <cl>Kopie</c> dieser <cl>Liste</c> erstellen?";
        }
        // oh boy

        if ((std::string)title == "Upload Guidelines") {
            if (langType == "Espanol") title = "Directrices de Carga";
            if (langType == "Portugues") title = "Diretrizes de Envio";
            if (langType == "Russki") title = "Rekomendacii po Zagruzke";
            if (langType == "Deutsch") title = "Richtlinien zum Hochladen";
        }
        if (desc == "Hateful, abusive, or otherwise inappropriate content, whether it is in the level, name, or description may lead to <cr>deletion</c>. The same applies to levels abusing cheats or exploits. Stealing assets from other levels is <co>discouraged</c> and may stop a level from being rated depending on the context, severity, credit, and more. Levels verified with hacks cannot be rated.\n<cy>These guidelines and their enforcement are entirely at RobTop's discretion.</c>") {
            if (langType == "Espanol") desc = "El contenido odioso, abusivo o inapropiado, ya sea en el nivel, el nombre o la descripcion, puede llevar a la <cr>eliminacion</c>. Lo mismo se aplica a los niveles que abusen de trampas o exploits. Robar recursos de otros niveles esta <co>desaconsejado</c> y puede impedir que un nivel sea clasificado dependiendo del contexto, la gravedad, el credito, etc. Los niveles verificados con hacks no pueden ser puntuados.\n<cy>Estas directrices y su aplicacion quedan a discrecion de RobTop.</c>";
            if (langType == "Portugues") desc = "Conteudo de odio, abusivo ou inapropriado, seja no nivel, no nome ou na descricao, pode levar a <cr>exclusao</c>. O mesmo se aplica a niveis que abusam de trapacas ou exploits. O roubo de recursos de outros niveis e <co>desencorajado</c> e pode impedir que um nivel seja classificado, dependendo do contexto, gravidade, credito e muito mais. Niveis verificados com hacks nao podem ser classificados.\n<cy>Estas diretrizes e sua aplicacao sao inteiramente a criterio do RobTop.</c>";
            if (langType == "Russki") desc = "Nenavist, oskorblenija ili drugoe neumestnoe soderzanie, bud to v urovne, nazvanii ili opisanii, mozet privesti k <cr>udaleniju</c>. To ze samoe otnositsja k urovnjam, ispol zujuŝim city ili eksplojty. Kraza aktivov s drugih urovnej <co>ne poosrjaetsja</c> i mozet privesti k tomu, cto uroven ne budet ocenen v zavisimosti ot konteksta, ser eznosti, zaslugi i procego. Urovni, proverennye s pomos ju vzlomov, ne mogut byt oceneny.\n<cy>Eti pravila i ih sobljudenie polnost ju zavisjat ot usmotrenija RobTop.</c>";
            if (langType == "Deutsch") desc = "Hassvolle, beleidigende oder anderweitig unangemessene Inhalte, sei es im Level, im Namen oder in der Beschreibung, koennen zur <cr>Loeschung</c> fuehren. Dasselbe gilt fuer Level, die Cheats oder Exploits missbrauchen. Das Stehlen von Assets aus anderen Levels wird <co>entmutigt</c> und kann dazu fuehren, dass ein Level nicht bewertet wird, je nach Kontext, Schweregrad, Credit und mehr. Level, die mit Hacks verifiziert wurden, koennen nicht bewertet werden. <cy>Diese Richtlinien und ihre Durchsetzung liegen ganz im Ermessen von RobTop.</c>";
        }

        if ((std::string)title == "Remove Server Level") {
            if (langType == "Espanol") title = "Eliminar Nivel Subido";
            if (langType == "Portugues") title = "Remover Nivel Carregado";
            if (langType == "Russki") title = "Udalit Zagruzennyj Uroven";
            if (langType == "Deutsch") title = "Hochgeladene Level Entfernen";
        }
        if (desc == "Do you want to <cr>delete</c> this <cg>level</c> from the <cl>server</c>?\n<cy>(Your level will no longer be available online)</c>") {
            if (langType == "Espanol") desc = "Quieres <cr>borrar</c> este <cg>nivel</c> del <cl>servidor</c>?\n<cy>(Tu nivel ya no estara disponible en linea)</c>";
            if (langType == "Portugues") desc = "Deseja <cr>excluir</c> este <cg>nivel</c> do <cl>servidor</c>?\n<cy>(Seu nivel nao estara mais disponivel on-line)</c>";
            if (langType == "Russki") desc = "Hotite li vy <cr>udalit</c> etot <cg>uroven</c> s <cl>servera</c>?\n<cy>(Vas uroven bol se ne budet dostupen v seti)</c>.";
            if (langType == "Deutsch") desc = "Moechtest du <cr>diesen</c> <cg>Level</c> vom <cl>Server</c> loeschen?\n<cy>(Dein Level wird nicht mehr online verfuegbar sein)</c>";
        }
        if ((std::string)title == "Unlink Account") {
            if (langType == "Espanol") title = "Desvincular Cuenta";
            if (langType == "Portugues") title = "Desvincular Conta";
            if (langType == "Russki") title = "Razblokirovat ucetnuju Zapis";
            if (langType == "Deutsch") title = "Unlink-Konto";
        }
        if (desc == fmt::format("Are you sure you want to <cg>unlink</c> from the account <cl>{}</c>?\n<cy>Unlinking will delete all data from this device.</c>", GameManager::get()->m_playerName)) {
            if (langType == "Espanol") desc = fmt::format("Estas seguro de que quieres <cg>desvincularte</c> de la cuenta <cl>{}</c>?\n<cy>La desvinculacion eliminara todos los datos de este dispositivo.</c>", GameManager::get()->m_playerName);
            if (langType == "Portugues") desc = fmt::format("Tem certeza de que deseja <cg>desvincular</c> da conta <cl>{}</c>?\n<cy>A desvinculacao excluira todos os dados desse dispositivo.</c>", GameManager::get()->m_playerName);
            if (langType == "Russki") desc = fmt::format("Vy uvereny, cto hotite <cg>otsoedinit sja</c> ot ucetnoj zapisi <cl>{}</c>?\n<cy>Otsoedinenie privedet k udaleniju vseh dannyh s etogo ustrojstva.</c>", GameManager::get()->m_playerName);
            if (langType == "Deutsch") desc = fmt::format("Sind Sie sicher, dass Sie die <cg>Verknuepfung</c> von dem Konto <cl>{}</c> aufheben wollen?\n<cy>Die Aufhebung der Verknuepfung loescht alle Daten von diesem Geraet.</c>", GameManager::get()->m_playerName);
        }
        if ((std::string)title == "Paths of Power") {
            if (langType == "Espanol") title = "Caminos del Poder";
            if (langType == "Portugues") title = "Caminhos do Poder";
            if (langType == "Russki") title = "Puti Sily";
            if (langType == "Deutsch") title = "Wege der Macht";
        }
        if (desc == "When you activate a path, <cy>Stars</c> and <cl>Moons</c> you <cg>collect</c> will level up your <co>Path</c>. You can unlock multiple paths, but <cr>only one</c> can be <cr>active</c> at a time.") {
            if (langType == "Espanol") desc = "Cuando activas una senda, las <cy>Estrellas</c> y <cl>Lunas</c> que <cg>recojas</c> subiran de nivel tu <co>Senda</c>. Puedes desbloquear varios caminos, pero <cr>solo uno</c> puede estar <cr>activo</c> a la vez.";
            if (langType == "Portugues") desc = "Quando voce ativa um caminho, as <cy>estrelas</c> e <cl>muoes</c> que voce <cg>coleta</c> aumentam o nivel do seu <co>caminho</c>. Voce pode desbloquear vários caminhos, mas <cr>apenas um</c> pode estar <cr>ativo</c> de cada vez.";
            if (langType == "Russki") desc = "Kogda vy aktiviruete put, <cy>zvezdy</c> i <cl>luny</c>, kotorye vy <cg>sobiraete</c>, povysjat uroven vašego <co>puti</c>. Vy mozete otkryt neskol ko putej, no <cr>tol ko odin</c> mozet byt <cr>aktivnym</c> v odno i to ze vremja.";
            if (langType == "Deutsch") desc = "Wenn du einen Pfad aktivierst, werden <cy>Sterne</c> und <cl>Moons</c>, die du <cg>sammelst</c>, deinen <co>Pfad</c> aufwerten. Du kannst mehrere Pfade freischalten, aber <cr>nur einer</c> kann zur gleichen Zeit <cr>aktiv</c> sein.";
        }
        if ((std::string)title == "Report Level") {
            if (langType == "Espanol") title = "Nivel del Informe";
            if (langType == "Portugues") title = "Nivel do Relatorio";
            if (langType == "Russki") title = "Uroven Otceta";
            if (langType == "Deutsch") title = "Bericht Ebene";
        }
        if (desc == "Do you want to <cr>report</c> this level for breaking the <cg>upload guidelines</c> found in the editor? Valid reasons include hateful, abusive, or otherwise inappropriate content, as well as hacks, cheats, or exploits.") {
            if (langType == "Espanol") desc = "Quieres <cr>reportar</c> este nivel por romper las <cg>directrices de carga</c> que se encuentran en el editor? Las razones validas incluyen contenido que incite al odio, abusivo o inapropiado, asi como hacks, trampas o exploits.";
            if (langType == "Portugues") desc = "Voce deseja <cr>reportar</c> esse nivel por violar as <cg>diretrizes de upload</c> encontradas no editor? Os motivos validos incluem conteudo odioso, abusivo ou de outra forma inadequado, bem como hacks, trapacas ou exploracoes.";
            if (langType == "Russki") desc = "Vy hotite <cr>otreportirovat</c> ètot uroven za narusenie <cg>pravil zagruzki</c>, najdennyh v redaktore? K uvazitel nym pricinam otnosjatsja nenavistnyj, oskorbitel nyj ili inym obrazom neumestnyj kontent, a takze vzlomy, city ili eksplojty.";
            if (langType == "Deutsch") desc = "Willst du diesen Level <cr>melden</c>, weil er gegen die <cg>Hochladungsrichtlinien</c> im Editor verstoesst? Gueltige Gruende sind hasserfuellte, beleidigende oder anderweitig unangemessene Inhalte sowie Hacks, Cheats oder Exploits.";
        }
        if ((std::string)title == "Quests") {
            if (langType == "Espanol") title = "Misiones";
            if (langType == "Portugues") title = "Missoes";
            if (langType == "Russki") title = "Kvesty";
            //if (langType == "Deutsch") title = "Bericht Ebene";
        }
        if (desc == "<cg>Quests</c> are small daily challenges that give <cy>rewards</c>. The type of quest is decided randomly. You can have maximum 3 active and 3 queued at a time. Queued quests are indicated by <cl>dots</c> to the right of a quest.") {
            if (langType == "Espanol") desc = "<cg>Las misiones</c> son pequenos retos diarios que dan <cy>recompensas</c>. El tipo de mision se decide aleatoriamente. Puedes tener un maximo de 3 activas y 3 en cola a la vez. Las misiones en cola se indican con <cl>puntos</c> a la derecha de una mision.";
            if (langType == "Portugues") desc = "As <cg>missoes</c> sao pequenos desafios diarios que dao <cy>recompensas</c>. O tipo de missao e decidido aleatoriamente. Voce pode ter no maximo 3 ativas e 3 em fila de espera ao mesmo tempo. As missoes em fila sao indicadas por <cl>pontos</c> a direita de uma missao.";
            if (langType == "Russki") desc = "<cg>Kvesty</c> - eto nebol sie ezednevnye zadanija, kotorye dajut <cy>nagrady</c>. Tip kvesta opredeljaetsja slucajnym obrazom. Odnovremenno u vas mozet byt maksimum 3 aktivnyh i 3 v oceredi. Kvesty v oceredi oboznacajutsja <cl>tockami</c> sprava ot kvesta.";
            if (langType == "Deutsch") desc = "<cg>Quests</c> sind kleine taegliche Herausforderungen, die <cy>Belohnungen</c> geben. Die Art der Quests wird zufaellig bestimmt. Du kannst maximal 3 aktive und 3 in der Warteschlange gleichzeitig haben. Quests in der Warteschlange werden durch <cl>Punkte</c> rechts neben einer Quest angezeigt.";
        }
        if ((std::string)title == "Report List") {
            if (langType == "Espanol") title = "Lista de Informes";
            if (langType == "Portugues") title = "Lista do Relatorios";
            if (langType == "Russki") title = "Spisok Otceta";
            if (langType == "Deutsch") title = "Bericht Liste";
        }
        if (desc == "Do you want to <cr>report</c> this list for breaking the <cg>upload guidelines</c> found in the editor? Valid reasons include hateful, abusive, or otherwise inappropriate content, as well as hacks, cheats, or exploits.") {
            if (langType == "Espanol") desc = "Quieres <cr>reportar</c> este lista por romper las <cg>directrices de carga</c> que se encuentran en el editor? Las razones validas incluyen contenido que incite al odio, abusivo o inapropiado, asi como hacks, trampas o exploits.";
            if (langType == "Portugues") desc = "Voce deseja <cr>reportar</c> esse lista por violar as <cg>diretrizes de upload</c> encontradas no editor? Os motivos validos incluem conteudo odioso, abusivo ou de outra forma inadequado, bem como hacks, trapacas ou exploracoes.";
            if (langType == "Russki") desc = "Vy hotite <cr>otreportirovat</c> ètot spisok za narusenie <cg>pravil zagruzki</c>, najdennyh v redaktore? K uvazitel nym pricinam otnosjatsja nenavistnyj, oskorbitel nyj ili inym obrazom neumestnyj kontent, a takze vzlomy, city ili eksplojty.";
            if (langType == "Deutsch") desc = "Willst du diesen Liste <cr>melden</c>, weil er gegen die <cg>Hochladungsrichtlinien</c> im Editor verstoesst? Gueltige Gruende sind hasserfuellte, beleidigende oder anderweitig unangemessene Inhalte sowie Hacks, Cheats oder Exploits.";
        }
        if ((std::string)title == "Gauntlets") {
            if (langType == "Espanol") title = "Guanteletes";
            if (langType == "Portugues") title = "Manoplas";
            if (langType == "Russki") title = "Percatki";
            if (langType == "Deutsch") title = "Fehdehandschuhe";
        }
        if (desc == "<cg>Gauntlets</c> are themed collections of 5 rated levels that give a special <cy>reward</c> once beaten. They are made by RobTop based on which levels fit the theme or through official <cl>creator contests</c>. Follow RobTop on social media to be notified about future contests!") {
            if (langType == "Espanol") desc = "<cg>Guanteletes</c> son colecciones temáticas de 5 niveles puntuados que dan una <cy>recompensa</c> especial una vez superados. Son creados por RobTop basandose en que niveles encajan con el tema o a traves de <cl>concursos oficiales de creadores</c>. Sigue a RobTop en las redes sociales para recibir notificaciones sobre futuros concursos.";
            if (langType == "Portugues") desc = "<cg>Masmorras</c> sao colecoes tematicas de 5 niveis premiados que dao uma <cy>recompensa</c> especial quando passados. Elas sao feitas pelo RobTop com base nas fases que se encaixam no tema ou atraves de concursos oficiais de <cl>criadores</c>. Siga o RobTop nas redes sociais para ser notificado sobre futuros concursos!";
            if (langType == "Russki") desc = "<cg>Percatki</c> - eto tematiceskie sborniki iz 5 rejtingovyh urovnej, kotorye dajut osobuju <cy>nagradu</c> posle prohozdenija. Oni sozdajutsja RobTop na osnovanii togo, kakie urovni sootvetstvujut teme, ili v hode oficial nyh <cl>konkursov sozdatelej</c>. Sledite za RobTop v social nyh setjah, ctoby polucat uvedomlenija o budusih konkursah!";
            if (langType == "Deutsch") desc = "<cg>Fehdehandschuhe</c> sind thematische Sammlungen von 5 bewerteten Levels, die eine besondere <cy>Belohnung</c> geben, wenn sie besiegt werden. Sie werden von RobTop erstellt, je nachdem, welche Level zum Thema passen, oder durch offizielle <cl>Erstellerwettbewerbe</c>. Folge RobTop auf den sozialen Medien, um ueber zukuenftige Wettbewerbe informiert zu werden!";
        }

        if ((std::string)title == "Trash level") {
            if (langType == "Espanol") title = "Nivel de Basura";
            if (langType == "Portugues") title = "Apagar nivel";
            if (langType == "Russki") title = "Uroven Musora";
            if (langType == "Deutsch") title = "Ebene des Papierkorbs";
        }
        if ((std::string)title == "Quit Game") {
            if (langType == "Espanol") title = "Abandonar el juego";
            if (langType == "Portugues") title = "Sair do jogo";
            if (langType == "Russki") title = "Vyjti iz igry";
            if (langType == "Deutsch") title = "Spiel beenden";
        }
        if (desc == "Are you sure you want to <cr>quit</c>?") {
            if (langType == "Espanol") desc = "Estas seguro de que quieres <cr>abandonar</c>?";
            if (langType == "Portugues") desc = "Tem certeza que quer <cr>sair</c>?";
            if (langType == "Russki") desc = "Vy uvereny, cto hotite <cr>vyjti</c>?";
            if (langType == "Deutsch") desc = "Sind Sie sicher, dass Sie <cr>beenden</c> wollen?";
        }
        if (desc == "Are you sure you want to <cr>trash</c> this level?\n<cy>You can restore the level or permanently delete it through the Trashcan.</c>") {
            if (langType == "Espanol") desc = "Estas seguro de que quieres <cr>borrar</c> este nivel?\n<cy>Puedes restaurar el nivel o borrarlo permanentemente a traves de la papelera.</c>";
            if (langType == "Portugues") desc = "Tens a certeza de que queres <cr>apagar</c> este nivel?\n<cy>Podes restaurar o nivel ou apaga-lo permanentemente atraves da Lixeira.</c>";
            if (langType == "Russki") desc = "Vy uvereny, cto hotite <cr>vybrosit</c> etot uroven?\n<cy>Vy mozete vosstanovit uroven ili udalit ego navsegda cerez korzinu.</c>";
            if (langType == "Deutsch") desc = "Moechten Sie dieses Level wirklich in den <cr>Papierkorb</c> verschieben?\n<cy>Sie koennen das Level wiederherstellen oder es ueber den Papierkorb dauerhaft loeschen.</c>";
        }
        if ((std::string)title == "No Song") {
            if (langType == "Espanol") title = "Sin Cancion";
            if (langType == "Portugues") title = "Nenhuma Cancao";
            if (langType == "Russki") title = "Net Pesni";
            if (langType == "Deutsch") title = "Kein Lied";
        }
        if (desc == "This level uses a <cl>custom song</c> that has not been <cg>downloaded</c> yet.\nDo you want to play without music?\n<cy>Download by using the bar below</c>") {
            if (langType == "Espanol") desc = "Este nivel utiliza una <cl>cancion personalizada</c> que aun no ha sido <cg>descargada</c>.\nQuieres jugar sin musica?\n<cy>Descarga utilizando la barra de abajo</c>.";
            if (langType == "Portugues") desc = "Este nivel usa uma <cl>musica personalizada</c> que ainda nao foi <cg>descarregada</c>.\nQuer jogar sem musica?\n<cy>Baixe usando a barra abaixo</c>";
            if (langType == "Russki") desc = "V etom urovne ispolzuetsja <cl>zakaznaja pesnja</c>, kotoraja ese ne byla <cg>skacana</c>.\n Hotite igrat bez muzyki?\n<cy>Skacajte, ispol zuja panel nize</c>.";
            if (langType == "Deutsch") desc = "Dieser Level verwendet einen <cl>Benutzerdefinierten Song</c>, der noch nicht <cg>heruntergeladen</c> wurde. Willst du ohne Musik spielen?\n<cy>Download ueber die Leiste unten</c>";
        }
        if ((std::string)title == "Levels") {
            if (langType == "Espanol") title = "Niveles";
            if (langType == "Portugues") title = "Niveis";
            if (langType == "Russki") title = "Udalit";
            if (langType == "Deutsch") title = "Ebenen";
        }
        if (desc == "A <co>level</c> rewards <cy>Stars</c> if it is rated by RobTop. For unrated levels, the difficulty face is set by community votes on each level's page. This is also how <cr>Demon</c> difficulties are decided.\nUsernames are <cy>gold</c> for registered users and <cg>green</c> for unregistered users. A song is <cl>blue</c> if it is official and <cp>pink</c> if it is custom.") {
            if (langType == "Espanol") desc = "Un <co>nivel</c> premia con <cy>Estrellas</c> si esta clasificado por RobTop. Para los niveles no calificados, la cara de dificultad se establece por votos de la comunidad en la pagina de cada nivel. Asi es tambien como se deciden las dificultades de <cr>Demon</c>. Los nombres son <cy>dorados</c> para los usuarios registrados y <cg>verdes</c> para los usuarios no registrados. Una cancion es <cl>azul</c> si es oficial y <cp>rosa</c> si es personalizada.";
            if (langType == "Portugues") desc = "Um <co>nível</c> recompensa <cy>Estrelas</c> se for classificado pelo RobTop. Para niveis nao classificados, a dificuldade e definida pelos votos da comunidade na pagina de cada nivel. Esta e tambem a forma como as dificuldades dos <cr>Demonios</c> sao decididas.\nOs nomes de utilizador sao <cy>ouro</c> para utilizadores registados e <cg>verde</c> para utilizadores nao registados. Uma musica e <cl>azul</c> se for oficial e <cp>rosa</c> se for personalizada.";
            if (langType == "Russki") desc = "Uroven <co>level</c> polucaet <cy>Stars</c>, esli ego ocenil RobTop. Dlja nerejtingovyh urovnej uroven sloznosti ustanavlivaetsja golosovaniem soobsestva na stranice kazdogo urovnja. Takim ze obrazom opredeljaetsja sloznost <cr>Demon</c>.\nImena pol zovatelej <cy>zolotye</c> dlja zaregistrirovannyh pol zovatelej i <cg>zelenye</c> dlja nezaregistrirovannyh. Pesnja imeet <cl>sinij cvet</c>, esli ona javljaetsja oficial noj, i <cp>rozovyj</c>, esli ona javljaetsja pol zovatel skoj.";
            if (langType == "Deutsch") desc = "Ein <co>Level</c> wird mit <cy>Sternen</c> belohnt, wenn er von RobTop bewertet wurde. Bei nicht bewerteten Levels wird der Schwierigkeitsgrad durch Abstimmungen der Community auf der Seite des jeweiligen Levels festgelegt. Auf diese Weise werden auch die <cr>Demon</c>-Schwierigkeiten bestimmt.\nBenutzernamen sind <cy>gold</c> fuer registrierte Benutzer und <cg>gruen</c> fuer nicht registrierte Benutzer. Ein Song ist <cl>blau</c>, wenn er offiziell ist und <cp>rosa</c>, wenn er individuell ist.";
        }
        if ((std::string)title == "Search Info") {
            if (langType == "Espanol") title = "Buscar Informacion";
            if (langType == "Portugues") title = "Informacoes de Pesquisa";
            if (langType == "Russki") title = "Poiskovaja Informacija";
            if (langType == "Deutsch") title = "Informationen Suchen";
        }
        if (desc == "<cl>Custom Songs:</c> To only show levels using custom songs. Select <cy>Song</c> and <cy>Custom</c> but leave the textfield blank.") {
            if (langType == "Espanol") desc = "<cl>Canciones personalizadas:</c> Para mostrar solo los niveles que utilicen canciones personalizadas. Selecciona <cy>Cancion</c> y <cy>Personalizada</c> pero deja el campo de texto en blanco.";
            if (langType == "Portugues") desc = "<cl>Musicas personalizadas:</c> Para mostrar apenas os niveis que usam musicas personalizadas. Selecione <cy>Song</c> e <cy>Custom</c>, mas deixe o campo de texto em branco.";
            if (langType == "Russki") desc = "<cl> Pol zovatel skie pesni:</c> Ctoby pokazyvat tol ko urovni s pol zovatel skimi pesnjami. Vyberite <cy>Song</c> i <cy>Custom</c>, no ostav te tekstovoe pole pustym.";
            if (langType == "Deutsch") desc = "<cl>Benutzerdefinierte Songs:</c> Um nur Level mit benutzerdefinierten Songs anzuzeigen. Waehlen Sie <cy>Song</c> und <cy>Benutzerdefiniert</c>, aber lassen Sie das Textfeld leer.";
        }

        // btns

        if ((std::string)btn1 == "NO") {
            if (langType == "Espanol") btn1 = "NO";
            if (langType == "Portugues") btn1 = "NAO";
            if (langType == "Russki") btn1 = "NET";
            if (langType == "Deutsch") btn1 = "NO";
        }
        if (btn2 != NULL && (std::string)btn2 == "YES") {
            if (langType == "Espanol") btn2 = "SI";
            if (langType == "Portugues") btn2 = "SIM";
            if (langType == "Russki") btn2 = "DA";
            if (langType == "Deutsch") btn2 = "YES";
        }
        if ((std::string)btn1 == "No") {
            //if (langType == "Espanol") btn1 = "NO";
            if (langType == "Portugues") btn1 = "Nao";
            if (langType == "Russki") btn1 = "Net";
            //if (langType == "Deutsch") btn1 = "NO";
        }
        if (btn2 != NULL && (std::string)btn2 == "Yes") {
            if (langType == "Espanol") btn2 = "Si";
            if (langType == "Portugues") btn2 = "Sim";
            if (langType == "Russki") btn2 = "Da";
            //if (langType == "Deutsch") btn2 = "Yes";
        }
        if ((std::string)btn1 == "Cancel") {
            if (langType == "Espanol") btn1 = "Cancelar";
            if (langType == "Portugues") btn1 = "Cancelar";
            if (langType == "Russki") btn1 = "Otmena";
            if (langType == "Deutsch") btn1 = "Abbrechen";
        }
        if (btn2 != NULL && (std::string)btn2 == "Trash") {
            if (langType == "Espanol") btn2 = "Basura";
            if (langType == "Portugues") btn2 = "Lixo";
            if (langType == "Russki") btn2 = "Musor";
            if (langType == "Deutsch") btn2 = "Papierkorb";
        }
        if (btn2 != NULL && (std::string)btn2 == "Load") {
            if (langType == "Espanol") btn2 = "Carga";
            if (langType == "Portugues") btn2 = "Carga";
            if (langType == "Russki") btn2 = "Zagruzit";
            if (langType == "Deutsch") btn2 = "Laden Sie";
        }
        if (btn2 != NULL && (std::string)btn2 == "Save") {
            if (langType == "Espanol") btn2 = "Guardar";
            if (langType == "Portugues") btn2 = "Salvar";
            if (langType == "Russki") btn2 = "Sohranit";
            if (langType == "Deutsch") btn2 = "Speichern Sie";
        }
        if (btn2 != NULL && (std::string)btn2 == "Exit") {
            if (langType == "Espanol") btn2 = "Salida";
            if (langType == "Portugues") btn2 = "Sair";
            if (langType == "Russki") btn2 = "Vyhod";
            if (langType == "Deutsch") btn2 = "Ausfahrt";
        }
        if (btn2 != NULL && (std::string)btn2 == "Play") {
            if (langType == "Espanol") btn2 = "Jugar";
            if (langType == "Portugues") btn2 = "Jogar";
            if (langType == "Russki") btn2 = "Igrat";
            if (langType == "Deutsch") btn2 = "Spielen";
        }
        if (btn2 != NULL && (std::string)btn2 == "Skip") {
            if (langType == "Espanol") btn2 = "Saltar";
            if (langType == "Portugues") btn2 = "Saltar";
            //if (langType == "Russki") btn2 = "Igrat";
            if (langType == "Deutsch") btn2 = "Ueberspringen";
        }
        if ((std::string)btn1 == "Back") {
            if (langType == "Espanol") btn1 = "Volver";
            if (langType == "Portugues") btn1 = "Voltar";
            if (langType == "Russki") btn1 = "Nazad";
            if (langType == "Deutsch") btn1 = "Zuruck";
        }
        if (btn2 != NULL && (std::string)btn2 == "Delete") {
            if (langType == "Espanol") btn2 = "Borrar";
            if (langType == "Portugues") btn2 = "Eliminar";
            if (langType == "Russki") btn2 = "Udalit";
            if (langType == "Deutsch") btn2 = "Loeschen";
        }
        if (btn2 != NULL && (std::string)btn2 == "DELETE") {
            if (langType == "Espanol") btn2 = "BORRAR";
            if (langType == "Portugues") btn2 = "ELIMINAR";
            if (langType == "Russki") btn2 = "UDALIT";
            if (langType == "Deutsch") btn2 = "LOESCHEN";
        }
        if (btn2 != NULL && (std::string)btn2 == "Unlink") {
            if (langType == "Espanol") btn2 = "Desvincular";
            if (langType == "Portugues") btn2 = "Desvincular";
            if (langType == "Russki") btn2 = "Razblokirovat Ssylku";
            //if (langType == "Deutsch") btn2 = "LOESCHEN";
        }
        if (btn2 != NULL && (std::string)btn2 == "Update") {
            if (langType == "Espanol") btn2 = "Actualizacion";
            if (langType == "Portugues") btn2 = "Atualizacao";
            if (langType == "Russki") btn2 = "Obnovlenie";
            //if (langType == "Deutsch") btn2 = "Loeschen";
        }
        if ((std::string)btn1 == "Next") {
            if (langType == "Espanol") btn1 = "Siguiente";
            if (langType == "Portugues") btn1 = "Proximo";
            if (langType == "Russki") btn1 = "Sledujusij";
            if (langType == "Deutsch") btn1 = "Weiter";
        }
        if (btn2 != NULL && (std::string)btn2 == "Unfriend") {
            if (langType == "Espanol") btn2 = "Desconectar";
            if (langType == "Portugues") btn2 = "Desfazer Amizade";
            if (langType == "Russki") btn2 = "Otkljucit";
            if (langType == "Deutsch") btn2 = "Auskuppeln";
        }
        if (btn2 != NULL && (std::string)btn2 == "Open") {
            if (langType == "Espanol") btn2 = "Abrir";
            if (langType == "Portugues") btn2 = "Aberto";
            if (langType == "Russki") btn2 = "Otkryt";
            if (langType == "Deutsch") btn2 = "Oeffnen Sie";
        }

        // :(

        if ((std::string)title == "Level Stats" && langType != "English") {
            std::string attempts = "Total Attempts"; std::string jumps = "Total Jumps"; std::string normal = "Normal"; std::string practice = "Practice"; std::string objects = "Objects";
            if (langType == "Espanol") title = "Estadisdicas Del Nivel";
            if (langType == "Portugues") title = "Estatisticas Do Nivel";
            if (langType == "Russki") title = "Statistika Urovnej";
            if (langType == "Deutsch") title = "Level-Statistik";

            auto splitDesc = splitString(desc, '\n');
            if (langType == "Espanol") {
                attempts = "Total de Intentos";
                jumps = "Saltos Totales";
                //normal = "Normal";
                practice = "Practica";
                objects = "Objetos";
            }
            if (langType == "Portugues") {
                attempts = "Tentativas Totais";
                jumps = "Pulos Totais";
                //normal = "Normal";
                practice = "Pratica";
                objects = "Objectos";
            }
            if (langType == "Russki") {
                attempts = "Vsego Popytok";
                jumps = "Vsego Pryzkov";
                normal = "Obycnyj";
                practice = "Trenirovka";
                objects = "Obyekty";
            }
            if (langType == "Deutsch") {
                attempts = "Versuche Insgesamt";
                jumps = "Spruenge insgesamt";
                //normal = "Normal";
                practice = "Uebung";
                objects = "Objekte";
            }
            try { // level page
                desc = fmt::format("{}\n<cg>{}</c>: {}\n<cl>{}</c>: {}\n<cp>{}</c>: {}\n<co>{}</c>: {}", splitDesc[0], attempts, splitString(splitDesc[1], ' ').back(), jumps, splitString(splitDesc[2], ' ').back(), normal, splitString(splitDesc[3], ' ').back(), practice, splitString(splitDesc[4], ' ').back()).c_str();
            }
            catch (...) { // creator page
                auto objectCount = splitString(splitDesc[3], ' ');
                if (objectCount.back() == "<cr>(high)</c>") desc = fmt::format("{}\n<cg>{}</c>: {}\n<cl>{}</c>: {}\n<cp>{}</c>: {} {}", splitDesc[0], attempts, splitString(splitDesc[1], ' ').back(), jumps, splitString(splitDesc[2], ' ').back(), objects, objectCount[1], objectCount.back()).c_str();
                else desc = fmt::format("{}\n<cg>{}</c>: {}\n<cl>{}</c>: {}\n<cp>{}</c>: {}", splitDesc[0], attempts, splitString(splitDesc[1], ' ').back(), jumps, splitString(splitDesc[2], ' ').back(), objects, objectCount.back()).c_str();
            }
        } 

        // options

        if ((std::string)title == "Info") {
            if (langType == "Espanol") title = "Informacion";
            if (langType == "Portugues") title = "Informacoes";
            if (langType == "Russki") title = "Informacija";
            if (langType == "Deutsch") title = "Informationen";
        }
        if (desc == "Restarts level upon death automatically.") {
            if (langType == "Espanol") desc = "Reinicia el nivel al morir automaticamente.";
            if (langType == "Portugues") desc = "Reinicia o nivel ao morrer automaticamente.";
            if (langType == "Russki") desc = "Avtomaticeski perezapuskaet uroven posle smerti.";
            if (langType == "Deutsch") desc = "Startet das Level nach dem Tod automatisch neu.";
        }
        if (desc == "Restarts in 0.5 s instead of 1.0 s upon death.") {
            if (langType == "Espanol") desc = "Se reinicia en 0,5 s en lugar de 1,0 s al morir.";
            if (langType == "Portugues") desc = "Reinicia em 0,5 s em vez de 1,0 s apos a morte.";
            if (langType == "Russki") desc = "Posle smerti perezapuskaetsja cerez 0,5 s vmesto 1,0 s.";
            if (langType == "Deutsch") desc = "Startet nach dem Tod in 0,5 s statt in 1,0 s neu.";
        }
        if (desc == "Locks and hides cursor during gameplay.") {
            if (langType == "Espanol") desc = "Bloquea y oculta el cursor durante el juego.";
            if (langType == "Portugues") desc = "Bloqueia e oculta o cursor durante o jogo.";
            if (langType == "Russki") desc = "Fiksiruet i skryvaet kursor vo vremja igry.";
            if (langType == "Deutsch") desc = "Sperrt und versteckt den Cursor während des Spielens.";
        }
        if (desc == "Flips which side controls which player during 2-player mode.") {
            if (langType == "Espanol") desc = "Cambia el lado que controla a cada jugador en el modo de 2 jugadores.";
            if (langType == "Portugues") desc = "Inverte qual lado controla qual jogador durante o modo de 2 jogadores.";
            if (langType == "Russki") desc = "Perekljucaet storonu, kotoraja upravljaet igrokom v rezime 2 igroka.";
            if (langType == "Deutsch") desc = "Wechselt im 2-Spieler-Modus die Seite, die den Spieler steuert.";
        }
        if (desc == "Limits player 1 controls to one side even when dual mode is inactive.") {
            if (langType == "Espanol") desc = "Limita los controles del jugador 1 a un solo lado aunque el modo dual este inactivo.";
            if (langType == "Portugues") desc = "Limita os controles do jogador 1 a um lado, mesmo quando o modo duplo esta inativo.";
            if (langType == "Russki") desc = "Ogranicivaet upravlenie igrokom 1 s odnoj storony, daze esli dvojnoj rezim neaktiven.";
            if (langType == "Deutsch") desc = "Begrenzt die Steuerung von Spieler 1 auf eine Seite, auch wenn der Dualmodus inaktiv ist.";
        }
        if (desc == "Disables mouse movement when using a controller thumbstick.") {
            if (langType == "Espanol") desc = "Desactiva el movimiento del raton cuando se utiliza el thumbstick de un controlador.";
            if (langType == "Portugues") desc = "Desativa o movimento do mouse ao usar um thumbstick do controlador.";
            if (langType == "Russki") desc = "Otkljucaet dvizenie mysi pri ispol zovanii bol sogo pal ca kontrollera.";
            if (langType == "Deutsch") desc = "Deaktiviert die Mausbewegung bei Verwendung eines Controller-Daumensticks.";
        }
        if (desc == "Enables some quick temporary bindings until full customization later. Use 'R' for reset, 'CTRL + R' for full reset, and 'P' to toggle hitboxes in Practice mode.") {
            if (langType == "Espanol") desc = "Habilita algunos bindings temporales rapidos hasta la personalizacion completa mas adelante. Usa 'R' para reiniciar, 'CTRL + R' para reiniciar por completo y 'P' para cambiar las cajas de impacto en modo Practica.";
            if (langType == "Portugues") desc = "Permite algumas vinculacoes temporárias rapidas ate a personalizacao completa mais tarde. Use “R” para reiniciar, “CTRL + R” para reiniciar completamente e “P” para alternar as hitboxes no modo Practice.";
            if (langType == "Russki") desc = "Vkljucaet nekotorye vremennye privjazki na vremja, poka ne budet proizvedena polnaja nastrojka. Ispol zujte 'R' dlja sbrosa, 'CTRL + R' dlja polnogo sbrosa, i 'P' dlja perekljucenija hitboksov v rezime praktiki.";
            if (langType == "Deutsch") desc = "Ermoeglicht einige schnelle temporaere Bindungen bis zur vollstaendigen Anpassung spaeter. Verwenden Sie 'R' zum Zuruecksetzen, 'STRG + R' zum vollstaendigen Zuruecksetzen und 'P' zum Umschalten der Hitboxen im Uebungsmodus.";
        }
        if (desc == "Shows cursor and pause button during gameplay.") {
            if (langType == "Espanol") desc = "Muestra el cursor y el boton de pausa durante el juego.";
            if (langType == "Portugues") desc = "Mostra o cursor e o botao de pausa durante o jogo.";
            if (langType == "Russki") desc = "Pokazyvaet kursor i knopku pauzy vo vremja igry.";
            if (langType == "Deutsch") desc = "Zeigt den Cursor und die Pausentaste waehrend des Spiels an.";
        }
        if (desc == "Hides the attempt counter when playing levels.") {
            if (langType == "Espanol") desc = "Oculta el contador de intentos al jugar niveles.";
            if (langType == "Portugues") desc = "Oculta o contador de tentativas ao jogar niveis.";
            if (langType == "Russki") desc = "Skryvaet scetcik popytok vo vremja igry na urovnjah.";
            if (langType == "Deutsch") desc = "Blendet den Versuchszaehler beim Spielen von Leveln aus.";
        }
        if (desc == "Flips the location of the pause button.") {
            if (langType == "Espanol") desc = "Cambia la ubicacion del boton de pausa.";
            if (langType == "Portugues") desc = "Inverte a localizacao do botao de pausa.";
            if (langType == "Russki") desc = "Izmenjaet raspolozenie knopki pauzy.";
            if (langType == "Deutsch") desc = "Aendert die Position der Pausentaste.";
        }
        if (desc == "Disables extra indicators on portals.") {
            if (langType == "Espanol") desc = "Desactiva los indicadores adicionales en los portales.";
            if (langType == "Portugues") desc = "Desativa indicadores adicionais nos portais.";
            if (langType == "Russki") desc = "Otkljucaet dopolnitel nye indikatory na portalah.";
            if (langType == "Deutsch") desc = "Deaktiviert zusaetzliche Indikatoren auf Portalen.";
        }
        if (desc == "Enables extra indicators on orbs.") {
            if (langType == "Espanol") desc = "Activa indicadores adicionales en los orbes.";
            if (langType == "Portugues") desc = "Ativa indicadores extras em orbes.";
            if (langType == "Russki") desc = "Vkljucaet dopolnitel nye indikatory na orbah.";
            if (langType == "Deutsch") desc = "Ermoeglicht zusaetzliche Indikatoren auf Kugeln.";
        }
        if (desc == "Disables the scaling effect on all orbs.") {
            if (langType == "Espanol") desc = "Desactiva el efecto de escala en todos los orbes.";
            if (langType == "Portugues") desc = "Desativa o efeito de escala em todos os orbes.";
            if (langType == "Russki") desc = "Otkljucaet effekt masstabirovanija dlja vseh orbov.";
            if (langType == "Deutsch") desc = "Deaktiviert den Skalierungseffekt bei allen Kugeln.";
        }
        if (desc == "Disables the scaling effect on only trigger orbs.") {
            if (langType == "Espanol") desc = "Desactiva el efecto de escala sólo en los orbes de disparo.";
            if (langType == "Portugues") desc = "Desativa o efeito de escala somente nos orbes acionadores.";
            if (langType == "Russki") desc = "Otkljucaet effekt masstabirovanija tol ko dlja triggernyh orbov.";
            if (langType == "Deutsch") desc = "Deaktiviert den Skalierungseffekt nur bei Triggerkugeln.";
        }
        if (desc == "Disables shake effects.") {
            if (langType == "Espanol") desc = "Desactiva los efectos de vibracion.";
            if (langType == "Portugues") desc = "Desativa os efeitos de vibracao.";
            if (langType == "Russki") desc = "Otkljucaet effekty drozanija.";
            if (langType == "Deutsch") desc = "Deaktiviert Verwacklungseffekte.";
        }
        if (desc == "Disables the shake effect that happens upon death.") {
            if (langType == "Espanol") desc = "Desactiva el efecto de sacudida que se produce al morir.";
            if (langType == "Portugues") desc = "Desativa o efeito de tremor que ocorre ao morrer.";
            if (langType == "Russki") desc = "Otkljucaet effekt trjaski, voznikajusij posle smerti.";
            if (langType == "Deutsch") desc = "Deaktiviert den Erschuetterungseffekt, der beim Tod auftritt.";
        }
        if (desc == "Disables the effect that happens upon changing gravity.") {
            if (langType == "Espanol") desc = "Desactiva el efecto que se produce al cambiar la gravedad.";
            if (langType == "Portugues") desc = "Desativa o efeito que ocorre quando a gravidade e alterada.";
            if (langType == "Russki") desc = "Otkljucaet effekt, voznikajusij pri izmenenii gravitacii.";
            if (langType == "Deutsch") desc = "Deaktiviert den Effekt, der bei einer Aenderung der Schwerkraft auftritt.";
        }
        if (desc == "Sets player icon in mini mode to default.") {
            if (langType == "Espanol") desc = "Establece el icono del reproductor en modo mini por defecto.";
            if (langType == "Portugues") desc = "Define o icone do player no modo mini como padrao.";
            if (langType == "Russki") desc = "Ustanavlivaet znacok pleera v rezime mini po umolcaniju.";
            if (langType == "Deutsch") desc = "Setzt das Spielersymbol im Mini-Modus auf den Standardwert.";
        }
        if (desc == "Toggles between main and secondary color for the teleport effect in spider mode.") {
            if (langType == "Espanol") desc = "Alterna entre el color principal y el secundario para el efecto de teletransporte en modo arana.";
            if (langType == "Portugues") desc = "Alterna entre a cor principal e a secundaria para o efeito de teletransporte no modo aranha.";
            if (langType == "Russki") desc = "Perekljucenie mezdu osnovnym i dopolnitel nym cvetom dlja effekta teleporta v rezime pauka.";
            if (langType == "Deutsch") desc = "Schaltet zwischen Haupt- und Sekundaerfarbe fuer den Teleporteffekt im Spinnenmodus um.";
        }
        if (desc == "Toggles between main and secondary color for the fire effect from dash orbs.") {
            if (langType == "Espanol") desc = "Alterna entre el color principal y el secundario para el efecto de fuego de los orbes.";
            if (langType == "Portugues") desc = "Alterna entre a cor principal e a secundaria para o efeito de fogo dos orbes de traco.";
            if (langType == "Russki") desc = "Perekljucenie mezdu osnovnym i dopolnitel nym cvetom dlja effekta ognja ot dash-orbov.";
            if (langType == "Deutsch") desc = "Schaltet zwischen Haupt- und Sekundaerfarbe fuer den Feuereffekt von Dash Orbs um.";
        }
        if (desc == "Toggles between main and secondary color for the trail in wave mode.") {
            if (langType == "Espanol") desc = "Alterna entre el color principal y el secundario para la estela en modo onda.";
            if (langType == "Portugues") desc = "Alterna entre a cor principal e a secundaria da trilha no modo de onda.";
            if (langType == "Russki") desc = "Perekljucenie mezdu osnovnym i dopolnitel nym cvetom dlja trassy v rezime volny.";
            if (langType == "Deutsch") desc = "Schaltet zwischen Haupt- und Sekundaerfarbe fuer den Trail im Wellenmodus um.";
        }
        if (desc == "Hides text in the top left when using start positions or ignore damage.") {
            if (langType == "Espanol") desc = "Oculta el texto en la parte superior izquierda cuando se utilizan posiciones de inicio o ignorar dano.";
            if (langType == "Portugues") desc = "Oculta o texto no canto superior esquerdo ao usar posicoes iniciais ou ignorar danos.";
            if (langType == "Russki") desc = "Skryvaet tekst v levom verhnem uglu pri ispol zovanii startovyh pozicij ili ignorirovanii urona.";
            if (langType == "Deutsch") desc = "Blendet den Text oben links aus, wenn Sie Startpositionen verwenden oder Schaden ignorieren.";
        }
        if (desc == "Hides the checkpoint buttons shown in practice mode.") {
            if (langType == "Espanol") desc = "Oculta los botones de punto de control que se muestran en el modo de practica.";
            if (langType == "Portugues") desc = "Oculta os botoes de ponto de controle exibidos no modo de pratica.";
            if (langType == "Russki") desc = "Skryvaet knopki kontrol nyh tocek, otobracaemye v rezime trenirovki.";
            if (langType == "Deutsch") desc = "Blendet die im Uebungsmodus angezeigten Kontrollpunkt-Schaltflaechen aus.";
        }
        if (desc == "Hides the attempt counter when playing levels in practice mode.") {
            if (langType == "Espanol") desc = "Oculta el contador de intentos al jugar niveles en modo practica.";
            if (langType == "Portugues") desc = "Oculta o contador de tentativas ao jogar niveis no modo de pratica.";
            if (langType == "Russki") desc = "Skryvaet scetcik popytok pri prohozdenii urovnej v rezime trenirovki.";
            if (langType == "Deutsch") desc = "Blendet den Versuchszaehler beim Spielen von Leveln im Uebungsmodus aus.";
        }
        if (desc == "Places checkpoints automatically in practice mode.") {
            if (langType == "Espanol") desc = "Coloca puntos de control automaticamente en el modo de practica.";
            if (langType == "Portugues") desc = "Coloca pontos de controle automaticamente no modo de pratica.";
            if (langType == "Russki") desc = "V rezime trenirovki avtomaticeski rasstavljaet kontrol nye tocki.";
            if (langType == "Deutsch") desc = "Setzt automatisch Kontrollpunkte im Uebungsmodus.";
        }
        if (desc == "Tries to place checkpoints more often in practice mode.") {
            if (langType == "Espanol") desc = "Intenta colocar puntos de control mas a menudo en el modo de practica.";
            if (langType == "Portugues") desc = "Tenta colocar pontos de controle com mais frequencia no modo de pratica.";
            if (langType == "Russki") desc = "Starajtes case stavit kontrol nye tocki v rezime praktiki.";
            if (langType == "Deutsch") desc = "Versucht, im Uebungsmodus haeufiger Kontrollpunkte zu setzen.";
        }
        if (desc == "Shows death effects in practice mode.") {
            if (langType == "Espanol") desc = "Muestra los efectos de la muerte en el modo de práctica.";
            if (langType == "Portugues") desc = "Mostra os efeitos da morte no modo de pratica.";
            if (langType == "Russki") desc = "Pokazyvaet effekty smerti v rezime trenirovki.";
            if (langType == "Deutsch") desc = "Zeigt die Auswirkungen des Todes im Uebungsmodus an.";
        }
        if (desc == "Plays normal music in sync to editor levels in practice mode.") {
            if (langType == "Espanol") desc = "Reproduce musica normal sincronizada con los niveles del editor en el modo de practica.";
            if (langType == "Portugues") desc = "Reproduz musica normal em sincronia com os niveis do editor no modo de pratica.";
            if (langType == "Russki") desc = "V rezime trenirovki vosproizvodit obycnuju muzyku v sinhronizacii s urovnjami redaktora.";
            if (langType == "Deutsch") desc = "Spielt im Uebungsmodus normale Musik synchron zu den Editorstufen ab.";
        }
        if (desc == "Shows hitboxes while in practice mode.") {
            if (langType == "Espanol") desc = "Muestra las cajas de impacto en el modo de practica.";
            if (langType == "Portugues") desc = "Mostra as hitboxes no modo de pratica.";
            if (langType == "Russki") desc = "Pokazyvaet hitboksy v rezime trenirovki.";
            if (langType == "Deutsch") desc = "Zeigt im Uebungsmodus Hitboxen an.";
        }
        if (desc == "Disables the player's hitbox in practice mode\n(if hitboxes are shown).") {
            if (langType == "Espanol") desc = "Desactiva la caja de impacto del jugador en el modo de practica\n(si se muestran las cajas de impacto).";
            if (langType == "Portugues") desc = "Desativa a hitbox do jogador no modo de pratica\n(se as hitboxes forem exibidas).";
            if (langType == "Russki") desc = "Otkljucaet hitboks igroka v rezime trenirovki\n(esli hitboksy otobrazajutsja).";
            if (langType == "Deutsch") desc = "Deaktiviert die Hitbox des Spielers im Uebungsmodus\n(falls Hitboxen angezeigt werden).";
        }
        if (desc == "Increases draw capacity for batch nodes at level start. Can improve performance on some levels, but may cause issues on low-end devices.") {
            if (langType == "Espanol") desc = "Aumenta la capacidad de extraccion de los nodos por lotes al inicio del nivel. Puede mejorar el rendimiento en algunos niveles, pero puede causar problemas en dispositivos de gama baja.";
            if (langType == "Portugues") desc = "Aumenta a capacidade de extracao dos nos de lote no inicio do nivel. Pode melhorar o desempenho em alguns niveis, mas pode causar problemas em dispositivos de baixo custo.";
            if (langType == "Russki") desc = "Uvelicivaet propusknuju sposobnost uzlov partii pri zapuske urovnja. Mozet povysit proizvoditel nost na nekotoryh urovnjah, no mozet vyzvat problemy na nizkourovnevyh ustrojstvah.";
            if (langType == "Deutsch") desc = "Erhoeht die Ziehungskapazitaet fuer Batch-Knoten beim Start der Stufe. Kann die Leistung auf einigen Ebenen verbessern, kann aber auf Low-End-Geraeten Probleme verursachen.";
        }
        if (desc == "Enables low detail mode on levels that support it automatically.") {
            if (langType == "Espanol") desc = "Activa automaticamente el modo de detalle bajo en los niveles que lo admiten.";
            if (langType == "Portugues") desc = "Ativa o modo de detalhes baixos nos niveis que o suportam automaticamente.";
            if (langType == "Russki") desc = "Vkljucaet rezim nizkoj detalizacii na urovnjah, kotorye podderzivajut ego avtomaticeski.";
            if (langType == "Deutsch") desc = "Aktiviert den Low-Detail-Modus auf Ebenen, die ihn automatisch unterstuetzen.";
        }
        if (desc == "Removes the alert shown when starting levels with a high object count.") {
            if (langType == "Espanol") desc = "Elimina la alerta que se muestra al iniciar niveles con un elevado numero de objetos.";
            if (langType == "Portugues") desc = "Remove o alerta exibido ao iniciar níveis com uma alta contagem de objetos.";
            if (langType == "Russki") desc = "Ubiraet preduprezdenie, pojavljajuseesja pri zapuske urovnej s bol sim kolicestvom ob ektov.";
            if (langType == "Deutsch") desc = "Entfernt die Warnung, die beim Starten von Ebenen mit einer hohen Objektanzahl angezeigt wird.";
        }
        if (desc == "Removes glow and enter effects while in low detail mode. Levels without LDM show LDM Lite.") {
            if (langType == "Espanol") desc = "Elimina el brillo y los efectos de entrada en modo de detalle bajo. Los niveles sin LDM muestran LDM Lite.";
            if (langType == "Portugues") desc = "Remove o brilho e os efeitos de entrada no modo de detalhes baixos. Os niveis sem LDM mostram LDM Lite.";
            if (langType == "Russki") desc = "Ustranjaet effekty svecenija i vvoda v rezime nizkoj detalizacii. Urovni bez LDM otobrazajutsja v rezime LDM Lite.";
            if (langType == "Deutsch") desc = "Entfernt Glow- und Enter-Effekte im Low-Detail-Modus. Stufen ohne LDM zeigen LDM Lite.";
        }
        if (desc == "Increases maximum locally saved levels from 10 to 100. This refers to level data, not statistics. Enabling this can make your save file considerably larger, so keeping the option off is recommended for quicker saving.") {
            if (langType == "Espanol") desc = "Aumenta el maximo de niveles guardados localmente de 10 a 100. Esto se refiere a los datos de nivel, no a las estadisticas. Activar esta opción puede hacer que tu archivo de guardado sea considerablemente mas grande, por lo que se recomienda mantenerla desactivada para un guardado mas rapido.";
            if (langType == "Portugues") desc = "Aumenta o maximo de niveis salvos localmente de 10 para 100. Isso se refere a dados de nivel, nao a estatisticas. A ativacao dessa opcao pode aumentar consideravelmente o tamanho do arquivo salvo, portanto, e recomendavel manter a opcao desativada para um salvamento mais rapido.";
            if (langType == "Russki") desc = "Uvelicivaet maksimal noe kolicestvo lokal no sohranennyh urovnej s 10 do 100. Eto otnositsja k dannym urovnja, a ne k statistike. Vkljucenie etoj opcii mozet privesti k znacitel nomu uveliceniju razmera fajla sohranenija, poetomu dlja bolee bystrogo sohranenija rekomenduetsja otkljucit etu opciju.";
            if (langType == "Deutsch") desc = "Erhoeht das Maximum der lokal gespeicherten Stufen von 10 auf 100. Dies bezieht sich auf Leveldaten, nicht auf Statistiken. Wenn Sie diese Option aktivieren, kann Ihre Speicherdatei betraechtlich groesser werden, daher wird empfohlen, die Option zu deaktivieren, um schneller speichern zu koennen.";
        }
        if (desc == "Saves level statistics as usual, but levels need to be redownloaded every time you restart the game. Makes saving and loading faster.") {
            if (langType == "Espanol") desc = "Guarda las estadisticas de nivel como de costumbre, pero los niveles tienen que volver a descargarse cada vez que reinicias el juego. Hace que guardar y cargar sea mas rapido.";
            if (langType == "Portugues") desc = "Salva as estatisticas de nivel como de costume, mas os niveis precisam ser recarregados sempre que voce reiniciar o jogo. Torna o salvamento e o carregamento mais rapidos.";
            if (langType == "Russki") desc = "Sohranjaet statistiku urovnej, kak obycno, no urovni nuzno perezagruzat kazdyj raz, kogda vy perezapuskaete igru. Uskorjaet sohranenie i zagruzku.";
            if (langType == "Deutsch") desc = "Speichert die Level-Statistiken wie gewohnt, aber die Level muessen bei jedem Neustart des Spiels neu heruntergeladen werden. Das macht das Speichern und Laden schneller.";
        }
        if (desc == "Saves gauntlet levels locally so they do not have to be redownloaded. Increases save time but helpful if you have poor connection. ") {
            if (langType == "Espanol") desc = "Guarda los niveles del guantelete localmente para no tener que volver a descargarlos. Aumenta el tiempo de guardado pero es util si tienes mala conexion.";
            if (langType == "Portugues") desc = "Salva os niveis de desafio localmente para que nao seja necessario fazer o download novamente. Aumenta o tempo de salvamento, mas e util se voce tiver uma conexao ruim.";
            if (langType == "Russki") desc = "Sohranjaet urovni gauntlet lokal no, ctoby ne zagruzat ih zanovo. Uvelicivaet vremja sohranenija, no polezno, esli u vas plohoe soedinenie.";
            if (langType == "Deutsch") desc = "Speichert Gauntlet-Levels lokal, damit sie nicht erneut heruntergeladen werden muessen. Erhoeht die Speicherzeit, ist aber hilfreich, wenn Sie eine schlechte Verbindung haben.";
        }
        if (desc == "Disables anti-aliasing on shader effects.") {
            if (langType == "Espanol") desc = "Desactiva el antialiasing en los efectos de sombreado.";
            if (langType == "Portugues") desc = "Desativa o anti-aliasing nos efeitos do sombreador.";
            if (langType == "Russki") desc = "Otkljucaet sglazivanie v sejdernyh effektah.";
            if (langType == "Deutsch") desc = "Deaktiviert Anti-Aliasing fuer Shader-Effekte.";
        }
        if (desc == "Saves custom songs in a different directory. May fix custom songs not working.") {
            if (langType == "Espanol") desc = "Guarda las canciones personalizadas en un directorio diferente. Puede arreglar las canciones personalizadas que no funcionan.";
            if (langType == "Portugues") desc = "Salva musicas personalizadas em um diretorio diferente. Pode corrigir musicas personalizadas que nao estao funcionando.";
            if (langType == "Russki") desc = "Sohranjaet pol zovatel skie pesni v drugom kataloge. Mozet ispravit nerabotajusie pol zovatel skie pesni.";
            if (langType == "Deutsch") desc = "Speichert benutzerdefinierte Lieder in einem anderen Verzeichnis. Kann benutzerdefinierte Lieder beheben, die nicht funktionieren.";
        }
        if (desc == "Removes the alert shown when starting levels without the song downloaded.") {
            if (langType == "Espanol") desc = "Elimina la alerta que se muestra al iniciar niveles sin la cancion descargada.";
            if (langType == "Portugues") desc = "Remove o alerta exibido ao iniciar niveis sem o download da musica.";
            if (langType == "Russki") desc = "Ubiraet preduprezdenie, pojavljajuseesja pri zapuske urovnej bez zagruzennoj pesni.";
            if (langType == "Deutsch") desc = "Entfernt die Warnung, die beim Starten von Leveln ohne heruntergeladenen Song angezeigt wird.";
        }
        if (desc == "Stops automatic deletion of custom songs. This is done by default to save space.") {
            if (langType == "Espanol") desc = "Detiene el borrado automatico de canciones personalizadas. Esto se hace por defecto para ahorrar espacio.";
            if (langType == "Portugues") desc = "Interrompe a exclusao automatica de musicas personalizadas. Isso e feito por padrao para economizar espaco.";
            if (langType == "Russki") desc = "Prekrasenie avtomaticeskogo udalenija pol zovatel skih pesen. Eto delaetsja po umolcaniju dlja ekonomii mesta.";
            if (langType == "Deutsch") desc = "Stoppt das automatische Loeschen von eigenen Songs. Dies ist standardmaessig der Fall, um Speicherplatz zu sparen.";
        }
        if (desc == "Lowers audio sampling rate from 44100 Hz to 24000 Hz. Requires restarting to take effect.") {
            if (langType == "Espanol") desc = "Reduce la frecuencia de muestreo de audio de 44100 Hz a 24000 Hz. Es necesario reiniciar para que surta efecto.";
            if (langType == "Portugues") desc = "Reduz a taxa de amostragem de audio de 44100 Hz para 24000 Hz. E necessario reiniciar o sistema para ter efeito.";
            if (langType == "Russki") desc = "Snizaet castotu diskretizacii zvuka s 44100 Gc do 24000 Gc. Dlja vstuplenija v silu trebuetsja perezagruzka.";
            if (langType == "Deutsch") desc = "Senkt die Audio-Abtastrate von 44100 Hz auf 24000 Hz. Erfordert einen Neustart, um wirksam zu werden.";
        }
        if (desc == "Increases the audio buffer size, which may fix certain issues. Do not enable if audio is working fine. Causes a slight more audio delay. Requires restarting to take effect.") {
            if (langType == "Espanol") desc = "Aumenta el tamano del bufer de audio, lo que puede solucionar ciertos problemas. No activar si el audio funciona correctamente. Causa un ligero retraso en el audio. Requiere reiniciar para que surta efecto.";
            if (langType == "Portugues") desc = "Aumenta o tamanho do buffer de audio, o que pode corrigir alguns problemas. Nao ative se o audio estiver funcionando bem. Causa um pequeno atraso no audio. Requer a reinicializacao para ter efeito.";
            if (langType == "Russki") desc = "Uvelicivaet razmer zvukovogo bufera, cto mozet ispravit nekotorye problemy. Ne vkljucajte, esli zvuk rabotaet normal no. Vyzyvaet nebol suju zaderzku zvuka. Dlja vstuplenija v silu trebuetsja perezagruzka.";
            if (langType == "Deutsch") desc = "Erhoeht die Groesse des Audiopuffers, was bestimmte Probleme beheben kann. Nicht aktivieren, wenn der Ton einwandfrei funktioniert. Verursacht eine etwas groessere Audioverzoegerung. Erfordert einen Neustart, um wirksam zu werden.";
        }
        if (desc == "Shows more comments per page. Why not?") {
            if (langType == "Espanol") desc = "Muestra mas comentarios por pagina. Por que no?";
            if (langType == "Portugues") desc = "Mostra mais comentarios por pagina. Por que nao?";
            if (langType == "Russki") desc = "Pokazyvaet bol se kommentariev na stranice. Pocemu net?";
            if (langType == "Deutsch") desc = "Zeigt mehr Kommentare pro Seite an. Warum nicht?";
        }
        if (desc == "Loads comments automatically.") {
            if (langType == "Espanol") desc = "Carga los comentarios automaticamente.";
            if (langType == "Portugues") desc = "Carrega comentarios automaticamente.";
            if (langType == "Russki") desc = "Kommentarii zagruzajutsja avtomaticeski.";
            if (langType == "Deutsch") desc = "Laedt Kommentare automatisch.";
        }
        if (desc == "Makes completed levels filter based only on percentage from update 2.1. Useful to rebeat levels for Mana Orbs.") {
            if (langType == "Espanol") desc = "Hace que los niveles completados se filtren basandose solo en el porcentaje de la actualizacion 2.1. Util para volver a superar niveles y conseguir orbes de mana.";
            if (langType == "Portugues") desc = "Faz com que os niveis concluidos sejam filtrados com base apenas na porcentagem da atualizaaco 2.1. Util para repetir niveis para obter orbes de mana.";
            if (langType == "Russki") desc = "Delaet fil tr zaversennyh urovnej, osnovannyj tol ko na procentah iz obnovlenija 2.1. Polezno dlja povtornogo prohozdenija urovnej dlja polucenija mana-orbov.";
            if (langType == "Deutsch") desc = "Der Filter fuer abgeschlossene Levels basiert nur noch auf dem Prozentsatz aus Update 2.1. Nuetzlich zum Wiederholen von Levels fuer Mana Orbs.";
        }
        if (desc == "Increases created and saved levels per page from 10 to 20.") {
            if (langType == "Espanol") desc = "Aumenta de 10 a 20 los niveles creados y guardados por pagina.";
            if (langType == "Portugues") desc = "Aumenta os niveis criados e salvos por pagina de 10 para 20.";
            if (langType == "Russki") desc = "Uvelicivaet kolicestvo sozdannyh i sohranennyh urovnej na stranice s 10 do 20.";
            if (langType == "Deutsch") desc = "Erhoeht die Anzahl der erstellten und gespeicherten Ebenen pro Seite von 10 auf 20.";
        }
        if (desc == "Places new levels last in the saved levels list. Useful if you want to manually move levels to the top.") {
            if (langType == "Espanol") desc = "Coloca los nuevos niveles en ultimo lugar en la lista de niveles guardados. Util si quieres mover manualmente los niveles a la parte superior.";
            if (langType == "Portugues") desc = "Coloca os novos niveis em ultimo lugar na lista de niveis salvos. Util se voce quiser mover manualmente os niveis para o topo.";
            if (langType == "Russki") desc = "Pomesaet novye urovni poslednimi v spiske sohranennyh urovnej. Polezno, esli vy hotite vrucnuju peremestit urovni na samyj verh.";
            if (langType == "Deutsch") desc = "Setzt neue Level in der Liste der gespeicherten Level an die letzte Stelle. Nuetzlich, wenn Sie Ebenen manuell an den Anfang verschieben moechten.";
        }
        if (desc == "Toggles viewing the leaderboard percentage you have on levels. To upload your level progress to the level leaderboard, you need to replay levels completed before 2.11.") {
            if (langType == "Espanol") desc = "Activa la visualización del porcentaje de la tabla de clasificacion que tienes en los niveles. Para subir el progreso de tu nivel a la clasificacion de niveles, tienes que volver a jugar los niveles completados antes de la version 2.11.";
            if (langType == "Portugues") desc = "Alterna a visualizacao da porcentagem da tabela de classificacao que voce tem nos niveis. Para carregar seu progresso de nivel na tabela de classificacao de niveis, voce precisa repetir os niveis concluidos antes da versao 2.11.";
            if (langType == "Russki") desc = "Perekljucaet prosmotr procenta liderov, nabrannogo vami na urovnjah. Ctoby zagruzit svoj progress v tablicu liderov urovnej, neobhodimo pereigrat urovni, zaversennye do versii 2.11.";
            if (langType == "Deutsch") desc = "Schaltet die Anzeige des Prozentsatzes in der Rangliste ein, den Sie in den Levels haben. Um Ihren Level-Fortschritt in die Level-Bestenliste hochzuladen, muessen Sie Level, die vor 2.11 abgeschlossen wurden, erneut spielen.";
        }
        if (desc == "Shows decimals in level progress.") {
            if (langType == "Espanol") desc = "Muestra los decimales en el progreso del nivel.";
            if (langType == "Portugues") desc = "Mostra decimais no progresso do nivel.";
            if (langType == "Russki") desc = "Pokazyvaet desjaticnye cisla v progresse urovnja.";
            if (langType == "Deutsch") desc = "Zeigt Dezimalstellen im Stufenverlauf an.";
        }
        if (desc == "Does not do anything... Well, nothing useful.") {
            if (langType == "Espanol") desc = "No hace nada... Bueno, nada util.";
            if (langType == "Portugues") desc = "Nao faz nada... Bem, nada de util.";
            if (langType == "Russki") desc = "Nicego ne delaet... Nu, nicego poleznogo.";
            if (langType == "Deutsch") desc = "Es tut nichts... Nun, nichts Nuetzliches.";
        }
        if (desc == "Adds an extra confirmation window when exiting levels.") {
            if (langType == "Espanol") desc = "Anade una ventana de confirmacion adicional al salir de los niveles.";
            if (langType == "Portugues") desc = "Adiciona uma janela de confirmacao extra ao sair dos niveis.";
            if (langType == "Russki") desc = "Dobavljaet dopolnitel noe okno podtverzdenija pri vyhode iz urovnej.";
            if (langType == "Deutsch") desc = "Fuegt ein zusaetzliches Bestaetigungsfenster beim Verlassen von Ebenen hinzu.";
        }
        if (desc == "Makes transitions between menu pages faster.") {
            if (langType == "Espanol") desc = "Transiciones mas rapidas entre paginas de menu.";
            if (langType == "Portugues") desc = "Torna mais rapidas as transicoes entre as paginas do menu.";
            if (langType == "Russki") desc = "Uskorjaet perehody mezdu stranicami menju.";
            if (langType == "Deutsch") desc = "Die Uebergaenge zwischen den Menueseiten werden schneller.";
        }

        log::info("{}\n{}", desc, splitString(desc, '\n'));

        return FLAlertLayer::init(delegate, title, desc, btn1, btn2, width, p7, p8, p9);
    };
};