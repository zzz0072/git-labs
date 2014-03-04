#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void bug1(void)
{
    //~"~
    int *p = 1000;

    *p = 10;
    printf("%s: %d\n", __FUNCTION__, *p);
}

void bug2(void)
{
    char *p;

    strcpy(p, "Hello world\n");

    printf("%s:%s\n", __FUNCTION__, p);

}

void bug3(void)
{
    char *p="Hello world\n";

    free(p);
    printf("%s:%s\n", __FUNCTION__, p);
}

void bug4(void)
{
    char *p="Hello world\n";
    char dst[4];

    strcpy(dst, p);
    printf("%s:%s\n", __FUNCTION__, dst);
}

void bug5(void)
{
    char str = {'H','e','l','l','o',' ','W','o','r','l','d','\n' };
    char str2[64];
    strcpy(str2, str);
    printf("%s:%s\n", __FUNCTION__,str2);
}


