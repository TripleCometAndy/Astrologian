//
// Created by Andy Langer on 4/20/26.
//


#include "ArtifactContainerViewGodot.h"

#include "../ArtifactView.h"
#include "godot_cpp/classes/h_box_container.hpp"

ArtifactContainerViewGodot::ArtifactContainerViewGodot() : hbox(*memnew(godot::HBoxContainer)) {
}

void ArtifactContainerViewGodot::_bind_methods() {

}

void ArtifactContainerViewGodot::_ready() {
    //Don't add hbox to this container until the scene tree is set up
    add_child(&hbox);

    // Set the size of this container
    //Without this, the container width and height will be (0, 0)
    set_size(godot::Vector2(WIDTH, HEIGHT));

    // The hbox containing the artifacts should expand to
    // take up the full width and height of this container
    hbox.set_h_size_flags(SIZE_EXPAND_FILL);
    hbox.set_v_size_flags(SIZE_EXPAND_FILL);
}

void ArtifactContainerViewGodot::addArtifact(const ArtifactView& artifact) {
    const auto node = dynamic_cast<Node*>(const_cast<ArtifactView *>(&artifact));

    hbox.add_child(node);
}


