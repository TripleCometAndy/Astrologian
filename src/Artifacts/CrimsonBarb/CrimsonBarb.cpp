//
// Created by Andy Langer on 4/16/26.
//


#include "CrimsonBarb.h"

#include <memory>

const std::string& CrimsonBarb::getName() const {
    return NAME;
}

CrimsonBarb::CrimsonBarb(const CrimsonBarbView& crimsonBarbView)  : view(crimsonBarbView) {

}

bool CrimsonBarb::operator==(const Artifact& other) const {
    return getName() == other.getName();
}

bool CrimsonBarb::operator!=(const Artifact& other) const {
    return !(*this == other);
}

const ArtifactView& CrimsonBarb::getView() const {
    return view;
}

