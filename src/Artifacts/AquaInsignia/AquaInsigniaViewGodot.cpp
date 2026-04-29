//
// Created by Andy Langer on 4/25/26.
//


#include "AquaInsigniaViewGodot.h"

#include "godot_cpp/classes/resource_loader.hpp"

using namespace godot;

void AquaInsigniaViewGodot::_bind_methods() {

}

void AquaInsigniaViewGodot::_ready() {
    initialize(RESOURCE_PATH);
}