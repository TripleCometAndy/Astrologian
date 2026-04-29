//
// Created by Andy Langer on 4/19/26.
//

#ifndef ASTROLOGIAN_ARTIFACTPOOL_H
#define ASTROLOGIAN_ARTIFACTPOOL_H
#include "../Artifact.h"
#include "../../Util/Random/RandomNumber.h"
#include "../../ViewFactory/ViewFactory.h"

//TODO. Doc
class ArtifactPool {
    //TODO. Document these variables
    RandomNumber& randomNumber;
    std::vector<VIEW_TYPE> artifacts;
    const ViewFactory& viewFactory;
    std::unordered_map<VIEW_TYPE, std::function<std::unique_ptr<Artifact>(const ViewFactory&)>> creators;

    //TODO. Doc
    //TODO. Rename
    template<typename ArtifactT, typename ViewT> static std::unique_ptr<Artifact>  foo(const VIEW_TYPE viewType, const ViewFactory& viewFactory) {
        //TODO. Explain what this method is doing
        //TODO. Confusing name
        View * v = viewFactory.getView(viewType, false);

        //TODO. Confusing Name
        const auto v2 = dynamic_cast<ViewT*>(v);

        return std::make_unique<ArtifactT>(*v2);
    }

    //TODO. Doc
    template<typename ArtifactT, typename ViewT> static std::function<std::unique_ptr<Artifact>(const ViewFactory&)> getEntry(VIEW_TYPE type) {
        //TODO. Explain what this method is doing and why
        //TODO. Confusing name vf
        return [type](const ViewFactory& vf) {
            return foo<ArtifactT, ViewT>(type, vf);
        };
    }

public:
    //TODO. Doc
    ArtifactPool(RandomNumber& randomNumber, const ViewFactory& viewFactory);

    //TODO. Doc
    [[nodiscard]] std::unique_ptr<Artifact> getArtifact() const;
};



#endif //ASTROLOGIAN_ARTIFACTPOOL_H
