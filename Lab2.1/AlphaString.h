#include "String.h"
#include <string>

class AlphaString : public String {
public:
    AlphaString();
    AlphaString(const std::string& val);
    AlphaString(const AlphaString& other);

    void shiftRight();

private:
    bool isAlpha() const;
};
