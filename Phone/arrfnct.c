#include<stdio.h>

int main()
{
	int i,avg;
	int num[10];
	for (i=0;i<10;i++){
		scanf("%d",&num[i]);
		 avg=f1(num[]);
	printf("average %d\n",avg);
return 0;
}
	int f1(int num[]){
	int avg;
	int sum=0,i,count=0;
	  for (i=0;i<10;i++){
	  	sum=sum+num[i];
	  	count=count+1;
	  }
	  avg=sum/count;
	return avg;
}