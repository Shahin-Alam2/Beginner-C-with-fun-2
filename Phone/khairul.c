#include<stdio.h>
int main()
{
	int i,j,n,a,b,c,d,s=0;
	int x[10000];
	scanf("%d\n",&n);

		for(i=1;i<=n;i++){
		if(i%3!=0){
			x[i]=i;
		
	    if(i+(i+1)+(i+2)==n){
	    printf("%d+%d+%d=%d\n",i,i+1,i+2,n);
		}
		}
		return 0;
		}