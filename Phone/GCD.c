#include<stdio.h>
int main()
{
	int a,b,x,g;
	scanf("%d%d",&a,&b);
	if(a==0)
		g=b;
		else if(b==0)
			g=a;
	else{
		while(b!=0){
		 x=b;
		 b=a%b;
		 a=x;}
		 g=a;
	}
	printf("GCD=%d",g);
	return 0;
}