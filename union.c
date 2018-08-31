#include <stdio.h>


union myUnion{
	int var;
	char c;
};

int main(){
	union myUnion union_1;

	union_1.var=5;
	union_1.c = 8;

	printf("%d\n", union_1.var);


	return 0;
}