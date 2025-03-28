#ifndef CUSTOM_STRING_H
#define CUSTOM_STRING_H

#include <iostream>
#include <string>

class CustomString {
private:
    std::string value;

public:
    CustomString();
    CustomString(const std::string& val);
    CustomString(const CustomString& other);
    ~CustomString();

    int length() const;
    std::string getValue() const;

    CustomString operator+(const CustomString& other) const;
    CustomString operator*(int times) const;
};

#endif
