#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Give the order of the square matrix: ";
    cin>>n;

    int mat[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Give the element at position ("<<i+1<<","<<j+1<<"):";
            cin>>mat[i][j];
        }
    }
    cout<<"Given matrix is:"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int temp=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;
        }
    }
    
    cout<<"Transpose matrix is:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}