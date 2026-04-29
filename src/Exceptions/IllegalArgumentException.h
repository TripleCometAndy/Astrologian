//
// Created by Andy Langer on 4/29/26.
//

#ifndef ASTROLOGIAN_NULLPOINTEREXCEPTION_H
#define ASTROLOGIAN_NULLPOINTEREXCEPTION_H
#include <exception>
#include <string>

//TODO. Doc
class IllegalArgumentException : public std::exception {
    //TODO. Document this variable
    const std::string& message;

public:
    //TODO. Doc
    IllegalArgumentException(std::string message);

    //TODO. Doc.
    //TODO. Unit test
    [[nodiscard]] const char* what() const noexcept override;

    //TODO Doc
    //TODO. Unit test
    std::string getMessage() const;
};



#endif //ASTROLOGIAN_NULLPOINTEREXCEPTION_H
