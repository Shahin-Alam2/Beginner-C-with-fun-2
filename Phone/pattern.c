#include<stdio.h>
int main()
{
	int n,r,s,c;
	printf("enter the number of rows:\n");
	scanf("%d",&n);
	for(r=1;r<=n;r++){
		for(s=1;s<=n-r;s++){
			printf(" ");
		}
		for(c=1;c<=2*r-1;c++){
			printf("*");
		}
		printf("\n");
	}
		return 0;
	}