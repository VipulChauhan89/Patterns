/*
    E 
    D E
    C D E
    B C D E 
    A B C D E
*/
#include<iostream>
using namespace std;

int  main()
{
    int N;
    cout<<"Enter the value of N between 1 to 26 : ";
    cin>>N;
    if(N<=0 || N>26)
    {
        cout<<"You did not entered the right value of N.";
        return 0;
    }
    for(int i=0;i<N;i++)
    {
        int k=64+N;
        k-=i;
        for(int j=0;j<=i;j++)
        {
            cout<<(char)k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}