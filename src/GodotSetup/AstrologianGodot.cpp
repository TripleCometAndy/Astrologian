//
// Created by Andy Langer on 4/19/26.
//


#include "AstrologianGodot.h"
#include "../ViewFactory/GodotViewFactory.h"

using namespace godot;

void AstrologianGodot::_bind_methods() {
    //Register methods I want callable by GDScript here later
    //e.g ClassDB::bind_method(D_METHOD("start_game"), &AstrologianGodot::start_game);
}

void AstrologianGodot::_ready() {
    //Called by Godot when the node enters the scene tree. Construct GameModel here
    godotViewFactory = new GodotViewFactory(*this);
    gameModel = new GameModel(*godotViewFactory);

    gameModel->startGame();
}

AstrologianGodot::~AstrologianGodot() {
    delete gameModel;
}


