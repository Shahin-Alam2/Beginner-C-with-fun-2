#include<stdio.h>
#include<string.h>
int main(){
	int i,j,n,count=0;
	char a[1000],tem[50],ar[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",tem);
		strcat(a,tem);
	}
	//puts(a);
	scanf("%s",ar);
	for(i=0;a[i];i++){
		for(j=0;ar[j];j++){
			if(a[i]==ar[j]){
			count++;
			ar[j]='0';
			break;
			}
		}
	}
	
	if(strlen(ar)<strlen(a))
	printf("-1");
	else
	printf("%d\n",strlen(a)-count);
	
	return 0;
}