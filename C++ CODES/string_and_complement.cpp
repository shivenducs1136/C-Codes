// https://www.hackerrank.com/challenges/c-tutorial-strings/problem
#include<iostream>
#include<string>
using namespace std;
int main()
{
    char a1,a2;   int i;
    string a;
    cin>>a;
    string b;
    cin>>b;
    int l1,l2;
    l1=a.length();
    l2=b.length();
    cout<<l1<<" "<<l2<<endl;
    cout<<a<<b<<endl;
 
    for(i=0;i<l1;i++)
    {
        if(i==0)
        {
            a1=a[i];
            a[i]=b[i];
            b[i]=a1;
        }
    }
    cout<<a<<" "<<b<<endl;
    return 0; 
}