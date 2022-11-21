#include<stdio.h>

double sqrt(double x,double y);

int main()
{
    double a,b,c;
    scanf("%lf%lf",&a,&b);
    c=sqrt(a,b);
    printf("Sum: %lf+%lf=%0.2lf\n",a,b,c);

    return 0;
}
    double sqrt(double x,double y)
    {
        double s=x+y;
        return s;
    }
