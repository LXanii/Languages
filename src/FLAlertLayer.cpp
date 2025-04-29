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
        if ((std::string)title == "Update") {
            if (langType == "Espanol") title = "Actualizacion";
            if (langType == "Portuguese") title = "Atualizacao";
            if (langType == "Russki") title = "Obnovlenie";
            //if (langType == "Deutsch") title = "Klon Ebene";
        }
        if (desc == "Level is up to date.") {
            if (langType == "Espanol") desc = "El nivel esta actualizado.";
            if (langType == "Portuguese") desc = "O nivel esta atualizado.";
            if (langType == "Russki") desc = "Uroven sootvetstvuet sovremennym trebovanijam.";
            if (langType == "Deutsch") desc = "Das Niveau ist auf dem neuesten Stand.";
        }
        if ((std::string)title == "Empty") {
            if (langType == "Espanol") title = "Vacío";
            if (langType == "Portuguese") title = "Vazio";
            if (langType == "Russki") title = "Pustoj";
            if (langType == "Deutsch") title = "Leere";
        }
        if (desc == "You cannot share an empty level.") {
            if (langType == "Espanol") desc = "No puedes compartir un nivel vacio.";
            if (langType == "Portuguese") desc = "Nao e possivel partilhar um nivel vazio.";
            if (langType == "Russki") desc = "Vy ne mozete podelit sja pustym urovnem.";
            if (langType == "Deutsch") desc = "Sie können eine leere Ebene nicht teilen.";
        }
        if ((std::string)title == "Unverified") {
            if (langType == "Espanol") title = "Sin verificar";
            if (langType == "Portuguese") title = "Nao verificado";
            if (langType == "Russki") title = "Neproverennye";
            if (langType == "Deutsch") title = "Unverifiziert";
        }
        if (desc == "You cannot share a level until you have <cg>completed</c> it.\nComplete the level in <cl>Normal</c> mode to verify that it can be beaten!\nA level cannot be verified if it has a <cy>Start Pos</c>.\n<cp>Unlisted</c> levels do not need to be verified.") {
            if (langType == "Espanol") desc = "No puedes compartir un nivel hasta que lo hayas <cg>completado</c>.\nCompleta el nivel en modo <cl>Normal</c> para verificar que se puede superar!\nUn nivel no se puede verificar si tiene una <cy>Posicion de inicio</c>.\n<cp>Los niveles no listados</c> no necesitan ser verificados.";
            if (langType == "Portuguese") desc = "Voce nao pode compartilhar um nivel ate que o tenha <cg>concluido</c>.\nConclua o nivel no modo <cl>Normal</c> para verificar se ele pode ser vencido!\nUm nivel nao pode ser verificado se tiver um <cy>Start Pos</c>.\n<cp>Niveis nao listados</c> nao precisam ser verificados.";
            if (langType == "Russki") desc = "Vy ne mozete podelit sja urovnem, poka ne <cg>zakoncite</c> ego.\nZakoncite uroven v <cl>normal nom</c> rezime, ctoby ubedit sja, cto ego mozno pobedit!\nUroven ne mozet byt proveren, esli u nego est <cy>Start Pos</c>.\n<cp>Ne vkljucennye</c> urovni ne nuzno proverjat.";
            if (langType == "Deutsch") desc = "Du kannst einen Level nicht freigeben, bevor du ihn <cg>abgeschlossen</c> hast.\nVollstaendig den Level im <cl>Normal</c>-Modus ab, um zu ueberpruefen, ob er besiegt werden kann!\nEin Level kann nicht ueberprueft werden, wenn er eine <cy>Start Pos</c> hat.\n<cp>Nicht aufgefuehrte</c> Level muessen nicht ueberprueft werden.";
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
        if (desc == "Are you sure you want to <cr>delete</c> this level?") {
            if (langType == "Espanol") desc = "Estas seguro de que quieres <cr>borrar</c> este nivel?";
            if (langType == "Portuguese") desc = "Tens a certeza que queres <cr>eliminar</c> este nivel?";
            if (langType == "Russki") desc = "Vy uvereny, cto hotite <cr>udalit</c> etot urovenʹ?";
            if (langType == "Deutsch") desc = "Sind Sie sicher, dass Sie diese Stufe <cr>loeschen</c> wollen?";
        }
        if ((std::string)title == "Delete Level") {
            if (langType == "Espanol") title = "Suprimir Nivel";
            if (langType == "Portuguese") title = "Eliminar Nivel";
            if (langType == "Russki") title = "Udalit Uroven";
            if (langType == "Deutsch") title = "Level Loeschen";
        }
        if (desc == "Are you sure you want to <cr>delete</c> this level?\n<cy>This action cannot be undone.</c>") {
            if (langType == "Espanol") desc = "Estas seguro de que quieres <cr>eliminar</c> este nivel?\n<cy>Esta accion no se puede deshacer.</c>";
            if (langType == "Portuguese") desc = "Tem a certeza de que pretende <cr>eliminar</c> este nivel?\n<cy>Esta acao nao pode ser desfeita.</c>";
            if (langType == "Russki") desc = "Vy uvereny, cto hotite <cr>udalit</c> etot uroven?\n<cy>Eto dejstvie ne mozet byt otmeneno.</c>";
            if (langType == "Deutsch") desc = "Moechtest du dieses Level wirklich <cr>loeschen</c>?\n<cy>Diese Aktion kann nicht rueckgaengig gemacht werden.</c>";
        }
        if ((std::string)title == "Exit Level") {
            if (langType == "Espanol") title = "Nivel de Salida";
            if (langType == "Portuguese") title = "Nivel de Saida";
            if (langType == "Russki") title = "Uroven Vyhoda";
            //if (langType == "Deutsch") title = "Level Loeschen"; still exit level
        }
        if (desc == "Are you sure you want to <cr>exit</c>?") {
            if (langType == "Espanol") desc = "Seguro que quieres <cr>salir</c>?";
            if (langType == "Portuguese") desc = "Tem a certeza de que pretende <cr>sair</c>?";
            if (langType == "Russki") desc = "Vy uvereny, cto hotite <cr>vyjti</c>?";
            if (langType == "Deutsch") desc = "Sind Sie sicher, dass Sie <cr>beenden</c> wollen?";
        }
        if ((std::string)title == "Skip level") {
            if (langType == "Espanol") title = "Nivel de Salida";
            if (langType == "Portuguese") title = "Nivel de Saida";
            if (langType == "Russki") title = "Uroven Vyhoda";
            if (langType == "Deutsch") title = "Level Loeschen";
        }
        if (desc == "There is a <cy>new</c> daily level available.\nSkip the current level and load the next?") {
            if (langType == "Espanol") desc = "Hay un <cy>nuevo</c> nivel diario disponible.\nSaltar el nivel actual y cargar el siguiente?";
            if (langType == "Portuguese") desc = "Ha um <cy>novo</c> nivel diario disponivel.\nPassar o nivel atual e carregar o seguinte?";
            if (langType == "Russki") desc = "Dostupen <cy>novyj</c> ezednevnyj uroven.\nPerekryt tekusij uroven i zagruzit sledujusij?";
            if (langType == "Deutsch") desc = "Es ist ein <cy>neues</c> taegliches Level verfuegbar.\nDas aktuelle Level ueberspringen und das naechste laden?";
        }
        if ((std::string)title == "Nothing here...") {
            if (langType == "Espanol") title = "Aquí no hay Nada...";
            if (langType == "Portuguese") title = "Nada Aqui...";
            if (langType == "Russki") title = "Zdes nicego Net...";
            if (langType == "Deutsch") title = "Hier ist Nichts...";
        }
        if (desc == "No levels selected.") {
            if (langType == "Espanol") desc = "No hay niveles seleccionados.";
            if (langType == "Portuguese") desc = "Nenhum nivel selecionado.";
            if (langType == "Russki") desc = "Urovni ne vybrany.";
            if (langType == "Deutsch") desc = "Keine Stufen ausgewaehlt.";
        }
        if ((std::string)title == "Comment Rules") {
            if (langType == "Espanol") title = "Normas para los comentarios";
            if (langType == "Portuguese") title = "Regras de comentario";
            if (langType == "Russki") title = "Pravila Kommentirovanija";
            if (langType == "Deutsch") title = "Kommentar Regeln";
        }
        if (desc == "Do <cr>not</c> spam.\n2. Do <cr>not</c> harass other players.\n3. Do <cr>not</c> post inappropriate or controversial content.\n4. Do <cr>not</c> try to bypass these rules.\n<cy>These rules and their enforcement are entirely at Elder Moderators' discretion.</c>") {
            if (langType == "Espanol") desc = "1. No hagas <cr>no</c> spam.\n2. No acoses a otros jugadores. No <cr>no</c> publiques contenido inapropiado o controvertido. No <cr>no</c> intentes eludir estas normas.<cy>Estas normas y su aplicacion quedan totalmente a discrecion de los Moderadores Elder.</c>";
            if (langType == "Portuguese") desc = "1. Nao fazer <cr>nao</c> spam.\n2. Nao <cr>nao</c> assediar outros jogadores.\n3. Nao publique conteudo inapropriado ou controverso.\n4. Nao <cr>nao</c> tentar contornar estas regras.\n<cy>Estas regras e a sua aplicacao ficam inteiramente ao criterio dos Moderadores Anciaos.</c>";
            if (langType == "Russki") desc = "1. Ne <cr>ne</c> spamit.\n2. Ne <cr>ne</c> presledovat drugih igrokov.\n3. Ne razmesajte <cr>ne</c> neumestnyj ili spornyj kontent.\n4. Ne pytajtes obojti eti pravila.\n<cy>Eti pravila i ih sobljudenie polnost ju na usmotrenie moderatorov Eldera.</c>";
            if (langType == "Deutsch") desc = "1. Spammen Sie <cr>nicht</c>.\n2. Belaestigen Sie <cr>nicht</c> andere Spieler.\n3. Veroeffentlichen Sie <cr>nicht</c> unangemessene oder kontroverse Inhalte.\n4. Versuchen Sie <cr>nicht</c>, diese Regeln zu umgehen.\n<cy>Diese Regeln und ihre Durchsetzung liegen ganz im Ermessen der Elder-Moderatoren.</c>";
        }
        if ((std::string)title == "Delete") {
            if (langType == "Espanol") title = "Borrar";
            if (langType == "Portuguese") title = "Eliminar";
            if (langType == "Russki") title = "Urovni";
            if (langType == "Deutsch") title = "Loeschen";
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

        if ((std::string)title == "Gauntlets") {
            if (langType == "Espanol") title = "Guanteletes";
            if (langType == "Portuguese") title = "Manoplas";
            if (langType == "Russki") title = "Percatki";
            if (langType == "Deutsch") title = "Fehdehandschuhe";
        }
        if (desc == "<cg>Gauntlets</c> are themed collections of 5 rated levels that give a special <cy>reward</c> once beaten. They are made by RobTop based on which levels fit the theme or through official <cl>creator contests</c>. Follow RobTop on social media to be notified about future contests!") {
            if (langType == "Espanol") desc = "<cg>Guanteletes</c> son colecciones temáticas de 5 niveles puntuados que dan una <cy>recompensa</c> especial una vez superados. Son creados por RobTop basandose en que niveles encajan con el tema o a traves de <cl>concursos oficiales de creadores</c>. Sigue a RobTop en las redes sociales para recibir notificaciones sobre futuros concursos.";
            if (langType == "Portuguese") desc = "<cg>Manoplas</c> sao colecoes tematicas de 5 niveis classificados que dao uma <cy>recompensa</c> especial quando vencidos. Elas sao feitas pelo RobTop com base nas fases que se encaixam no tema ou atraves de concursos oficiais de <cl>criadores</c>. Siga o RobTop nas redes sociais para ser notificado sobre futuros concursos!";
            if (langType == "Russki") desc = "<cg>Percatki</c> - eto tematiceskie sborniki iz 5 rejtingovyh urovnej, kotorye dajut osobuju <cy>nagradu</c> posle prohozdenija. Oni sozdajutsja RobTop na osnovanii togo, kakie urovni sootvetstvujut teme, ili v hode oficial nyh <cl>konkursov sozdatelej</c>. Sledite za RobTop v social nyh setjah, ctoby polucat uvedomlenija o budusih konkursah!";
            if (langType == "Deutsch") desc = "<cg>Fehdehandschuhe</c> sind thematische Sammlungen von 5 bewerteten Levels, die eine besondere <cy>Belohnung</c> geben, wenn sie besiegt werden. Sie werden von RobTop erstellt, je nachdem, welche Level zum Thema passen, oder durch offizielle <cl>Erstellerwettbewerbe</c>. Folge RobTop auf den sozialen Medien, um ueber zukuenftige Wettbewerbe informiert zu werden!";
        }

        if ((std::string)title == "Trash level") {
            if (langType == "Espanol") title = "Nivel de Basura";
            if (langType == "Portuguese") title = "Nivel do Lixo";
            if (langType == "Russki") title = "Uroven Musora";
            if (langType == "Deutsch") title = "Ebene des Papierkorbs";
        }
        if ((std::string)title == "Quit Game") {
            if (langType == "Espanol") title = "Abandonar el juego";
            if (langType == "Portuguese") title = "Sair do jogo";
            if (langType == "Russki") title = "Vyjti iz igry";
            if (langType == "Deutsch") title = "Spiel beenden";
        }
        if (desc == "Are you sure you want to <cr>quit</c>?") {
            if (langType == "Espanol") desc = "Estas seguro de que quieres <cr>abandonar</c>?";
            if (langType == "Portuguese") desc = "Tens a certeza de que queres <cr>desistir</c>?";
            if (langType == "Russki") desc = "Vy uvereny, cto hotite <cr>vyjti</c>?";
            if (langType == "Deutsch") desc = "Sind Sie sicher, dass Sie <cr>beenden</c> wollen?";
        }
        if (desc == "Are you sure you want to <cr>trash</c> this level?\n<cy>You can restore the level or permanently delete it through the Trashcan.</c>") {
            if (langType == "Espanol") desc = "Estas seguro de que quieres <cr>borrar</c> este nivel?\n<cy>Puedes restaurar el nivel o borrarlo permanentemente a traves de la papelera.</c>";
            if (langType == "Portuguese") desc = "Tens a certeza de que queres <cr>apagar</c> este nivel?\n<cy>Podes restaurar o nivel ou apaga-lo permanentemente atraves da Lixeira.</c>";
            if (langType == "Russki") desc = "Vy uvereny, cto hotite <cr>vybrosit</c> etot uroven?\n<cy>Vy mozete vosstanovit uroven ili udalit ego navsegda cerez korzinu.</c>";
            if (langType == "Deutsch") desc = "Moechten Sie dieses Level wirklich in den <cr>Papierkorb</c> verschieben?\n<cy>Sie koennen das Level wiederherstellen oder es ueber den Papierkorb dauerhaft loeschen.</c>";
        }
        if ((std::string)title == "No Song") {
            if (langType == "Espanol") title = "Sin Cancion";
            if (langType == "Portuguese") title = "Nenhuma Cancao";
            if (langType == "Russki") title = "Net Pesni";
            if (langType == "Deutsch") title = "Kein Lied";
        }
        if (desc == "This level uses a <cl>custom song</c> that has not been <cg>downloaded</c> yet.\nDo you want to play without music?\n<cy>Download by using the bar below</c>") {
            if (langType == "Espanol") desc = "Este nivel utiliza una <cl>cancion personalizada</c> que aun no ha sido <cg>descargada</c>.\nQuieres jugar sin musica?\n<cy>Descarga utilizando la barra de abajo</c>.";
            if (langType == "Portuguese") desc = "Este nivel usa uma <cl>musica personalizada</c> que ainda nao foi <cg>descarregada</c>.\nQuer jogar sem musica?\n<cy>Baixe usando a barra abaixo</c>";
            if (langType == "Russki") desc = "V etom urovne ispolzuetsja <cl>zakaznaja pesnja</c>, kotoraja ese ne byla <cg>skacana</c>.\n Hotite igrat bez muzyki?\n<cy>Skacajte, ispol zuja panel nize</c>.";
            if (langType == "Deutsch") desc = "Dieser Level verwendet einen <cl>Benutzerdefinierten Song</c>, der noch nicht <cg>heruntergeladen</c> wurde. Willst du ohne Musik spielen?\n<cy>Download ueber die Leiste unten</c>";
        }
        if ((std::string)title == "Levels") {
            if (langType == "Espanol") title = "Niveles";
            if (langType == "Portuguese") title = "Niveis";
            if (langType == "Russki") title = "Udalit";
            if (langType == "Deutsch") title = "Ebenen";
        }
        if (desc == "A <co>level</c> rewards <cy>Stars</c> if it is rated by RobTop. For unrated levels, the difficulty face is set by community votes on each level's page. This is also how <cr>Demon</c> difficulties are decided.\nUsernames are <cy>gold</c> for registered users and <cg>green</c> for unregistered users. A song is <cl>blue</c> if it is official and <cp>pink</c> if it is custom.") {
            if (langType == "Espanol") desc = "Un <co>nivel</c> premia con <cy>Estrellas</c> si esta clasificado por RobTop. Para los niveles no calificados, la cara de dificultad se establece por votos de la comunidad en la pagina de cada nivel. Asi es tambien como se deciden las dificultades de <cr>Demon</c>. Los nombres son <cy>dorados</c> para los usuarios registrados y <cg>verdes</c> para los usuarios no registrados. Una cancion es <cl>azul</c> si es oficial y <cp>rosa</c> si es personalizada.";
            if (langType == "Portuguese") desc = "Um <co>nível</c> recompensa <cy>Estrelas</c> se for classificado pelo RobTop. Para niveis nao classificados, a dificuldade e definida pelos votos da comunidade na pagina de cada nivel. Esta e tambem a forma como as dificuldades dos <cr>Demonios</c> sao decididas.\nOs nomes de utilizador sao <cy>ouro</c> para utilizadores registados e <cg>verde</c> para utilizadores nao registados. Uma musica e <cl>azul</c> se for oficial e <cp>rosa</c> se for personalizada.";
            if (langType == "Russki") desc = "Uroven <co>level</c> polucaet <cy>Stars</c>, esli ego ocenil RobTop. Dlja nerejtingovyh urovnej uroven sloznosti ustanavlivaetsja golosovaniem soobsestva na stranice kazdogo urovnja. Takim ze obrazom opredeljaetsja sloznost <cr>Demon</c>.\nImena pol zovatelej <cy>zolotye</c> dlja zaregistrirovannyh pol zovatelej i <cg>zelenye</c> dlja nezaregistrirovannyh. Pesnja imeet <cl>sinij cvet</c>, esli ona javljaetsja oficial noj, i <cp>rozovyj</c>, esli ona javljaetsja pol zovatel skoj.";
            if (langType == "Deutsch") desc = "Ein <co>Level</c> wird mit <cy>Sternen</c> belohnt, wenn er von RobTop bewertet wurde. Bei nicht bewerteten Levels wird der Schwierigkeitsgrad durch Abstimmungen der Community auf der Seite des jeweiligen Levels festgelegt. Auf diese Weise werden auch die <cr>Demon</c>-Schwierigkeiten bestimmt.\nBenutzernamen sind <cy>gold</c> für registrierte Benutzer und <cg>gruen</c> fuer nicht registrierte Benutzer. Ein Song ist <cl>blau</c>, wenn er offiziell ist und <cp>rosa</c>, wenn er individuell ist.";
        }

        // btns

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
        if ((std::string)btn1 == "No") {
            //if (langType == "Espanol") btn1 = "NO";
            if (langType == "Portuguese") btn1 = "Nao";
            if (langType == "Russki") btn1 = "Net";
            //if (langType == "Deutsch") btn1 = "NO";
        }
        if (btn2 != NULL && (std::string)btn2 == "Yes") {
            if (langType == "Espanol") btn2 = "Si";
            if (langType == "Portuguese") btn2 = "Sim";
            if (langType == "Russki") btn2 = "Da";
            //if (langType == "Deutsch") btn2 = "Yes";
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
        if (btn2 != NULL && (std::string)btn2 == "Exit") {
            if (langType == "Espanol") btn2 = "Salida";
            if (langType == "Portuguese") btn2 = "Sair";
            if (langType == "Russki") btn2 = "Vyhod";
            if (langType == "Deutsch") btn2 = "Ausfahrt";
        }
        if (btn2 != NULL && (std::string)btn2 == "Play") {
            if (langType == "Espanol") btn2 = "Jugar";
            if (langType == "Portuguese") btn2 = "Jogar";
            if (langType == "Russki") btn2 = "Igrat";
            if (langType == "Deutsch") btn2 = "Spielen";
        }
        if (btn2 != NULL && (std::string)btn2 == "Skip") {
            if (langType == "Espanol") btn2 = "Saltar";
            if (langType == "Portuguese") btn2 = "Saltar";
            //if (langType == "Russki") btn2 = "Igrat";
            if (langType == "Deutsch") btn2 = "Ueberspringen";
        }
        if ((std::string)btn1 == "Back") {
            if (langType == "Espanol") btn1 = "Volver";
            if (langType == "Portuguese") btn1 = "Voltar";
            if (langType == "Russki") btn1 = "Nazad";
            if (langType == "Deutsch") btn1 = "Zuruck";
        }
        if (btn2 != NULL && (std::string)btn2 == "Delete") {
            if (langType == "Espanol") btn2 = "Borrar";
            if (langType == "Portuguese") btn2 = "Eliminar";
            if (langType == "Russki") btn2 = "Udalit";
            if (langType == "Deutsch") btn2 = "Loeschen";
        }
        log::info("{}", desc);
        return FLAlertLayer::init(delegate, title, desc, btn1, btn2, width, p7, p8, p9);
    };
};