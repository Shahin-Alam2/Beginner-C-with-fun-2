#include<stdio.h>
int main()
{
	int a,s[6]={115,104,97,104,105,110};
	char t[6];
	t[0]=s[0];
	t[1]=s[1];
	t[2]=s[2];
	t[3]=s[3];
	t[4]=s[4];
	t[5]=s[5];
	for(a=0;a<=5;a++){
	printf("%c",t[a]);
	}
	return 0;
	}