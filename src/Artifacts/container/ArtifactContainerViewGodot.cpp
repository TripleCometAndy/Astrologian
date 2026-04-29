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
    //TODO. Document what this is doing. Why?
    add_child(&hbox);

    //TODO. Make constants
    //TODO. Document what this is doing. Why?
    set_size(godot::Vector2(400, 200));

    //TODO. Document what this is doing. Why?
    hbox.set_h_size_flags(SIZE_EXPAND_FILL);

    //TODO. Document what this is doing. Why?
    hbox.set_v_size_flags(SIZE_EXPAND_FILL);
}

void ArtifactContainerViewGodot::addArtifact(const View& artifact) {
    //TODO. What is this doing? Why?
    //TODO. What if the cast fails? Log the error and throw an exception
    const auto node = dynamic_cast<Node*>(const_cast<View *>(&artifact));

    hbox.add_child(node);
}


