#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void bug1(void)
{
    int target = 100;
    int *p = & target;

    *p = 10;
    printf("%s: Target is %d\n", __FUNCTION__, target);
}

void bug2(void)
{
    char p[32] = {0};

    strcpy(p, "Hello world\n");

    printf("%s:%s\n", __FUNCTION__, p);

}

void bug3(void)
{
    char *p="Hello world\n";

    printf("%s:%s\n", __FUNCTION__, p);
}

void bug4(void)
{
    char *p="Hello world\n";
    char dst[32];

    strcpy(dst, p);
    printf("%s:%s\n", __FUNCTION__, dst);
}

void bug5(void)
{
    char str[] = {'H','e','l','l','o',' ','W','o','r','l','d','\n', '\0' };
    char str2[64];
    strcpy(str2, str);
    printf("%s:%s\n", __FUNCTION__,str2);
}


