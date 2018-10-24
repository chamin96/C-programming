/* --Special thanks go to @Ina for valuable suggestions to develop this code.--
uint64_t type is used to define a variable of 8 bytes sized and the corresponding header is stdint.h */

#include <stdio.h>
#include <stdint.h>

typedef unsigned long long uint64_t;
uint64_t factorial(int x);

int main() {
    int x;
    uint64_t f;
    
    scanf("%d", &x);
    
    f=factorial(x);
    printf("%d! = %llu\n", x,f);
    
    if(f%10==0){
        int count=0;
        uint64_t k=f;
        while(k%10==0){
            k=k/10;
            count++;
        }
        printf("%llu has %d trailing zeros.\n", f,count);
    }
    else{
            printf("There are no trailing zeros in %llu\n", f);
        }
    
    return 0;
}

uint64_t  factorial(int x){
    uint64_t f=1;
    if(x==0){
        return f;
    }
    else {
        while(x>0){
            f*=x;
            x--;
        }
        return f;
    }
}