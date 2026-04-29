//
// Created by Andy Langer on 4/19/26.
//

#ifndef ASTROLOGIAN_GODOTVIEWFACTORY_H
#define ASTROLOGIAN_GODOTVIEWFACTORY_H
#include <functional>

#include "ViewFactory.h"
#include <godot_cpp/classes/node.hpp>

#include "../View/ViewType.h"

//TODO. Doc
class GodotViewFactory : public ViewFactory {
    //TODO. Document this variable
    godot::Node& parent;

    //TODO. Document this variable
    std::unordered_map<VIEW_TYPE, std::function<View*()>> creators;

    //TODO. Doc
    template<typename ViewT> static ViewT* getValue() {
        return memnew(ViewT);
    }

    //TODO. Doc
    template<typename ViewT> static std::function<View*()> getEntry() {
        return [] {
            return getValue<ViewT>();
        };
    }

public:
    //TODO. Doc
    explicit GodotViewFactory(godot::Node& parent);

    //TODO. Doc
    [[nodiscard]] View* getView(VIEW_TYPE type, bool addToSceneTree) const override;

    //TODO. Doc
    ~GodotViewFactory() override = default;
};



#endif //ASTROLOGIAN_GODOTVIEWFACTORY_H
