#include<stdio.h>
int main()
{
	int i,n,s=0;
	scanf("%d",&n);
	if(n%2==0){
		for(i=0;i<=n;i=i+2){
			s=s+i;
		}}
	else{
	for(i=1;i<=n;i=i+2){
		s=s+i;
	}}
	printf("summation = %d",s);
	return 0;
}