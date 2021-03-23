#include <stdio.h>
#define long long int

int main()
{
    int m,n;
    printf("Give the number of rows and coloums of the matrices: ");
    scanf("%d%d",&m,&n);
    int mat1[m][n],mat2[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("For matrix 1,give element (%d,%d): ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("For matrix 2,give element (%d,%d): ",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }
    int sum[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\t");
        if(i==1){printf("+ ");}
        else{printf("  ");}
        for(int j=0;j<n;j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\t");
        if(i==1){printf("= ");}
        else{printf("  ");}
        for(int j=0;j<n;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}