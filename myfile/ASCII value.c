#include<stdio.h>
int main()
{
    int a[6]={83,72,65,72,73,78},i;
    char b[6];

    for(i=0;i<6;i++)
        {
    b[i]=a[i];
    printf("%c",b[i]);
    }
return 0;
}
