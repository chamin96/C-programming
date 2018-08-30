#include <stdio.h>

//global variable
int global_var;

void number_print()
{
	//local variable
	printf("global variable = %d\n", global_var);
}

int main(){
	//local variable
	int local_var;
	printf("global variable = %d\n", global_var);
	printf("local variable = %d\n", local_var);

	return 0;
}