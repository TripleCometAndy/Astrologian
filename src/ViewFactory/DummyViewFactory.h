//
// Created by Andy Langer on 4/19/26.
//

#ifndef ASTROLOGIAN_DUMMYVIEWFACTORY_H
#define ASTROLOGIAN_DUMMYVIEWFACTORY_H
#include "ViewFactory.h"


class DummyViewFactory : public ViewFactory {
public:
    [[nodiscard]] View* getView(VIEW_TYPE type, bool addToSceneTree) const override;

    ~DummyViewFactory() override = default;
};



#endif //ASTROLOGIAN_DUMMYVIEWFACTORY_H
