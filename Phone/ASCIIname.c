#include<stdio.h>
int main()
{
	int a,s[6]={83,72,65,72,73,78};
	char t[6];
	for(a=0;a<=5;a++){
	 t[a]=s[a];
		printf("%c",t[a]);
	}
	return 0;
}