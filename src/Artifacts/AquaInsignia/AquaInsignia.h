//
// Created by Andy Langer on 4/17/26.
//

#ifndef ASTROLOGIAN_AQUAINSIGNIA_H
#define ASTROLOGIAN_AQUAINSIGNIA_H
#include "../Artifact.h"


/**
 *  Artifact implementation that encapsulates the model logic for
 *  the AquaInsignia artifact
 */
class AquaInsignia : public Artifact {
public:
    /**
     * Constructor
     * @param view The engine specific implementation of the view
     */
    explicit AquaInsignia(const ArtifactView& view);

    /** @copydoc Artifact::getName */
    [[nodiscard]] const std::string& getName() const override;

    /**
     *  Test for equality between this artifact and another
     * @return  whether the two artifacts are equal
     */
    bool operator==(const Artifact& other) const override;

    /**
     *  Test whether this artifact and another are not equal
     * @return whether the two artifacts are not equal
     */
    bool operator!=(const Artifact& other) const override;

    /** @copydoc Artifact::getView */
    [[nodiscard]] const ArtifactView& getView() const override;

private:
    // The name of the artifact
    const std::string NAME = "AquaInsignia";

    // The view associated with this artifact
    const ArtifactView& view;
};

#endif //ASTROLOGIAN_AQUAINSIGNIA_H
