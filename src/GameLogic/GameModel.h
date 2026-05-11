//
// Created by Andy Langer on 4/17/26.
//

#ifndef ASTROLOGIAN_GAMEMODEL_H
#define ASTROLOGIAN_GAMEMODEL_H
#include "../Artifacts/ArtifactPool/ArtifactPool.h"
#include "Inventory.h"
#include "../Util/Random/RandomNumber.h"
#include "../ViewFactory/ViewFactory.h"

//TODO. Doc
class GameModel {
    //TODO. Document this variable
    Inventory inventory;

    //TODO. Document this variable
    const ViewFactory& viewFactory;

    //TODO. Document this variable
    RandomNumber randomNumber;

    //TODO. Document this variable
    ArtifactPool artifactPool;
public:
    //TODO. Doc
    explicit GameModel(const ViewFactory& viewFactory);

    //TODO. Doc
    GameModel(const ViewFactory& viewFactory, int seed);

    //TODO. Doc
    void startGame();
};



#endif //ASTROLOGIAN_GAMEMODEL_H
