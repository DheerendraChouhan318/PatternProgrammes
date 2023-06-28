#include<stdio.h>
int main()
{
     /*Print the following pattern 
    E
    D E
    C D E
    B C D E
    A B C D E*/
    int n=0;
    printf("Enter the number to print pattern");
    scanf("%d",&n);
    for(int row=n;row>=1;row--)
    {
        for(int col=row;col<=n;col++)
        {
            printf("%c ",'A' + col - 1);
        }
        printf("\n");
    }
}