//
// Created by Andy Langer on 4/29/26.
//

#include "IllegalArgumentException.h"

IllegalArgumentException::IllegalArgumentException(std::string message) : message(message) {

}

const char * IllegalArgumentException::what() const noexcept {
    return "A IllegalArgumentException has occurred!";
}

std::string IllegalArgumentException::getMessage() const {
    return message;
}
