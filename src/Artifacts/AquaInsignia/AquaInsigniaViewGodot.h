//
// Created by Andy Langer on 4/25/26.
//

#ifndef ASTROLOGIAN_AQUAINSIGNIAVIEWGODOT_H
#define ASTROLOGIAN_AQUAINSIGNIAVIEWGODOT_H
#include "AquaInsigniaView.h"
#include "../ArtifactViewGodot.h"
#include "godot_cpp/classes/sprite2d.hpp"

/**
 * Godot implementation of AquaInsigniaView
 */
class AquaInsigniaViewGodot : public ArtifactViewGodot, public AquaInsigniaView {
    // Enables this class to be recognized by Godot
    GDCLASS(AquaInsigniaViewGodot, ArtifactViewGodot)

    const std::string RESOURCE_PATH = "res://AquaInsignia.png";

protected:
    /**
     * Called by GDCLASS macro. Needs to exist
    */
    static void _bind_methods();

public:
    /**
     *  Called when this scene enters the scene tree
     */
    void _ready() override;
};

#endif //ASTROLOGIAN_AQUAINSIGNIAVIEWGODOT_H
