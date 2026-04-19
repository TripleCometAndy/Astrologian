//
// Created by Andy Langer on 4/20/26.
//


#include "ArtifactContainerViewGodot.h"

#include "../../View/View.h"
#include "godot_cpp/classes/h_box_container.hpp"

ArtifactContainerViewGodot::ArtifactContainerViewGodot() : hbox(*memnew(godot::HBoxContainer)) {
}

void ArtifactContainerViewGodot::_bind_methods() {

}

void ArtifactContainerViewGodot::_ready() {
    add_child(&hbox);

    set_size(godot::Vector2(400, 200));

    hbox.set_h_size_flags(SIZE_EXPAND_FILL);
    hbox.set_v_size_flags(SIZE_EXPAND_FILL);
}

void ArtifactContainerViewGodot::addArtifact(const View& artifact) {
    const auto node = dynamic_cast<Node*>(const_cast<View *>(&artifact));

    hbox.add_child(node);
}


