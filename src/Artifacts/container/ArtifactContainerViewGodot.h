//
// Created by Andy Langer on 4/20/26.
//

#ifndef ASTROLOGIAN_ARTIFACTCONTAINER_H
#define ASTROLOGIAN_ARTIFACTCONTAINER_H

#include "ArtifactContainerView.h"
#include "../../View/View.h"
#include "godot_cpp/classes/scroll_container.hpp"
#include "godot_cpp/classes/h_box_container.hpp"

/**
 * Class encapsulating a Godot implementation of ArtifactContainerView
 */
class ArtifactContainerViewGodot : public godot::ScrollContainer, public ArtifactContainerView {
    // Enables this class to be recognized by Godot
    GDCLASS(ArtifactContainerViewGodot, godot::ScrollContainer)

    /**
    * This container is a Godot ScrollContainer.
    * However, we want to have all the artifacts laid out in the container horizontally
    * The HBoxContainer should be added as a child of this container, and then
    * all artifacts will go inside the HBoxContainer
     */
    godot::HBoxContainer& hbox;

protected:
    /**
     * Called by GDCLASS macro. Needs to exist
    */
    static void _bind_methods();

    // The width of the container
    const unsigned int WIDTH = 400;

    // The height of the container
    const unsigned int HEIGHT = 200;
public:
    /**
     * Constructor
     */
    ArtifactContainerViewGodot();

    void _ready() override;

    /** @copydoc ArtifactContainerView::addArtifact */
    void addArtifact(const ArtifactView& artifact) override;
};

#endif //ASTROLOGIAN_ARTIFACTCONTAINER_H
