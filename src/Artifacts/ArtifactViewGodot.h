//
// Created by Andy Langer on 4/29/26.
//

#ifndef ASTROLOGIAN_ARTIFACTVIEWGODOT_H
#define ASTROLOGIAN_ARTIFACTVIEWGODOT_H

#include <string>

#include "godot_cpp/classes/texture_rect.hpp"


class ArtifactViewGodot : public godot::TextureRect {
    // Enables this class to be recognized by Godot
    GDCLASS(ArtifactViewGodot, godot::TextureRect)

protected:
    //TODO. Doc
    static void _bind_methods();

    //TODO. Doc
    void initialize(std::string imagePath);

public:
    //TODO. Doc
    void _ready() override;
};

#endif //ASTROLOGIAN_ARTIFACTVIEWGODOT_H
