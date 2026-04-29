//
// Created by Andy Langer on 4/17/26.
//

#ifndef ASTROLOGIAN_VIEWFACTORY_H
#define ASTROLOGIAN_VIEWFACTORY_H

#include "../View/View.h"
#include "../View/ViewType.h"


class ViewFactory {
public:
    //TODO. This could probably return a reference
    [[nodiscard]] virtual View* getView(VIEW_TYPE type, bool addToSceneTree) const = 0;

    //TODO. Doc
    virtual ~ViewFactory() = default;
};



#endif //ASTROLOGIAN_VIEWFACTORY_H
