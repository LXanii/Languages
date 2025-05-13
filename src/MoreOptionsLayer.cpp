#include <Geode/Geode.hpp> 
#include <Geode/modify/MoreOptionsLayer.hpp>

using namespace geode::prelude;

class $modify(MoreOptionsLayer) {

    struct Fields {
        std::string langType = Mod::get()->getSettingValue<std::string>("Language");
    };

    bool init() {
        bool result = MoreOptionsLayer::init();

        std::vector<std::string> gameplayReplace = {};
        std::vector<std::string> visualReplace1 = {};
        std::vector<std::string> visualReplace2 = {};
        std::vector<std::string> practiceReplace = {};
        std::vector<std::string> performanceReplace = {};
        std::vector<std::string> audioReplace = {};
        std::vector<std::string> otherReplace = {};

        auto mainLayer = this->getChildByID("main-layer");
        auto gameplayOptions = mainLayer->getChildByID("gameplay-options-layer-1");
        auto visualOptions1 = mainLayer->getChildByID("visual-options-layer-1");
        auto visualOptions2 = mainLayer->getChildByID("visual-options-layer-2");
        auto practiceOptions = mainLayer->getChildByID("practice-options-layer");
        auto performanceOptions = mainLayer->getChildByID("performance-options-layer");
        auto audioOptions = mainLayer->getChildByID("audio-options-layer");
        auto otherOptions = mainLayer->getChildByID("other-options-layer");
        auto titleLabel = reinterpret_cast<CCLabelBMFont*>(mainLayer->getChildByID("options-label"));

        if (m_fields->langType == "Espanol") {
            titleLabel->setString("Jugabilidad"); // Gameplay
            gameplayReplace = {"Auto-Retry", "Reinicio mas Rapido", "Cursor de Bloqueo", "Voltear Controles\nde 2 Jugadores", "Limitar Siempre\nlos Controles", "Desactivar\nThumbstick", "Teclas Rapidas"};
            visualReplace1 = {"Mostrar Cursor", "Ocultar Intentos", "Boton Flip Pause", "Desactivar Guia\ndel Portal", "Activar Guia Orb", "Desactivar\nEscala Orb", "Desactivar\nescala Orbital", "Desactivar\nShake", "Desactivar Sacudida\nde Explosion", "Desactivar Efecto\nGravedad"};
            visualReplace2 = {"Mini icono\nPredeterminado", "Cambiar Color\nTeletransporte\nArana", "Cambiar el Color\nde Fire Dash", "Cambiar Color de\nRastro de Onda", "Ocultar Texto\nde Prueba"};
            practiceReplace = {"Ocultar Botones\nde Practica", "Ocultar Intentos", "Activar Auto-Checkpoints", "Activar Puntos de\nControl Rapido", "Activar Efecto Muerte", "Activar Musica Normal\nen el Editor", "Mostrar Hitboxes", "Desactivar Hitbox\ndel Jugador"};
            performanceReplace = {"Aumentar la Capacidad\nde Extraccion", "Activar Detalles\nBajos", "Desactivar Alerta de\nObjeto Alto", "Activar Detalle\nExtra Bajo", "Aumentar Niveles\nMaximos", "Desactivar Guardado\nde Niveles", "Guardar\nGuanteletes", "Desactivar Shader\nAnti-Aliasing"};
            audioReplace = {"Cambiar Ubicacion\nde Canciones\nPersonalizadas", "Desactivar Alerta\nde Cancion", "Sin Limite\nde Canciones", "Reducir Calidad", "Audio Fix 01"};
            otherReplace = {"Mas Comentarios", "Cargar\nComentarios", "Nuevo Filtro\nCompletado", "Aumentar Niveles\nLocales por Pagina", "Orden Manual\nde Niveles", "Porcentaje Decimales", "Mostrar Porcentaje\nde Clasificacion", "No...", "Confirmar Salida", "Menu Rapido"};
            reinterpret_cast<CCLabelBMFont*>(mainLayer->getChildByID("music-offset-label"))->setString("Desplazamiento de Musica (MS)"); mainLayer->getChildByID("music-offset-label")->setPositionX(mainLayer->getChildByID("music-offset-label")->getPositionX() + 50); // Music Offset (MS)
        }
        if (m_fields->langType == "Portugues") {
            titleLabel->setString("Jogabilidade"); // Gameplay
            gameplayReplace = {"Reinicializacao\nAutomatica", "Reinicializacao\nMais Rapida", "Bloqueio do Cursor", "Controles para\nDois Jogadores", "Limitar Sempre\nos controles", "Desativar o\nThumbstick", "Teclas Rapidas"};
            visualReplace1 = {"Mostrar Cursor", "Ocultar Tentativas", "Inverter o Botao\nde Pausa", "Desativar Guia\ndo Portal", "Ativar Guia\nde orbe", "Desativar Escala\nde Orbe", "Desativar Escala\nde Orbe de\nGatilho", "Desativar Agitacao", "Desativar Agitacao\nde Explosao", "Desativar Efeito\nde Gravidade"};
            visualReplace2 = {"Mini Icone\nPadrao", "Mudar a Cor do\nTeletransporte\nda Aranha", "Mudar a Cor\ndo Fire Dash", "Mudar a Cor do\nRastro da Onda", "Ocultar Texto\ndo Teste de Jogo"};
            practiceReplace = {"Ocultar Botoes\nde Pratica", "Ocultar Tentativas", "Ativar Pontos de\nVerificacao Automaticos", "Ativar Pontos de\nControle Rapidos", "Ativar Efeito\nde Morte", "Ativar Musica\nNormal no Editor", "Mostrar Caixas\nde Acerto", "Desativar a Caixa\nde Acerto do Jogador"};
            performanceReplace = {"Aumentar a\nCapacidade de\nDesenho", "Ativar Detalhes\nBaixos", "Desativar Alerta\nde Objeto Alto", "Ativar Detalhe\nExtra Baixo", "Aumentar os\nNiveis Maximos", "Desativar Salvamento\nde Nivel", "Salvar\nManoplas", "Desativar o\nAnti-Aliasing do\nShader"};
            audioReplace = {"Alterar o Local das\nMusicas Personalizadas", "Desativar Alerta\nde Musica", "Sem Limite\nde Musicas", "Reduzir a\nQualidade", "Correcao de\nAudio 01"};
            otherReplace = {"Mais Comentarios", "Carregar\nComentarios", "Novo Filtro\nConcluido", "Aumentar os Niveis\nLocais por Pagina", "Ordem de\nNivel Manual", "Decimais de\nPorcentagem", "Mostrar Porcentagem\nda Tabela de\nClassificacao", "Nao...", "Confirmar Saida", "Menu Rapido"};
            reinterpret_cast<CCLabelBMFont*>(mainLayer->getChildByID("music-offset-label"))->setString("Deslocamento de Musica (MS)"); mainLayer->getChildByID("music-offset-label")->setPositionX(mainLayer->getChildByID("music-offset-label")->getPositionX() + 45); // Music Offset (MS)
        }
        if (m_fields->langType == "Russki") {
            titleLabel->setString("Gejmplej"); // Gameplay
            gameplayReplace = {"Avtoperezagruzka", "Uskorennyi\nSbros", "Blokirovka Kursora", "Upravlenie dvumya\nIgrokami", "Vsegda Ogranichivat\nUpravlenie", "Otklyuchit\nBolshoi Palets", "Bystrye Klavishi"};
            visualReplace1 = {"Pokazat Kursor", "Skryt Popytki", "Perevernut Knopku\nPauzy", "Otklyuchit Rukovodstvo\npo Portalam", "Vklyuchit Rukovodstvo\npo Sfere", "Otklyuchit\nShkalu Sfer", "Otklyuchit Triggernuyu\nShkalu Orbov", "Otklyuchit Tryasku", "Otklyuchit\nVzryvnuyu\nTryasku", "Otklyuchit Effekt\nGravitacii"};
            visualReplace2 = {"Mini-ikonka po\nUmolchaniyu", "Pereklyuchit Tsvet\nTeleportacii Pauka", "Pereklyuchit Tsvet\nOgnennogo Tira", "Pereklyuchit Tsvet\nVolnovogo Sleda", "Skryt Tekst\nTestirovanie"};
            practiceReplace = {"Skryt Knopki\nTrenirovki", "Skryt Popytki", "Vklyuchit\nAvtomaticheskie\nKontrolnye Tochki", "Vklyuchit Bystrye\nKontrolnye Tochki", "Vklyuchit Effekt\nSmerti", "Vklyuchit Normalnuyu\nMuzyku v\nRedaktore", "Pokazat Hitboksy", "Otklyuchit\nHitboks Igroka"};
            performanceReplace = {"Uvelichit Obem\nRisunka", "Vklyuchit Nizkuyu\nDetalizaciyu", "Otklyuchit\nPreduprezhdenie o\nVysokikh Obektakh", "Vklyuchit\nDopolnitelnuyu\nNizkuyu\nDetalizaciyu", "Uvelichit Maksimalnye\nUroveni", "Otklyuchit\nSokhranenie Urovnei", "Sokhranit\nGauntlety", "Otklyuchit\nSglazhivanie\nSheiderov"};
            audioReplace = {"Izmenit Raspolozhenie\nPolzovatelskikh Pesen", "Otklyuchit\nOpoveshchenie\no Pesnyakh", "Net Limita Pesen", "Umenshit\nKachestvo", "Ispravlenie\nZvuka 01"};
            otherReplace = {"Bolshe Kommentariev", "Zagruzit\nKommentarii", "Novyi\nZavershennyi Filtr", "Uvelichenie Lokalnykh\nUrovnei na Stranice", "Ruchnoi Poryadok\nUrovnei", "Desyatichnye\nProtsenty", "Pokazat Protsentnoe\nSootnoshenie v\nTablice Liderov", "Ne...", "Podtverdit Vykhod", "Bystroe menyu"};
            reinterpret_cast<CCLabelBMFont*>(mainLayer->getChildByID("music-offset-label"))->setString("Smesenie Muzyki (MS)"); mainLayer->getChildByID("music-offset-label")->setPositionX(mainLayer->getChildByID("music-offset-label")->getPositionX() + 25); // Music Offset (MS)
        }
        if (m_fields->langType == "Deutsch") {
            titleLabel->setString("Spielverlauf"); // Gameplay
            gameplayReplace = {"Auto-Retry", "Schnellerer Reset", "Cursor Sperren", "2-Spieler-Steuerung\nUmdrehen", "Steuerelemente\nimmer Begrenzen", "Thumbstick\nDeaktivieren", "Schnell-Tasten"};
            visualReplace1 = {"Cursor Anzeigen", "Versuche\nAusblenden", "Pausentaste\nUmdrehen", "Portalfuehrung\nDeaktivieren", "Orb-Guide\nEinschalten", "Orb-Skala\nDeaktivieren", "Ausloeser Orb-Skala\nDeaktivieren", "Schuetteln\nDeaktivieren", "Explosionsschuetteln\nDeaktivieren", "Gravitationseffekt\nDeaktivieren"};
            visualReplace2 = {"Standard-Mini-Symbol", "Farbe Fuer\nSpinnenteleport\nWechseln", "Farbe des\nFeuerstosses\nUmschalten", "Farbe der Wellenbahn\nUmschalten", "Spieltest-Text Ausblenden"};
            practiceReplace = {"Uebungsschaltflaechen\nAusblenden", "Versuche\nAusblenden", "Auto-Checkpoints Einschalten", "Schnell-Checkpoints\nAktivieren", "Todeseffekt Aktivieren", "Normale Musik\nim Editor\nEinschalten", "Hitboxen Anzeigen", "Spieler-Hitbox\nDeaktivieren"};
            performanceReplace = {"Zeichenkapazitaet\nErhoehen", "Niedrige Details\nAktivieren", "Hohen Objektalarm\nDeaktivieren", "Extra Niedriges\nDetail Einschalten", "Maximale Levels\nErhoehen", "Level-Speicherung\nDeaktivieren", "Stulpen Speichern", "Shader Anti-Aliasing\nDeaktivieren"};
            audioReplace = {"Speicherort Fuer\nBenutzerdefinierte\nSongs Aendern", "Song-Alarm\nDeaktivieren", "Kein Song-Limit", "Qualitaet\nVermindern", "Audio Reparieren 01"};
            otherReplace = {"Mehr Kommentare", "Kommentare Laden", "Neuer\nAbgeschlossener\nFilter", "Lokale Levels\npro Seite Erhoehen", "Manuelle\nLevelreihenfolge", "Prozentsatz\nDezimalstellen", "Prozentsatz der\nRangliste Anzeigen", "Nicht...", "Bestaetigen Beenden", "Schnelles\nMenue"};

            reinterpret_cast<CCLabelBMFont*>(mainLayer->getChildByID("music-offset-label"))->setString("Musik-Offset (MS)"); // Music Offset (MS)
        }
        if (m_fields->langType != "English") {
            if (gameplayOptions->getChildrenCount() == gameplayReplace.size()) for (int i = 0; i < gameplayOptions->getChildrenCount(); i++) reinterpret_cast<CCLabelBMFont*>(gameplayOptions->getChildren()->objectAtIndex(i))->setString(gameplayReplace[i].c_str());
            if (visualOptions1->getChildrenCount() == visualReplace1.size()) for (int i = 0; i < visualOptions1->getChildrenCount(); i++) reinterpret_cast<CCLabelBMFont*>(visualOptions1->getChildren()->objectAtIndex(i))->setString(visualReplace1[i].c_str());
            if (visualOptions2->getChildrenCount() == visualReplace2.size()) for (int i = 0; i < visualOptions2->getChildrenCount(); i++) reinterpret_cast<CCLabelBMFont*>(visualOptions2->getChildren()->objectAtIndex(i))->setString(visualReplace2[i].c_str());
            if (practiceOptions->getChildrenCount() == practiceReplace.size()) for (int i = 0; i < practiceOptions->getChildrenCount(); i++) reinterpret_cast<CCLabelBMFont*>(practiceOptions->getChildren()->objectAtIndex(i))->setString(practiceReplace[i].c_str());
            if (performanceOptions->getChildrenCount() == performanceReplace.size()) for (int i = 0; i < performanceOptions->getChildrenCount(); i++) reinterpret_cast<CCLabelBMFont*>(performanceOptions->getChildren()->objectAtIndex(i))->setString(performanceReplace[i].c_str());
            if (audioOptions->getChildrenCount() == audioReplace.size()) for (int i = 0; i < audioOptions->getChildrenCount(); i++) reinterpret_cast<CCLabelBMFont*>(audioOptions->getChildren()->objectAtIndex(i))->setString(audioReplace[i].c_str());
            if (otherOptions->getChildrenCount() == otherReplace.size()) for (int i = 0; i < otherOptions->getChildrenCount(); i++) reinterpret_cast<CCLabelBMFont*>(otherOptions->getChildren()->objectAtIndex(i))->setString(otherReplace[i].c_str());
        }
        return result;
    }

