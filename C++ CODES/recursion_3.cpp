// https://www.hackerrank.com/challenges/30-recursion/problem?h_r=profile
#include<iostream>
using namespace std;
int rec(int n)
{
    if (n==1)
    {
        return 1;
    }
    else 
    {
        return (n*rec(n-1));
    }
}
int main()
{
    int n;
    cin>>n;
    if(n>1)
    cout<<rec(n)<<endl;
    else
    cout<<"1"<<endl;


    return 0;
}