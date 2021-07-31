// https://www.hackerrank.com/challenges/30-conditional-statements/problem?h_r=profile
#include<iostream>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    if(n%2==0)
    {
        if(2<=n&& n<=5) flag=0;
        else if(6<=n && n<=20) flag=1;
        else if(n>20) flag=0;
    } 
    else flag=1;
    if(flag==1) cout<<"Weird"<<endl;
    else if(flag==0) cout<<"Not Weird"<<endl;
    
    return 0;

}