#include<stdio.h>
int main()
{
    //int a,p;
    //char p,a;
    struct s{
    char *s,a,p;
    }a={"Ritchie"};*p=a;
    printf("%s",*p.s);
}
