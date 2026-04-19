//
// Created by Andy Langer on 4/19/26.
//

#ifndef ASTROLOGIAN_GODOTVIEWFACTORY_H
#define ASTROLOGIAN_GODOTVIEWFACTORY_H
#include "ViewFactory.h"
#include <godot_cpp/classes/node.hpp>

#include "../View/ViewType.h"

class GodotViewFactory : public ViewFactory {
private:
    godot::Node& parent;

public:

    GodotViewFactory(godot::Node& parent);

    View* getView(VIEW_TYPE type, bool addToSceneTree) const override;
};



#endif //ASTROLOGIAN_GODOTVIEWFACTORY_H
