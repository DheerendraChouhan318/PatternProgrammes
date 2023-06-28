#include<stdio.h>
int main()
{  /*Printing follwing pattern
 1
 1 2
 1 2 3
 1 2 3 4
*/
    int n=0;
    printf("Enter the number to print pattern");
    scanf("%d",&n);
  
for (int row=1;row<n;row++)
    {
        for(int col=1;col<=row;col++)
        {
            printf("%d ",col);
        }
    printf("\n");
    }
}