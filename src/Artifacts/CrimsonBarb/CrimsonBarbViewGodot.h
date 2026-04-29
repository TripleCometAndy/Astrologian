//
// Created by Andy Langer on 4/19/26.
//

#ifndef ASTROLOGIAN_CRIMSONBARBVIEWGODOT_H
#define ASTROLOGIAN_CRIMSONBARBVIEWGODOT_H
#include "CrimsonBarbView.h"
#include "godot_cpp/classes/sprite2d.hpp"
#include "../ArtifactViewGodot.h"

/**
 * Godot implementation of CrimsonBarbView
 */
class CrimsonBarbViewGodot : public ArtifactViewGodot, public CrimsonBarbView {
    // Enables this class to be recognized by Godot
    GDCLASS(CrimsonBarbViewGodot, ArtifactViewGodot)

    const std::string RESOURCE_PATH = "res://CrimsonBarb.png";

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



#endif //ASTROLOGIAN_CRIMSONBARBVIEWGODOT_H
