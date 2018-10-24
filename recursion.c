#include <stdio.h>
/* finding and returning the minimum of the two arguments passed */
int sumSq1(int x, int y){
    if(x==y)
        return x*x;
    else
        return x*x + sumSq1(x+1,y);
}

int sumSq2(int x, int y){
    if(x==y){
        return y*y;
    } else
        return y*y + sumSq2(x,y-1);
}

int sumSq3(int x, int y){
    int mid;

    if (x==y)
        return x*x;
    else {
        mid = (x + y) / 2;
        return sumSq3(x,mid) + sumSq3(mid+1,y);
    }
}

int countValue(int val, int arr[], int size){
    if (size==0)
        return 0;
    else
        return (val==arr[size-1]) + (countValue(val,arr,size-1));
}

int main(){
    int p=5;
    int array[10]={1,2,3,2,5,2,6,9,10,2};
    printf("%d\n", sumSq1(p,10));
    printf("%d\n", sumSq2(p,10));
    printf("%d\n", sumSq3(p,10));
    printf("%d\n", countValue(2,array,10));
    return 0;
}