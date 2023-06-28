#include<stdio.h>
int main()
{
        /*printing the following pattern
    1
    2 3 2
    3 4 5 4 3
    4 5 6 7 6 5 4
    5 6 7 8 9 8 7 6 5
    */
   int x=0,n=0;
   printf("Enter the number to see pattern");
   scanf("%d",&n);
for(int row=1;row<=n;row++)
    {    
        for(int col=row;col<=row+row-1;col++){
            printf("%d ",col);
        }
        for(int col=x;col>=row;col--)
        {
            printf("%d ",col);
        }
        x=x+2;
    printf("\n");
    }
    
}