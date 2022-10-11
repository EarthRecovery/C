#include <stdio.h>
#include <stdlib.h>

int change1()
{
    char cinput3, cinput4;

    cinput3 = getchar();

    printf("character 1 is %c\n", cinput3);

    cinput4 = getchar(); 
    cinput4 = getchar(); 

    printf("character 2 is %c\n", cinput4);

    return 0;

}
