//
// Created by Andy Langer on 4/16/26.
//

#ifndef ASTROLOGIAN_ARTIFACT_H
#define ASTROLOGIAN_ARTIFACT_H
#include <string>
#include "../View/View.h"


class Artifact {
public:
    /**
     * Destructor
     */
    virtual ~Artifact() = default;

    /**
     * Get the name of this artifact
     * @return the name of this artifact
     */
    [[nodiscard]] virtual  const std::string& getName() const = 0;

    /**
     *  Test for equality between this artifact and another
     * @return  whether the two artifacts are equal
     */
    virtual bool operator==(const Artifact&) const = 0;

    /**
     *  Test whether this artifact and another are not equal
     * @return whether the two artifacts are not equal
     */
    virtual bool operator!=(const Artifact&) const = 0;

    /**
     *  Get the view associated with this artifact
     * @return the view associated with this artifact
     */
    [[nodiscard]] virtual const View& getView() const = 0;
};

#endif //ASTROLOGIAN_ARTIFACT_H
