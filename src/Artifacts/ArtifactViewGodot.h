//
// Created by Andy Langer on 4/29/26.
//

#ifndef ASTROLOGIAN_ARTIFACTVIEWGODOT_H
#define ASTROLOGIAN_ARTIFACTVIEWGODOT_H

#include <string>

#include "ArtifactView.h"
#include "godot_cpp/classes/texture_rect.hpp"


class ArtifactViewGodot : public godot::TextureRect, public ArtifactView {
    // Enables this class to be recognized by Godot
    GDCLASS(ArtifactViewGodot, godot::TextureRect)

protected:
    //TODO. Doc
    static void _bind_methods();



public:
    //TODO. Doc
    void _ready() override;

    //Initialize this artifact view once it enters the scene tree
    void initialize(std::string imagePath);
};

#endif //ASTROLOGIAN_ARTIFACTVIEWGODOT_H
