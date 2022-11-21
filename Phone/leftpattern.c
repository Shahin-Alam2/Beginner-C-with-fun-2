 #include<stdio.h>
int main()
{
	int i,j,m,n,k;
	scanf("%d",&n);
	m=n;
	for (i=1;i<=n;i++,m--){
		for (j=1;j<m;j++){
			printf("  ");
		}
		for (k=1;k<=(2*i-1);k++){
			printf("$");	
	}
	printf("\n");
	}
	return 0;
}