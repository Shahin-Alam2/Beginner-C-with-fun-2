#include<stdio.h>
int main()
{
	int n,r,c;
	scanf("%d",&n);
	  for (c=n;c>=1;c--){
			//printf("$ ");
	for (r=1;r<=c;r++){
		
		printf("%d ",r);
	}
	printf("\n");
	  }
return 0;
}