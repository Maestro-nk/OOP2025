#include "String.h"

String::String() : value("") {}
String::String(const string& val) : value(val) {}
String::String(const String& other) : value(other.value) {}

int String::length() const {
	return value.length();
}

std::string String::getValue() const {
	return value;
}