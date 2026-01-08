#include<stdio.h>
void main()
{
    int a[2][3];
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<3; j++)
        {
            printf("Enter the element of a [%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n matrix is :\n");
    for(int i = 0; i<2; i++)
    {
        printf("\n");
        for(int j = 0; j<3; j++)
        {
            printf("3%d ",a[i][j]);
        }
    }

    return 0;
}
