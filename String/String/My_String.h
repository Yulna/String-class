#ifndef __STRING_H__
#define __STRING_H__

#include <string.h>

class String{
private:
	char* the_string = nullptr;
	unsigned int max_size;

public:
	String(const char* str);
	String(const String& str);
	~String();

	unsigned int lenght() const;
	unsigned int capacity() const;
	const char* c_str() const;
	bool empty() const;
	bool operator == (const String& str) const;

	//TODO
	//Operator =
	//operator += (afegeix a la dreta) hello+="bye"   Es modificquen els operadors
	//operator + Operador constant el membres de la suma no es modifiquen
	
	void operator=(const String &other_str);
	void operator+=(const String &other_str);
	//char* operator+(const String &string_1, const String &string_2);
};
#endif // !__STRING_H__