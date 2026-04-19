//
// Created by Andy Langer on 4/19/26.
//


#include "GodotViewFactory.h"

#include "../Artifacts/AquaInsignia/AquaInsigniaViewGodot.h"
#include "../Artifacts/container/ArtifactContainerViewGodot.h"
#include "../Artifacts/CrimsonBarb/CrimsonBarb.h"
#include "../Artifacts/CrimsonBarb/CrimsonBarbViewGodot.h"

GodotViewFactory::GodotViewFactory(godot::Node& parent) : parent(parent) {

}

View *GodotViewFactory::getView(const VIEW_TYPE type, const bool addToSceneTree) const {
    View* val;

    switch (type) {
        case CRIMSON_BARB: {
            CrimsonBarbViewGodot * view = memnew(CrimsonBarbViewGodot);

            val = view;
            break;
        }
        case AQUA_INSIGNIA: {
            AquaInsigniaViewGodot * view = memnew(AquaInsigniaViewGodot);

            val = view;
            break;
        }
        case ARTIFACT_CONTAINER: {
            ArtifactContainerViewGodot * view = memnew(ArtifactContainerViewGodot);

            val = view;
            break;
        }
    }

    if (addToSceneTree) {
        parent.add_child(dynamic_cast<godot::Node*>(val));
    }

    //TODO. Throw an exception if this is null
    return val;
}
