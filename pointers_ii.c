#include <stdio.h>

int main()
{
    double  var =20.0455;
    double *ip;


    ip = &var;

    printf("Address of var variable: %x\n", &var);

    printf("address stored in ip variable: %x\n", ip);

    printf("address of ip variable: %x\n", &ip);

    printf("value of *ip variable: %f\n", *ip);

    printf("size of var: %d bytes\n", sizeof(var));

    printf("size of ip: %d bytes\n", sizeof(ip));

    return 0;

}
