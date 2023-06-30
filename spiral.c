#include <stdio.h>
void spiralMatrix(int m, int n, int a[][n])
{
    int x = 1;
 
    int left= 0, top = 0,right=m,bottom=n;
    while (left < right && top< bottom)
    {
        for (int i = left; i < bottom; ++i)
        {
            a[left][i] = x++;
        }
        left++;
        for (int i = left; i < right; ++i)
        {
            a[i][bottom-1] = x++;
        }
       bottom--;
        if (left < right)
        {
            for (int i = bottom-1; i >= top; --i)
            {
                a[right-1][i] = x++;
            }
            right--;
        }
        if (top < bottom)
        {
            for (int i = right-1; i >= left ; --i)
            {
                 a[i][top] = x++;
            }
            top++;
        }
    }
}
 

int main()
{  int r=0;
     printf("enter the number ");
    scanf("%d",&r);
    int m = r, n = r;
    int p[m][n];
    spiralMatrix(m, n, p);
    for (int i=0; i<m; i++)
    {
       for (int j=0; j<n; j++)
          printf("%d ",p[i][j]);
       printf("\n");
    }
    return 0;
}
