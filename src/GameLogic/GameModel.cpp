//
// Created by Andy Langer on 4/17/26.
//

#include "GameModel.h"

GameModel::GameModel(const ViewFactory& viewFactory) : inventory(viewFactory),  viewFactory(viewFactory), artifactPool(randomNumber, viewFactory) {
}

GameModel::GameModel(const ViewFactory &viewFactory, const int seed) : inventory(viewFactory), viewFactory(viewFactory), randomNumber(seed),  artifactPool(randomNumber, viewFactory) {

}

void GameModel::startGame() {
    /**
     * When the player starts the game, they will be given a random
     * artifact from the ArtifactPool
     */
    std::unique_ptr<Artifact> startingArtifact = artifactPool.getArtifact();

    //TODO. Doc
    inventory.addArtifact(std::move(startingArtifact));
}
