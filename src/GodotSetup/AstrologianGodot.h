//
// Created by Andy Langer on 4/19/26.
//

#ifndef ASTROLOGIAN_ASTROLOGIANGODOT_H
#define ASTROLOGIAN_ASTROLOGIANGODOT_H

#include <godot_cpp/classes/node.hpp>

#include "../GameLogic/GameModel.h"
#include "../ViewFactory/GodotViewFactory.h"
#include "../../godot-cpp/include/godot_cpp/classes/wrapped.hpp"

//TODO. Doc
class AstrologianGodot : public godot::Node {
    //TODO. Doc
    GDCLASS(AstrologianGodot, godot::Node)

    //TODO. Document these variables
    //TODO. Use a block comment
    //This must be a mutable pointer. Cannot construct without a view factory, which is not
    //ready until _ready
    GameModel * gameModel = nullptr;
    GodotViewFactory * godotViewFactory = nullptr;

protected:
    //TODO. Doc
    static void _bind_methods();

public:
    //TODO. Doc
    void _ready() override;

    //TODO. Doc
    //TODO. Make this private
    void initializeScreenSize();

    //TODO.  Doc
    ~AstrologianGodot() override;
};

#endif //ASTROLOGIAN_ASTROLOGIANGODOT_H
