#include<iostream>
using namespace std;
int setbit(int a,int b)
{
    int x=1<<b,bit=0;
        cout<<x;
   if(a&x!=0) bit=1;
    return (bit);
}
int changebit(int a, int b)
{
    int x = 1<<b;

    return(x);
}
int main()
{
    int n,i;
    cin>>n>>i;
    cout<<setbit(n,i)<<endl;
    cout<<changebit(n,i)<<endl;
    return 0;

}