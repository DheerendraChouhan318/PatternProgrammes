#include<stdio.h>
int main()
{
    /*Printing pattern for value n=4 "
    1
    2 2
    3 3 3 
    4 4 4 4
    */
    int n=0;
    printf("Enter Number to print the pattern");
    scanf("%d",&n);           
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++){
            printf("%d ",row);
        }
    printf("\n");
    }
    return 1;
}