// https://www.hackerrank.com/challenges/find-digits/problem
#include<iostream>
using namespace std;
int main()
{
    int T,o=0;
    cin>>T;
    while(o<T)
    {
        int n,i,j,k,flag=0,t;
        cin>>n;

        j=n;
       while(n!=0)
       {
           t=j%10;
            if(n%t==0)
            {
                flag++;
            }
            else if(n%t!=0)
            {
                flag--;
            }
            j=t;


       }



        o++;
    }

}