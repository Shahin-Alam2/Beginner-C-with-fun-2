#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	int i,sum=0,count=0;
	printf("Enter a text:\n");
	gets(str);
	  for (i=0;i<=strlen(str);i++){
	  	 str[i]=(int)str[i];
	  	 sum=sum+str[i];
	  }
	  for (i=2;i<=sum/2;i++){
	  	if (sum%i==0)
	  	count=count+1;
	  }
	  if (count==0)
	         printf("Its ASCII value %d is a\t Prime number",sum);
	      else
	      printf("Its ASCII value %d is\t Not prime",sum);
  return 0;
}