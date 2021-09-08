// #include<bits/stdc++.h>
// using namespace std;

// bool condition(int a, int b, int n){
//     if(a<=b && a|b == n && a&b == 0){
//         cout<<"FDS"<<endl; 
//         return true;
//     } 
//     else return false; 
// }

// int main(){

//     int t; 
//     cin>>t; 
//     while(t--){
//          int n; 
//         cin>>n; 
//         vector<int> vec; 
//         int i,j,i1,j1; 
//         for(i=0;i<10;i++){
//             for(j=0;j<10;j++){
//                 if(condition(3,4,7)){
//                     vec.push_back(j-i); 
//                      cout<<i<<"nj "<<j<<endl;  
//                 }
//             }
//         }
       
//          cout<<"--"<<endl; 

//     }
   
//     return 0; 
// }

#include <bits/stdc++.h> 

using namespace std;

typedef long long ll;
typedef pair<ll,ll> pr;

ll mod=1000000007;



void solve()
{
    ll n,i=63,j1,j2,k=0,msb=0,t=1;
    cin>>n;
    while((n&(1ll<<i))==0 && i>0)
    {
        i--;
    }
    msb=i;
    for(i=0;i<=msb;i++)
    {
        if((n&(1ll<<i))!=0 && i!=msb)
        {
            k=k+t;
        }
        if(i!=msb)
       t=t*2;
        
    }

    cout<<k<<" "<<t<<"\n";
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
    {
       solve();
    }    
}