// CORRECT  BUT  TIME COMPLEXITY ISSUE
// https://www.hackerrank.com/challenges/cpp-lower-bound/problem
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int cc;
    int vec[n];
    for(int i=1;i<=n;i++){
       cin>>vec[i];
    }
    int q,num,i,sum=0,r,flag=0;
    cin>>q;
    for(int j=0;j<q;j++){

        flag=0;sum=0;
        cin>>num;
        for(i=1;i<=n;i++){
            if(num==vec[i]){
                cout<<"Yes "<<i<<endl;
                sum=1;
                break;
            }
            }
                if(sum==0){
                     cout<<"No ";
                while(num<=vec[n]){
                    num++;
                    for(int t=1;t<=n;t++){
                        if(num==vec[t]){
                            cout<<t<<endl;
                            flag=1;
                            break;
                        }

                    }
                    if(flag==1)break;
                }
                if(num>vec[n]) cout<<n<<endl;

                }
               
        }
       return 0;
    }

