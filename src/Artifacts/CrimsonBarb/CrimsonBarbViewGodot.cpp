//
// Created by Andy Langer on 4/19/26.
//


#include "CrimsonBarbViewGodot.h"

#include "godot_cpp/classes/resource_loader.hpp"

using namespace godot;

void CrimsonBarbViewGodot::_bind_methods() {

}

void CrimsonBarbViewGodot::_ready() {
    const Ref<Texture2D> texture = ResourceLoader::get_singleton()->load("res://CrimsonBarb.png");

    this->set_texture(texture);
    this->set_position(Vector2(150.0f, 200.0f));
    this->set_scale(Vector2(0.5f, 0.5f));
}
