//
// Created by Andy Langer on 4/17/26.
//

#ifndef ASTROLOGIAN_GAMEMODEL_H
#define ASTROLOGIAN_GAMEMODEL_H
#include "../Artifacts/ArtifactPool/ArtifactPool.h"
#include "Inventory.h"
#include "../Util/Random/RandomNumber.h"
#include "../ViewFactory/ViewFactory.h"


class GameModel {
    Inventory inventory;
    const ViewFactory& viewFactory;
    RandomNumber randomNumber;
    ArtifactPool artifactPool;
public:
    explicit GameModel(const ViewFactory& viewFactory);
    GameModel(const ViewFactory& viewFactory, int seed);

    void startGame();
};



#endif //ASTROLOGIAN_GAMEMODEL_H
