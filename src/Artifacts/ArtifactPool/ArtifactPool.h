//
// Created by Andy Langer on 4/19/26.
//

#ifndef ASTROLOGIAN_ARTIFACTPOOL_H
#define ASTROLOGIAN_ARTIFACTPOOL_H
#include "../Artifact.h"
#include "../../Exceptions/IllegalArgumentException.h"
#include "../../Util/Random/RandomNumber.h"
#include "../../ViewFactory/ViewFactory.h"

/**
 * Class encapsulating the logic necessary to
 * create and retrieve a random Artifact from all possible Artifacts
 */
class ArtifactPool {
    //Class to retrieve a random number.
    //Needed to select the random Artifact
    RandomNumber& randomNumber;

    //The list of the VIEW_TYPE of every Artifact in the game
    //Needed so we can randomly select an entry in the vector
    std::vector<VIEW_TYPE> artifacts;

    //The ViewFactory. Needed to construct the View for the created
    //Artifact
    const ViewFactory& viewFactory;

    /**
     * Map containing functions that will construct an artifact for the key VIEW_TYPE.
     * The artifact is returned as a unique_ptr
     */
    std::unordered_map<VIEW_TYPE, std::function<std::unique_ptr<Artifact>(const ViewFactory&)>> creators;

    /**
     *Template function to construct a unique_ptr for an Artifact for the given VIEW_TYPE and ArtifactT
     *
     *@param viewType The VIEW_TYPE to create an Artifact for
     *@param viewFactory The ViewFactory
     */
    template<typename ArtifactT, typename ViewT> static std::unique_ptr<Artifact>  getArtifactForViewType(const std::string artifactName, const VIEW_TYPE viewType, const ViewFactory& viewFactory) {
        //Get the View for the given VIEW_TYPE. An Artifact must have a View
        View * view = viewFactory.getView(viewType, false);

        //If view is null, that means an incorrect VIEW_TYPE was supplied
        if (view == nullptr) {
            std::string errorMessage = "Illegal argument for 'getArtifactForViewType. Cannot create artifact with VIEW_TYPE: ";
            errorMessage += viewType;

            throw IllegalArgumentException(errorMessage);
        }

        //Need a dynamic cast here; Artifacts will generally only accept references
        //to View types specific to them. Generic View is generally not allowed
        const auto viewT = dynamic_cast<ViewT*>(view);

        if (viewT == nullptr) {
            //Bad cast. Throw an exception
            std::string errorMessage = "Illegal argument for 'getArtifactForViewType. Cannot cast View for VIEW_TYPE: ";
            errorMessage += viewType;

            throw IllegalArgumentException(errorMessage);
        }

        return std::make_unique<ArtifactT>(artifactName, *viewT);
    }

    /**
     * Get a function that will create an Artifact with type ArtifactT, and return a unique_ptr to it
     * @tparam ArtifactT The type of the Artifact
     * @tparam ViewT  The type of the View used to construct the Artifact. Should match ArtifactT
     * @param type The VIEW_TYPE to create the function for
     * @return the unique_ptr to the Artifact
     */
    template<typename ArtifactT, typename ViewT> static std::function<std::unique_ptr<Artifact>(const ViewFactory&)> getEntry(std::string artifactName, VIEW_TYPE type) {
        return [artifactName, type](const ViewFactory& viewFactory) {
            return getArtifactForViewType<ArtifactT, ViewT>(artifactName, type, viewFactory);
        };
    }

    [[nodiscard]] std::unique_ptr<Artifact> constructArtifactWithType(VIEW_TYPE type) const;

public:
    /**
     * Constructor
     * @param randomNumber The RandomNumber
     * @param viewFactory  The ViewFactory
     */
    ArtifactPool(RandomNumber& randomNumber, const ViewFactory& viewFactory);

    /**
     * Get a unique_ptr to a random Artifact
     * @return the unique_ptr to the created Artifact
     */
    [[nodiscard]] std::unique_ptr<Artifact> getArtifact() const;
};

#endif //ASTROLOGIAN_ARTIFACTPOOL_H
