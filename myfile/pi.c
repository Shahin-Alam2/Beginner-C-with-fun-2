#include<stdio.h>
double pi=3.1416; /* it is a global variable */
void myfn(){
   pi=3.14;  /* it is a local variable */
   return;   /* as its return type 'void' no need to write anything after return */
}
int main(){

    printf("%lf\n",pi);
    myfn();
    printf("%lf\n",pi);

    return 0;
}
