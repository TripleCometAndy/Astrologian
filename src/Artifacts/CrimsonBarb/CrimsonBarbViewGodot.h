//
// Created by Andy Langer on 4/19/26.
//

#ifndef ASTROLOGIAN_CRIMSONBARBVIEWGODOT_H
#define ASTROLOGIAN_CRIMSONBARBVIEWGODOT_H
#include "CrimsonBarbView.h"
#include "godot_cpp/classes/sprite2d.hpp"

/**
 * Godot implementation of CrimsonBarbView
 */
class CrimsonBarbViewGodot : public godot::Sprite2D, public CrimsonBarbView {
    // Enables this class to be recognized by Godot
    GDCLASS(CrimsonBarbViewGodot, godot::Sprite2D)

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
