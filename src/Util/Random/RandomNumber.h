//
// Created by Andy Langer on 4/19/26.
//

#ifndef ASTROLOGIAN_RANDOMNUMBER_H
#define ASTROLOGIAN_RANDOMNUMBER_H

#include <random>

//TODO. Doc
class RandomNumber {
    //TODO. Document variable
    std::mt19937 seed;

    //TODO. Doc
    static std::mt19937 generateRandomSeed();

    //TODO. Doc
    static std::mt19937 generateSeed(int integerSeed);

public:
    //TODO. Doc
    RandomNumber();

    //TODO. Doc
    explicit RandomNumber(int integerSeed);

    //TODO. Doc
    unsigned long getNumInRange(unsigned long min, unsigned long max);
};

#endif //ASTROLOGIAN_RANDOMNUMBER_H
