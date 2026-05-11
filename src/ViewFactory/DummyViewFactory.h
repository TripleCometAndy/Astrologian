//
// Created by Andy Langer on 4/19/26.
//

#ifndef ASTROLOGIAN_DUMMYVIEWFACTORY_H
#define ASTROLOGIAN_DUMMYVIEWFACTORY_H
#include "ViewFactory.h"

/**
 *  Dummy implementation of ViewFactory. Used only in testing
 */
class DummyViewFactory : public ViewFactory {
public:
    /** @copydoc ViewFactory::getView */
    [[nodiscard]] View* getView(VIEW_TYPE type, bool addToSceneTree) const override;

    ~DummyViewFactory() override = default;
};



#endif //ASTROLOGIAN_DUMMYVIEWFACTORY_H
