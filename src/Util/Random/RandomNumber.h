//
// Created by Andy Langer on 4/19/26.
//

#ifndef ASTROLOGIAN_RANDOMNUMBER_H
#define ASTROLOGIAN_RANDOMNUMBER_H

#include <random>

class RandomNumber {
    std::mt19937 seed;

    static std::mt19937 generateRandomSeed();
    static std::mt19937 generateSeed(int integerSeed);

public:
    RandomNumber();
    explicit RandomNumber(int integerSeed);

    unsigned long getNumInRange(unsigned long min, unsigned long max);
};



#endif //ASTROLOGIAN_RANDOMNUMBER_H
