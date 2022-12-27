#include<stdio.h>

int main()
{
    int arra[2][4]={{1,2,3,4},{5,6,7,8}};
    // int arrb[4][2];

    for(int i=0;i<sizeof(arra)/sizeof(arra[0]);i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("arra[%d][%d]=%d",i,j,arra[i][j]);
        }
        printf("\n");
    }
    int *ptr=NULL;
    // ptr=&arra[0][0];

}