    void onNextPage(CCObject* sender) {
        MoreOptionsLayer::onNextPage(sender);
        changeTitle();
    }

    void onPrevPage(CCObject* sender) {
        MoreOptionsLayer::onPrevPage(sender);
        changeTitle();
    }

    void changeTitle() {
        auto mainLayer = this->getChildByID("main-layer");
        auto titleLabel = reinterpret_cast<CCLabelBMFont*>(mainLayer->getChildByID("options-label"));

        if (m_fields->langType == "Espanol") {
            if ((std::string)titleLabel->getString() == "Gameplay") titleLabel->setString("Jugabilidad");
            //if ((std::string)titleLabel->getString() == "Visual") titleLabel->setString("Juego");
            if ((std::string)titleLabel->getString() == "Practice") titleLabel->setString("Practica");
            if ((std::string)titleLabel->getString() == "Performance") titleLabel->setString("Actuacion");
            //if ((std::string)titleLabel->getString() == "Audio") titleLabel->setString("Juego");
            if ((std::string)titleLabel->getString() == "Other") titleLabel->setString("Otros");
        }
        if (m_fields->langType == "Portugues") {
            if ((std::string)titleLabel->getString() == "Gameplay") titleLabel->setString("Jogabilidade");
            //if ((std::string)titleLabel->getString() == "Visual") titleLabel->setString("Juego");
            if ((std::string)titleLabel->getString() == "Practice") titleLabel->setString("Pratica");
            if ((std::string)titleLabel->getString() == "Performance") titleLabel->setString("Desempenho");
            //if ((std::string)titleLabel->getString() == "Audio") titleLabel->setString("Juego");
            if ((std::string)titleLabel->getString() == "Other") titleLabel->setString("Outros");
        }
        if (m_fields->langType == "Russki") {
            if ((std::string)titleLabel->getString() == "Gameplay") titleLabel->setString("Gejmplej");
            if ((std::string)titleLabel->getString() == "Visual") titleLabel->setString("Vizual nyj");
            if ((std::string)titleLabel->getString() == "Practice") titleLabel->setString("Praktika");
            if ((std::string)titleLabel->getString() == "Performance") titleLabel->setString("Performans");
            //if ((std::string)titleLabel->getString() == "Audio") titleLabel->setString("Juego");
            if ((std::string)titleLabel->getString() == "Other") titleLabel->setString("Drugie");
        }
        if (m_fields->langType == "Deutsch") {
            if ((std::string)titleLabel->getString() == "Gameplay") titleLabel->setString("Spielverlauf");
            if ((std::string)titleLabel->getString() == "Visual") titleLabel->setString("Visuell");
            if ((std::string)titleLabel->getString() == "Practice") titleLabel->setString("Praxis");
            if ((std::string)titleLabel->getString() == "Performance") titleLabel->setString("Leistung");
            //if ((std::string)titleLabel->getString() == "Audio") titleLabel->setString("Juego");
            if ((std::string)titleLabel->getString() == "Other") titleLabel->setString("Andere");
        }
    }
};

