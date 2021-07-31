// // https://www.hackerrank.com/challenges/c-tutorial-functions/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
// #include<iostream>
// using namespace std;
// // void greatest(int a,int b,int c,int d);
// greatest(int a,int b,int c,int d)
// {
//     if(a>b&&a>c&&a>d) cout<<a<<endl;
//     if(b>a&&b>c&&b>d) cout<<b<<endl;
//     if(c>b&&c>a&&c>d) cout<<c<<endl;
//     if(d>b&&d>c&&d>a) cout<<d<<endl; 
//     return 0;
// }
// int main()
// {
//     int a,b,c,d;
//     cin>>a>>b>>c>>d;
//     greatest(a,b,c,d);
//     return 0;
// }
#include<iostream>
using namespace std;
int greatest(int a,int b,int c,int d)
{
    int flag=0;
    if(a>b&&a>c&&a>d) flag=1;
    if(b>a&&b>c&&b>d) flag=2;
    if(c>b&&c>a&&c>d) flag=3;
    if(d>b&&d>c&&d>a) flag=4; 
    if(flag==1) return a;
    if(flag==2) return b;
    if(flag==3) return c;
    if(flag==4) return d;
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<greatest(a,b,c,d)<<endl;
    return 0;

}
