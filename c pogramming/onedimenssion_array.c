#include<stdio.h>
int main()
{
    int a[4]= {5,10,20,25};
    a[0]=2;
    printf("Print the array element: ");
    for(int i =0; i<4; i++)
    {

        printf("%d ",a[i]);


    }
    printf("\n");
    printf("access the second element in the array :%d \n",a[1]);

}
