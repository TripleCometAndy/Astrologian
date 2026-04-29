//
// Created by Andy Langer on 4/19/26.
//


#include "GodotViewFactory.h"

#include "../Artifacts/AquaInsignia/AquaInsigniaViewGodot.h"
#include "../Artifacts/container/ArtifactContainerViewGodot.h"
#include "../Artifacts/CrimsonBarb/CrimsonBarbViewGodot.h"

GodotViewFactory::GodotViewFactory(godot::Node& parent) : parent(parent) {
    creators[CRIMSON_BARB] = getEntry<CrimsonBarbViewGodot>();
    creators[AQUA_INSIGNIA] = getEntry<AquaInsigniaViewGodot>();
    creators[ARTIFACT_CONTAINER] = getEntry<ArtifactContainerViewGodot>();
}

View *GodotViewFactory::getView(const VIEW_TYPE type, const bool addToSceneTree) const {
    View* val = creators.find(type)->second();

    if (addToSceneTree) {
        parent.add_child(dynamic_cast<godot::Node*>(val));
    }

    //TODO. Throw an exception if this is null
    return val;
}
