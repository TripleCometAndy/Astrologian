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
    //TODO. What is this doing and why
    const Ref<Texture2D> texture = ResourceLoader::get_singleton()->load(imagePath.data());

    //TODO. What is this doing and why
    this->set_texture(texture);

    //TODO. What is this doing and why
    this->set_expand_mode(TextureRect::EXPAND_IGNORE_SIZE);

    //TODO. What is this doing and why?
    this->set_stretch_mode(TextureRect::STRETCH_KEEP_ASPECT);

    //TODO. What is this doing and why?
    //TODO. Constants
    this->set_size(Vector2(100, 100));

    //TODO. What is this doing and why?
    //TODO. Constants
    this->set_custom_minimum_size(Vector2(200, 200));
}
