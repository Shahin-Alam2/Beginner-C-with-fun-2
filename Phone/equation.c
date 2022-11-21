#include<stdio.h>
int main()
{
	 float a1,b1,c1,a2,b2,c2,d,x,y;
        printf("a1x+b1y=c1\n");
        printf("a2x+b2y=c2\n");	 	 scanf("%f%f%f%f%f%f",&a1,&b1,&c1,&a2,&b2,&c2);
	 	 d=(a1*b2-a2*b1);
if(d==0){
	       printf("x,y can not be determined.\n");
} 
  else{
    x=(b2*c1-b1*c2)/d;
    y=(c2*a1-c1*a2)/d;
        printf("x = %0.2f\n",x);
        printf("y = %0.2f\n",y);
  }
	 return 0;
}