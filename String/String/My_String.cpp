#include "My_String.h"
#include <string.h>
#include <stdio.h>

String::String(){
	int len = 5;
	the_string = new char[len + 1];
	max_size = len + 1;
};

String::String(const char* str){
	int len = strlen(str);
	the_string = new char[len+1];
	strcpy_s(the_string, len + 1, str);
	max_size = len + 1;

	printf("String \"%s\" is being constructed.\n", the_string);
};
String::String(const String& str){
	int len = strlen(str.the_string);
	the_string = new char[len + 1];
	strcpy_s(the_string, len + 1, str.the_string);
	max_size = len + 1;

	printf("String \"%s\" is being constructed by copy.\n", the_string);
};

String::~String(){
	printf("String \"%s\" is being destructed.\n", the_string);
	delete[] the_string;
};


unsigned int String::lenght() const{
	return strlen(the_string);
};
unsigned int String::capacity() const{
	return max_size;
};

const char* String::get_str() const{
	return the_string;
};

void String::clear(){
	the_string[0] = '\0';
};

bool String::empty() const{
	return the_string[0] == '\0';
};

bool String::operator==(const String& str) const{
	if (strcmp(the_string, str.the_string) == 0)
		return true;
	else
		return false;
};


void String::operator=(const String &other_str){
	int len = other_str.lenght()+1;
	if (max_size < len) {
		max_size = len;
		delete[] the_string;
		the_string = new char[max_size];
		printf("DELETE/NEW USED\n");
	}
	else{
		printf("NO DELETE/NEW USED AT COPYING\n");
	}
	strcpy_s(the_string, len, other_str.the_string);
};

void String::operator+=(const String &other_str){
	int total_len = lenght() + other_str.lenght();
	int string_end = lenght() + 1;
	
	if (max_size < total_len+1)	{
		max_size = total_len + 1;
		delete[] the_string;
		the_string = new char[max_size];
		printf("Delete/new used at +=\n");
	}
	else{
		printf("Delte/new not used.\n");
	}
};


//tokemize
Vector<String> String::tokemize(){
	Vector<String> ret;
	char* context = nullptr;
	int i = 0;

	printf("Starting string tokenize");
		ret.pushback(String(strtok_s(the_string, " ", &context)));
		i++;
		printf("ended first token");
		while (*context !='\0'){
			i++;
			ret.pushback(String(strtok_s(NULL, " ", &context)));
			printf("%i token done", i);
		}
	return ret;
};

void String::tokenize(Vector<String> &tokens){
	
	char* context = nullptr;
	int i = 0;

	printf("\nStarting string tokenize");
	tokens.pushback(String(strtok_s(the_string, " ", &context)));
	i++;
	printf("\nended first token");
	while (*context != '\0'){
		i++;
		tokens.pushback(String(strtok_s(NULL, " ", &context)));
		printf("\n%i token done", i);
	}
	
};