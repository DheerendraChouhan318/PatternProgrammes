#include<stdio.h>
int main()
{    /*Printing the following pattern
    A
    B C
    D E F
    G H I J
    K L M N O*/
     int n=0;
    printf("Enter the number to print pattern");
    scanf("%d",&n);
  
    char c='A';
    for(int row=1;row<n;row++)
    {
        for(int col=0;col<row;col++)
        {
            printf("%c ",c);
            c++;
        }
        printf("\n");
    }
    
}