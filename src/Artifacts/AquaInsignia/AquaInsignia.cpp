//
// Created by Andy Langer on 4/17/26.
//

#include "AquaInsignia.h"

#include <memory>

AquaInsignia::AquaInsignia(const ArtifactView& view) : view(view) {

}

const std::string& AquaInsignia::getName() const {
    return NAME;
}

bool AquaInsignia::operator==(const Artifact & other) const {
    return getName() == other.getName();
}

bool AquaInsignia::operator!=(const Artifact & other) const {
    return !(*this == other);
}

const ArtifactView& AquaInsignia::getView() const {
    return view;
}
