#include<stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int* bubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        printf("//ITERATION:%d\n",i+1);
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {swap(&arr[j],&arr[j+1]);}

            printf("Pass:%d\n",j+1);
            for(int i=0;i<n;i++)
            {printf("%d ",arr[i]);}
            printf("\n");
        }
    }
    return arr;
}

int main()
{
    int n;
    printf("Give the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Give the elements:");
    for(int i=0;i<n;i++)
    {scanf("%d",&arr[i]);}

    bubbleSort(arr,n);

    printf("\nSORTED ARRAY:");
    for(int i=0;i<n;i++)
    {printf("%d ",arr[i]);}
    
    return 0;
}