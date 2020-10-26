#include "String.h"

using namespace std;

String::String()
{
	sentence = new char[1];
	sentence[0] = '\0';
}

String::String(const char* newSentence)
{
	int length = 0;
	while (newSentence[length] != '\0') ++length;
	++length;

	sentence = new char[length];

	for (int i = 0; i <= length; ++i) sentence[i] = newSentence[i];
		
	sentence[length] = '\0';
		
}

String::String(const String& anotherString)
{
	sentence = anotherString.sentence;
}

String::String(String&& anotherString)
{
	sentence = anotherString.sentence;
	anotherString.sentence = nullptr;
}

int String::length() const
{
	int length = 0;
	while (sentence[length] != '\0') ++length;

	return length;
}

void String::clear()
{
	delete sentence;
	sentence = new char[1];
	sentence[0] = '\0';
}

String String::operator+(const String& anotherString)
{
	int size = length() + anotherString.length() + 1;
	char* combinedSentences = new char[size];

	int i = 0;

	while(sentence[i] != '\0')
	{
		combinedSentences[i] = sentence[i];
		++i;
	}

	int j = 0;

	while (anotherString.sentence[j] != '\0')
	{
		combinedSentences[i] = anotherString.sentence[j];
		++i;
		++j;
	}
	combinedSentences[i] = '\0';
	return String(combinedSentences);

}

bool String::operator==(const String& anotherString)
{
	int i = 0;
	while (anotherString.sentence[i] != '\0')
	{
		if (sentence[i] != anotherString.sentence[i]) return false;
		++i;
	}
	return true;
}
