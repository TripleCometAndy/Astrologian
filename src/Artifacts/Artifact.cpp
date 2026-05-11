//
// Created by Andy Langer on 5/10/26.
//

#include "Artifact.h"

Artifact::Artifact(const std::string name, const ArtifactView &view) : NAME(name), view(view) {

}

const std::string &Artifact::getName() const {
    return NAME;
}

bool Artifact::operator==(const Artifact & other) const {
    return NAME == other.getName();
}

bool Artifact::operator!=(const Artifact & other) const {
    return !(*this == other);
}

const ArtifactView &Artifact::getView() const {
    return view;
}
