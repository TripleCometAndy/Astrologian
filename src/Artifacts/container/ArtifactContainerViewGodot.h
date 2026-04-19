//
// Created by Andy Langer on 4/20/26.
//

#ifndef ASTROLOGIAN_ARTIFACTCONTAINER_H
#define ASTROLOGIAN_ARTIFACTCONTAINER_H

#include "ArtifactContainerView.h"
#include "../../View/View.h"
#include "godot_cpp/classes/scroll_container.hpp"
#include "godot_cpp/classes/h_box_container.hpp"

class ArtifactContainerViewGodot : public godot::ScrollContainer, public ArtifactContainerView {
    GDCLASS(ArtifactContainerViewGodot, godot::ScrollContainer)

    godot::HBoxContainer& hbox;

protected:
    static void _bind_methods();

public:
    ArtifactContainerViewGodot();

    void _ready() override;
    void addArtifact(const View& artifact) override;

};



#endif //ASTROLOGIAN_ARTIFACTCONTAINER_H
