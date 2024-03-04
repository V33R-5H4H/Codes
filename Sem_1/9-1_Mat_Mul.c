//Write a program for multiplication of two matrices.
#include<stdio.h>
void main()
{
    int i,j,x,n=2,a[2][2],b[2][2],ab[2][2];
    printf("Enter Terms for Matrice a : \n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Enter Term %dx%d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
            //printf("%d\n",a[i][j]);
        }
    }
    printf("Enter Terms for Matrice b : \n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Enter Term %dx%d : ",i+1,j+1);
            scanf("%d",&b[i][j]);
            //printf("%d\n",b[i][j]);
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            ab[i][j]=a[i][j]*b[i][j];
        }
        
    }
    printf("Ther Resultant Matrice ab =: \n");
    printf("%d %d\n",ab[0][0],ab[0][1]);
    printf("%d %d\n",ab[1][0],ab[1][1]);
}