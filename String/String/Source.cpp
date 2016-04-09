#include "My_String.h"
#include <stdio.h>

int main(){
	{
		//String Empty(NULL);
 		String hello("Hello");
		String bye("Bye not to much stuff to do not ninu");
		bye= hello;
		bye += hello;
 	}

	return 0;
}