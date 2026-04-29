//
// Created by Andy Langer on 4/19/26.
//


#include "CrimsonBarbViewGodot.h"

#include "godot_cpp/classes/resource_loader.hpp"

using namespace godot;

void CrimsonBarbViewGodot::_bind_methods() {

}

void CrimsonBarbViewGodot::_ready() {
    initialize(RESOURCE_PATH);
}
