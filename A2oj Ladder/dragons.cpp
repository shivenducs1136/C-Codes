#include<bits/stdc++.h>
using namespace std;
#define dd long long int 
int main(){

   dd s,n,count=0; 
   cin>>s>>n;
   int c = n;  
    vector<pair<int,int>> v;
     for (int i=0; i<n; i++){
         int a,b; 
         cin>>a>>b; 
        v.push_back( make_pair(a,b));
     }
    sort(v.begin(), v.end());
    for(int i=0;i<n;i++){
        if(v[i].first<s){
            s=s+v[i].second; 
            count++; 
        }
    }
    if(count == c){
        cout<<"YES"<<endl; 
    }
    else{
        cout<<"NO"<<endl; 
    }

    return 0; 
}