// settings strings

// Auto-Retry
// Faster Reset
// Lock Cursor
// Flip 2-Player Controls
// Always Limit Controls
// Disable Thumbstick
// Quick Keys

// Show Cursor
// Hide Attempts
// Flip Pause Button
// Disable Portal Guide
// Enable Orb Guide
// Disable Orb Scale
// Disable Trigger Orb Scale
// Disable Shake
// Disable Explosion Shake
// Disable Gravity Effect

// Default Mini Icon
// Switch Spider Teleport Color
// Switch Fire Dash Color
// Switch Wave Trail Color
// Hide Playtest Text

// Hide Practice Buttons
// Hide Attempts
// Enable Auto-Checkpoints
// Enable Quick Checkpoints
// Enable Death Effect
// Enable Normal Music in Editor
// Show Hitboxes
// Disable Player Hitbox

// Increase Draw Capacity
// Enable Low Detail
// Disable High Object Alert
// Enable Extra Low Detail
// Increase Maximum Levels
// Disable Level Saving
// Save Gauntlets
// Disable Shader Anti-Aliasing

// Change Custom Songs Location
// Disable Song Alert
// No Song Limit
// Reduce Quality
// Audio Fix 01

// More Comments
// Load Comments
// New Completed Filter
// Increase Local Levels Per Page
// Manual Level Order
// Percentage Decimals
// Show Leaderboard Percentage
// Do Not...
// Confirm Exit
// Fast Menu

// music offset
// gameplay
