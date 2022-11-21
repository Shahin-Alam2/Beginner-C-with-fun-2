#include<stdio.h>
int main()
{
	int i,n;
    printf("Enter a number:(0 to exit)\n");
    	
	for(i=0;;i++){
		scanf("%d",&n);
		if(n==0){
			break;
			}
	printf("%d\n",n);
	printf("Enter another:\n");
	}
	
	return 0;
}