//
// Created by Andy Langer on 4/19/26.
//

#ifndef ASTROLOGIAN_DUMMYVIEWFACTORY_H
#define ASTROLOGIAN_DUMMYVIEWFACTORY_H
#include "ViewFactory.h"


class DummyViewFactory : public ViewFactory {
    View* getView(const VIEW_TYPE type, const bool addToSceneTree) const override;
};



#endif //ASTROLOGIAN_DUMMYVIEWFACTORY_H
