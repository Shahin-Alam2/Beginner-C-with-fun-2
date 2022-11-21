#include<stdio.h>
int main()
{

    int a,b,c,i,j,k;
    scanf("%d%d%d",&i,&j,&k);
    a=abs(i-j)+abs(j-k);
    b=abs(j-k)+abs(k-i);
    c=abs(k-i)+abs(i-j);
    if(a<b&&a<c)
         printf("%d\n",a);
    else if(b<a&&b<c)
        printf("%d\n",b);
    else if(c<a&&c<b)
        printf("%d\n",c);
        else if(a==b==c)
            printf("0\n");
  return 0;
}
