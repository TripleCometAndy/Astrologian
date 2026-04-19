//
// Created by Andy Langer on 4/16/26.
//

#ifndef ASTROLOGIAN_CRIMSONBARB_H
#define ASTROLOGIAN_CRIMSONBARB_H
#include "CrimsonBarbView.h"
#include "../Artifact.h"
#include "../../View/View.h"

/**
 *  Artifact implementation that encapsulates the model logic for
 *  the CrimsonBarb artifact
 */
class CrimsonBarb : public Artifact {
public:
    /**
     * Constructor
     * @param crimsonBarbView The engine specific implementation of the view
     */
    explicit CrimsonBarb(const CrimsonBarbView& crimsonBarbView);

    /** @copydoc Artifact::getName */
    [[nodiscard]] const std::string& getName() const override;

    /**
     *  Test for equality between this artifact and another
     * @return  whether the two artifacts are equal
     */
    bool operator==(const Artifact&) const override;

    /**
     *  Test whether this artifact and another are not equal
     * @return whether the two artifacts are not equal
     */
    bool operator!=(const Artifact&) const override;

    /** @copydoc Artifact::getView */
    [[nodiscard]] const View& getView() const override;

private:
    const std::string NAME = "CrimsonBarb";
    const CrimsonBarbView& view;
};



#endif //ASTROLOGIAN_CRIMSONBARB_H
