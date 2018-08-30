#include <stdio.h>

int arrSum(int array[], int size)
{
	int sum=0;
	for (int i = 0; i < size; ++i)
	{
		sum+=array[i];
	}
	return sum;

}

int main(){

	int arr[4]={10,20,30,40};

	printf("Array sum is %d\n", arrSum(arr,4));

	return 0;
}