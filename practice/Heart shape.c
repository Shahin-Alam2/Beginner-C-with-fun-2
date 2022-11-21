#include<stdio.h>
int main()
{
    int row,col;

    for(row=1;row<=6;row++){
        for(col=1;col<=7;col++){
            if((row==0&&col%3!=0)||(row==1&&col%3==0)||(row-col==2)||(row+col==8)){
                printf("*",col);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
