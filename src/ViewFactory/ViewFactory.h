//
// Created by Andy Langer on 4/17/26.
//

#ifndef ASTROLOGIAN_VIEWFACTORY_H
#define ASTROLOGIAN_VIEWFACTORY_H
#include <memory>

#include "../View/View.h"
#include "../View/ViewType.h"


class ViewFactory {
public:
    virtual View* getView(VIEW_TYPE type, bool addToSceneTree) const = 0;
};



#endif //ASTROLOGIAN_VIEWFACTORY_H
