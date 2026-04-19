//
// Created by Andy Langer on 4/19/26.
//

#include "RandomNumber.h"

RandomNumber::RandomNumber() : seed(generateRandomSeed()) {

}

RandomNumber::RandomNumber(const int integerSeed) : seed(generateSeed(integerSeed)) {

}

std::mt19937 RandomNumber::generateRandomSeed() {
    std::random_device rd;

    std::mt19937 gen(rd());

    return gen;
}

std::mt19937 RandomNumber::generateSeed(const int seed) {
    std::random_device rd;

    std::mt19937 gen(seed);

    return gen;
}

int RandomNumber::getNumInRange(const unsigned long min, const unsigned long max) {
    std::uniform_int_distribution<> distr(min, max);

    return distr(seed);
}
