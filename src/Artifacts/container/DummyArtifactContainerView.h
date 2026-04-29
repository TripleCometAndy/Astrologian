//
// Created by Andy Langer on 4/26/26.
//

#ifndef ASTROLOGIAN_DUMMYARTIFACTCONTAINERVIEW_H
#define ASTROLOGIAN_DUMMYARTIFACTCONTAINERVIEW_H
#include "ArtifactContainerView.h"

//TODO. Doc
class DummyArtifactContainerView : public ArtifactContainerView {
public:
    //TODO. Doc
    void addArtifact(const View& artifact) override;
};



#endif //ASTROLOGIAN_DUMMYARTIFACTCONTAINERVIEW_H
