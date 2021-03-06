#ifndef __STRING_H__
#define __STRING_H__

#include <string.h>
#include "Vector.h"

class String{
private:
	char* the_string = nullptr;
	unsigned int max_size;

public:
	String();
	String(const char* str);
	String(const String& str);
	~String();

	unsigned int lenght() const;
	unsigned int capacity() const;
	const char* get_str() const;
	void clear();
	bool empty() const;
	bool operator == (const String& str) const;
	void operator=(const String &other_str);
	void operator+=(const String &other_str);

	//operator + Operador constant el membres de la suma no es modifiquen
	//char* operator+(const String &string_1, const String &string_2);

	Vector<String> tokemize();
	void tokenize(Vector<String> &tokens);
};
#endif // !__STRING_H__