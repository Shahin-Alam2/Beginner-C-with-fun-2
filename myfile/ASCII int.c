#include<stdio.h>
int main()
{
    int i,a[8]={77,90,84,88,68,93,75,83};
    char b[8];
    for(i=0;i<7;i++){
        b[i]=a[i];
        printf("%c",b[i]);
    }
   return 0;
}
