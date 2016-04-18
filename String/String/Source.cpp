#include "My_String.h"
#include <stdio.h>
#include "Vector.h"
#include "Memleaks.h"

int main(){
	{
		ReportMemoryLeaks();
		//String Empty(NULL);
 		String hello("Hello");
		String hello2("HELLO");
		String bye("Bye not to much stuff to do not ninu");

		String command("Pick a bunch of stuff ");
		//bye= hello;
		//bye += hello;
		hello.clear();
		if (hello.empty())
			printf("Yay empty");
		else
			printf("Not empty");
		/*
		Vector<char*> test;
		
		char i = 4;
		char j = 24;
		char* quatre = &i;
		char* vintiquatre = &j;

		test.pushback(quatre);
			test.pushback(vintiquatre);

*/


		Vector<String> test;

		command.tokenize(test);

		for (int i = 0; i < 5; i++){
			printf("\n String %i: %s", i, test[i].get_str());
		}

		
		
		//Vector<String*> command_token = command.tokenize();
		
		if (test[2] == ("bunch")){
			printf("\n\nit works");
		}

		else
			printf("NOT WORKING");

		printf("================");
		printf("\n\n Reagruping String:");

		for (int i = 2; i <test.size(); i++){
			test[1] += test[i];

		}
		for (int i = 0; i < 5; i++){
			printf("\n String %i: %s", i, test[i].get_str());
		}


	 	}
		
	return 0;
}