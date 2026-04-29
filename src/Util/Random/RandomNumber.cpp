//
// Created by Andy Langer on 4/19/26.
//

#include "RandomNumber.h"

RandomNumber::RandomNumber() : seed(generateRandomSeed()) {

}

RandomNumber::RandomNumber(const int integerSeed) : seed(generateSeed(integerSeed)) {

}

std::mt19937 RandomNumber::generateRandomSeed() {
    //TODO. What is this doing. Why?
    std::random_device rd;
    const std::mt19937 gen(rd());

    return gen;
}

std::mt19937 RandomNumber::generateSeed(const int integerSeed) {
    //TODO. What is this doing. Why?
    std::random_device rd;
    const std::mt19937 gen(integerSeed);

    return gen;
}

unsigned long RandomNumber::getNumInRange(const unsigned long min, const unsigned long max) {
    //TODO. What is this doing? Why?
    std::uniform_int_distribution<> distr(min, max);

    return distr(seed);
}