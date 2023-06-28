#include<stdio.h>
int main()
{/*Printing following pattern 
1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1*/
    int  n=0;
    printf("enter number to run code");
    scanf("%d",&n);
    for (int row=1;row<=n;row++)
    {
        for (int col=1;col<=row;col++)
        {
            printf("%d ",col);
        }
       for(int col=row-1;col>=1;col--)
        {
            printf("%d ",col);
        }
        printf("\n");

    }
}