//
// Created by Andy Langer on 4/25/26.
//


#include "AquaInsigniaViewGodot.h"

#include "godot_cpp/classes/resource_loader.hpp"

using namespace godot;

void AquaInsigniaViewGodot::_bind_methods() {

}

void AquaInsigniaViewGodot::_ready() {
    const Ref<Texture2D> texture = ResourceLoader::get_singleton()->load(RESOURCE_PATH.data());

    this->set_texture(texture);
    this->set_position(Vector2(150.0f, 200.0f));
    this->set_scale(Vector2(0.5f, 0.5f));
}