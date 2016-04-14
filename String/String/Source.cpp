#include "My_String.h"
#include <stdio.h>
#include "Vector.h"

int main(){
	{
		//String Empty(NULL);
 		String hello("Hello");
		String hello2("HELLO");
		String bye("Bye not to much stuff to do not ninu");

		String command("Pick item from box");
		//bye= hello;
		//bye += hello;
		hello.clear();
		if (hello.empty())
			printf("Yay empty");
		else
			printf("Not empty");
		
		Vector<int> test;


		Vector<String*> command_token = command.tokemize();


		for (int i = 0; i < 4; i++)
		{
			printf("%s", command_token[i]->get_str());
		}

	 	}
	return 0;
}