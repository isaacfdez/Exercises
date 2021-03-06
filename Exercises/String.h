#pragma once
#include <iostream>

class String
{
public:

	char* sentence;

	String();
	String(const char* newSentence);
	String(const String& anotherString);
	String(String&& anotherString);

	int length() const;
	void clear();

	String operator+(const String& anotherString);
	bool operator==(const String& anotherString);

};

