#pragma once
#include <iostream>

class String
{
public:
	String();
	String(const char* newSentence);
	String(const String& anotherString);
	String(String&& anotherString);

	const int length();
	void clear();

	String operator+(const String& anotherString);
	String operator==(const String& anotherString);

private:
	char* sentence;
};

