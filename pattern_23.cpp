/*
    Bonus Pattern 
    1   2   3   4   5
    16  17  18  19  6
    15  24  25  20  7
    14  23  22  21  8
    13  12  11  10  9
*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int N;
    cout<<"Enter the value of N : ";
    cin>>N;
    vector<vector<int>> v(N,vector<int>(N,0));
    int t=0,b=N-1,l=0,r=N-1,count=1;
    while(t<=b && l<=r)
    {
        for(int i=l;i<=r;i++)
        {
            v[t][i]=count++;
        }
        t++;
        for(int i=t;i<=b;i++)
        {
            v[i][r]=count++;
        }
        r--;
        if(t<=b)
        {
            for(int i=r;i>=l;i--)
            {
                v[b][i]=count++;
            }
            b--;
        }
        if(l<=r)
        {
            for(int i=b;i>=t;i--)
            {
                v[i][l]=count++;
            }
            l++;
        }
    }
    // Printing the spiral matrix
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}