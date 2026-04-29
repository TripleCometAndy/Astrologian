//
// Created by Andy Langer on 4/19/26.
//

#ifndef ASTROLOGIAN_DUMMYVIEWFACTORY_H
#define ASTROLOGIAN_DUMMYVIEWFACTORY_H
#include "ViewFactory.h"

//TODO. Doc
class DummyViewFactory : public ViewFactory {
public:
    //TODO. Doc
    [[nodiscard]] View* getView(VIEW_TYPE type, bool addToSceneTree) const override;

    //TODO. Doc
    ~DummyViewFactory() override = default;
};



#endif //ASTROLOGIAN_DUMMYVIEWFACTORY_H
