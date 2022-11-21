#include<stdio.h>
int main()
{
	double A,B,MEDIA;
	scanf("%lf%lf",&A,&B);
	MEDIA=((A*3.5)+(B*7.5))%2;
	printf("MEDIA = %lf\n",MEDIA);
	return 0;
}