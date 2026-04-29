//
// Created by Andy Langer on 4/29/26.
//

#include "ArtifactViewGodot.h"
#include "godot_cpp/classes/resource_loader.hpp"

using namespace godot;

void ArtifactViewGodot::_bind_methods() {

}

void ArtifactViewGodot::_ready() {
}

void ArtifactViewGodot::initialize(const std::string imagePath) {
    const Ref<Texture2D> texture = ResourceLoader::get_singleton()->load(imagePath.data());

    this->set_texture(texture);
    this->set_expand_mode(TextureRect::EXPAND_IGNORE_SIZE);
    this->set_stretch_mode(TextureRect::STRETCH_KEEP_ASPECT);
    this->set_size(Vector2(100, 100));
    this->set_custom_minimum_size(Vector2(200, 200));
}
