#include <string>
using namespace std;

class String {
protected: 
	string value;

public:
	String();
	String(const string& val);
	String(const String& other);

	int length() const;
	string getValue() const;
};