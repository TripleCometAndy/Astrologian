//
// Created by Andy Langer on 4/20/26.
//

#ifndef ASTROLOGIAN_ARTIFACTCONTAINER_H
#define ASTROLOGIAN_ARTIFACTCONTAINER_H

#include "ArtifactContainerView.h"
#include "../../View/View.h"
#include "godot_cpp/classes/scroll_container.hpp"
#include "godot_cpp/classes/h_box_container.hpp"

//TODO. Doc
class ArtifactContainerViewGodot : public godot::ScrollContainer, public ArtifactContainerView {
    // Enables this class to be recognized by Godot
    GDCLASS(ArtifactContainerViewGodot, godot::ScrollContainer)

    //TODO. Document this variable
    godot::HBoxContainer& hbox;

protected:
    /**
     * Called by GDCLASS macro. Needs to exist
    */
    static void _bind_methods();

public:
    //TODO. Doc
    ArtifactContainerViewGodot();

    //TODO. Doc
    void _ready() override;

    //TODO. Doc
    void addArtifact(const ArtifactView& artifact) override;
};

#endif //ASTROLOGIAN_ARTIFACTCONTAINER_H
