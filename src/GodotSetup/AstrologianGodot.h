//
// Created by Andy Langer on 4/19/26.
//

#ifndef ASTROLOGIAN_ASTROLOGIANGODOT_H
#define ASTROLOGIAN_ASTROLOGIANGODOT_H

#include <godot_cpp/classes/node.hpp>

#include "../GameLogic/GameModel.h"
#include "../ViewFactory/GodotViewFactory.h"
#include "../../godot-cpp/include/godot_cpp/classes/wrapped.hpp"

class AstrologianGodot : public godot::Node {
    GDCLASS(AstrologianGodot, godot::Node)

    //This must be a mutable pointer. Cannot construct without a view factory, which is not
    //ready until _ready
    GameModel * gameModel = nullptr;
    GodotViewFactory * godotViewFactory = nullptr;

protected:
    static void _bind_methods();

public:
    void _ready() override;

    ~AstrologianGodot() override;
};

#endif //ASTROLOGIAN_ASTROLOGIANGODOT_H
