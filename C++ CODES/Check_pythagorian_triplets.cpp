#include<iostream>
using namespace std;
int pytha(int a,int b,int c)
{
    if(a*a+b*b==c*c)
    return 1;
    else return 0;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(pytha(a,b,c)==1)
    cout<<"Pythagorian Triplet"<<endl;
    else
    cout<<"NOT Pythagorian Triplet"<<endl;

    return 0 ;
}