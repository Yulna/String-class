#include "My_String.h"
#include <stdio.h>

int main(){
	{
		//String Empty(NULL);
 		String hello("Hello");
		String hello2("HELLO");
		String bye("Bye not to much stuff to do not ninu");
		//bye= hello;
		//bye += hello;
		if (hello == hello2)
			printf("Yay son iguals");
		else
			printf("Not equal");
		
	 	}

	return 0;
}