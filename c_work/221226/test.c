#include<stdio.h>

int main()
{
    int arr[3][2]={{1,2},{3,4},{5}};
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("arr[%d][%d]=%d",i,j,arr[i][j]);
        }
        printf("\n");
    }
}