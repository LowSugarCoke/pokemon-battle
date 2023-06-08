#pragma once

#include <memory>

#include <QtWidgets/QMainWindow>

#include "ui_Pokemon.h"
#include "mainController.h"
#include "battleController.h"
#include "pokemonService.h"
#include "musicService.h"


class Pokemon : public QMainWindow
{
    Q_OBJECT

public:
    Pokemon(QWidget* parent = Q_NULLPTR);
    void init();

private:
    Ui::PokemonClass ui;
    std::unique_ptr<MainController> mpMainController;
    std::unique_ptr<BattleController> mpBattleController;
    std::shared_ptr<PokemonService> mpPokemonService;
    std::shared_ptr<MusicService> mpMusicService;
};
