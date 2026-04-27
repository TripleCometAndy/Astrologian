//
// Created by Andy Langer on 4/19/26.
//

#ifndef ASTROLOGIAN_GODOTVIEWFACTORY_H
#define ASTROLOGIAN_GODOTVIEWFACTORY_H
#include "ViewFactory.h"
#include <godot_cpp/classes/node.hpp>

#include "../View/ViewType.h"

class GodotViewFactory : public ViewFactory {
    godot::Node& parent;

public:
    explicit GodotViewFactory(godot::Node& parent);

    [[nodiscard]] View* getView(VIEW_TYPE type, bool addToSceneTree) const override;

    ~GodotViewFactory() override = default;
};



#endif //ASTROLOGIAN_GODOTVIEWFACTORY_H
