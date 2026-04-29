//
// Created by Andy Langer on 4/19/26.
//

#include <gdextension_interface.h>

#include <godot_cpp/core/class_db.hpp>

#include <godot_cpp/core/defs.hpp>

#include <godot_cpp/godot.hpp>

#include "../Artifacts/AquaInsignia/AquaInsigniaViewGodot.h"
#include "../Artifacts/ArtifactViewGodot.h"
#include "../Artifacts/container/ArtifactContainerViewGodot.h"
#include "AstrologianGodot.h"
#include "../Artifacts/CrimsonBarb/CrimsonBarbViewGodot.h"

using namespace godot;

void initialize(ModuleInitializationLevel p_level) {
    //TODO. Document what this is doing. Why
    if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
        return;
    }

    //TODO. Document what this is doing. Why?
    //TODO. Atomize?
    ClassDB::register_class<AstrologianGodot>();
    ClassDB::register_class<ArtifactViewGodot>();
    ClassDB::register_class<CrimsonBarbViewGodot>();
    ClassDB::register_class<AquaInsigniaViewGodot>();
    ClassDB::register_class<ArtifactContainerViewGodot>();
}

void uninitialize(ModuleInitializationLevel p_level) {
    //TODO. What is this doing. Why?
    if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
        return;
    }
}

//TODO. What is this doing. Why?
extern "C" {
    GDExtensionBool GDE_EXPORT astrologian_init (
        GDExtensionInterfaceGetProcAddress p_get_proc_address,
        GDExtensionClassLibraryPtr p_library,
        GDExtensionInitialization *r_initialization
) {
        GDExtensionBinding::InitObject init_obj(p_get_proc_address, p_library, r_initialization);

        init_obj.register_initializer(initialize);

        init_obj.register_terminator(uninitialize);

        init_obj.set_minimum_library_initialization_level(MODULE_INITIALIZATION_LEVEL_SCENE);

        return init_obj.init();
    }
}

