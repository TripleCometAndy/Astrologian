//
// Created by Andy Langer on 4/19/26.
//


#include "AstrologianGodot.h"
#include "../ViewFactory/GodotViewFactory.h"
#include "godot_cpp/classes/display_server.hpp"
#include "godot_cpp/classes/engine.hpp"
#include "godot_cpp/classes/scene_tree.hpp"
#include "godot_cpp/classes/window.hpp"

using namespace godot;

void AstrologianGodot::_bind_methods() {
    //Register methods I want callable by GDScript here later
    //e.g ClassDB::bind_method(D_METHOD("start_game"), &AstrologianGodot::start_game);
}

void AstrologianGodot::_ready() {
    //Called by Godot when the node enters the scene tree. Construct GameModel here
    godotViewFactory = new GodotViewFactory(*this);
    gameModel = new GameModel(*godotViewFactory);

    //Initialize the screen size
    Vector2i screenSize = DisplayServer::get_singleton()->screen_get_size(DisplayServer::SCREEN_OF_MAIN_WINDOW);

    if (Engine::get_singleton()->is_editor_hint()) {
        return;
    }

    DisplayServer::get_singleton()->window_set_mode(DisplayServer::WINDOW_MODE_MAXIMIZED);

    get_tree()->get_root()->set_content_scale_size(Vector2(1920, 1080));
    get_tree()->get_root()->set_content_scale_mode(Window::CONTENT_SCALE_MODE_CANVAS_ITEMS);
    get_tree()->get_root()->set_content_scale_aspect(Window::CONTENT_SCALE_ASPECT_KEEP);

    gameModel->startGame();
}

AstrologianGodot::~AstrologianGodot() {
    delete gameModel;
}


