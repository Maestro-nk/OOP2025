#include "AlphaString.h"
#include <algorithm>

AlphaString::AlphaString() : String() {}

AlphaString::AlphaString(const std::string& val) : String(val) {
    if (!isAlpha()) {
        value = "";
    }
}

AlphaString::AlphaString(const AlphaString& other) : String(other) {}

void AlphaString::shiftRight() {
    if (value.empty()) return;
    char last = value.back();
    value.pop_back();
    value = last + value;
}

bool AlphaString::isAlpha() const {
    return std::all_of(value.begin(), value.end(), [](char c) {
        return std::isalpha(c);
        });
}