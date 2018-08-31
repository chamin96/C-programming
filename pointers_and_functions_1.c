#include <stdio.h>

void getValue(int *ptr)
{
	*ptr = 1000; //assign value to the passed variable
}

int arraySum(int *p_arr, int size){
	int sum=0;

	for (int i = 0; i < size; ++i)
	{
		sum += p_arr[i];
	}

	return sum;
}

int main(){

	int var;
	getValue(&var);

	printf("%d\n", var);

	int arr[4]={10,20,30,40};
	printf("%d\n", arraySum(arr,4));

	return 0;
}