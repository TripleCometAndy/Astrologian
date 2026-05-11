//
// Created by Andy Langer on 4/16/26.
//

#ifndef ASTROLOGIAN_ARTIFACT_H
#define ASTROLOGIAN_ARTIFACT_H
#include <string>

#include "ArtifactView.h"
#include "../View/View.h"


class Artifact {
    const std::string NAME;

    const ArtifactView& view;

public:
    Artifact(std::string name, const ArtifactView& view);

    /**
     * Destructor
     */
    ~Artifact() = default;

    /**
     * Get the name of this artifact
     * @return the name of this artifact
     */
    [[nodiscard]] const std::string& getName() const;

    /**
     *  Test for equality between this artifact and another
     * @return  whether the two artifacts are equal
     */
    bool operator==(const Artifact&) const;

    /**
     *  Test whether this artifact and another are not equal
     * @return whether the two artifacts are not equal
     */
    bool operator!=(const Artifact&) const;

    /**
     *  Get the view associated with this artifact
     * @return the view associated with this artifact
     */
    [[nodiscard]] const ArtifactView& getView() const;
};

#endif //ASTROLOGIAN_ARTIFACT_H
