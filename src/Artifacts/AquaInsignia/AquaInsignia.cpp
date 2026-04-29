//
// Created by Andy Langer on 4/17/26.
//

#include "AquaInsignia.h"

#include <memory>

#include "AquaInsigniaView.h"

AquaInsignia::AquaInsignia(const AquaInsigniaView& aquaInsigniaView) : aquaInsigniaView(aquaInsigniaView) {

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

const View& AquaInsignia::getView() const {
    return aquaInsigniaView;
}
