#include<stdio.h>
int main()
{
    int m,n,i,j,k,l,o,p;
    int a[100][100];
    int b[100][100];
    int c[100][100];
    printf("enter the number of rows\n");
    scanf("%d",&m);
    printf("enter the number of coulmns\n");
    scanf("%d",&n);
    printf("input first matrix\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("input second matrix\n");
    for (k=0;k<m;k++)
    {
        for (l=0;l<n;l++)
        {
            scanf("%d",&b[k][l]);
        }
    }
    for (o=0;o<m;o++)
    {
        for (p=0;p<n;p++)
        {
            c[o][p] = a[o][p] + b[o][p];
        }
    }
    printf("thesum of the two matrices is \n");
    for (o=0;o<m;o++)
    {
        for (p=0;p<n;p++)
        {
            printf("%d  ",c[o][p]);
        }
        printf("\n");
    }
}