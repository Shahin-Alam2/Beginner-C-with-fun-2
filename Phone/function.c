#include<stdio.h>
void f1();
void f2();
void f3();
int main(){
	f1();
	printf("country");
}
void f1()
{
	f2();
	printf("my ");
}
void f2()
{
	f3();
	printf("love ");
}
void f3()
{
	printf("I ");
}