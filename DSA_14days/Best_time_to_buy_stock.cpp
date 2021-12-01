#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n;
    cin>>n; 
    int prices[n]; 
     int x= prices[0];
     int min=prices[0],diff=0,ans=0; 
        int i,j,k; 
    for(i=0;i<n;i++){
        cin>>prices[i]; 
    }
     // 7 1 5 3 6 4
        // int n = prices.size();
        for(i=0;i<n;i++){
            int res = (prices[i] - min);
            if(res>diff ){
                diff = res;  
                  cout<<diff<<" diff "<<endl; 
                if(diff>ans){
                    ans = diff; 
                   cout<<ans<<" "<<endl; 

                }
            }else if(res<min){
                min = prices[i]; 
                cout<<min<<"min  "<<endl ; 
            }
            
        }
        cout<<ans<<" "<<endl; 
    return 0; 
}