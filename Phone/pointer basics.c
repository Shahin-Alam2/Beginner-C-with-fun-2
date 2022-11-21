#include<stdio.h>
int main()
{
	int a,b,*x,*y;
	scanf("%d%d",&a,&b);
	   x=&a;
	   y=&b;
	  printf("sum = %d\n",*x+*y);
return 0;
}