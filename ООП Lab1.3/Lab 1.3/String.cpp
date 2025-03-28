#include "String.h"

CustomString::CustomString() : value("") {}

CustomString::CustomString(const std::string& val) : value(val) {}

CustomString::CustomString(const CustomString& other) : value(other.value) {}

CustomString::~CustomString() {}

int CustomString::length() const {
    return value.length();
}

std::string CustomString::getValue() const {
    return value;
}

CustomString CustomString::operator+(const CustomString& other) const {
    return CustomString(value + other.value);
}

CustomString CustomString::operator*(int times) const {
    std::string result;
    for (int i = 0; i < times; i++) {
        result += value;
    }
    return CustomString(result);
}