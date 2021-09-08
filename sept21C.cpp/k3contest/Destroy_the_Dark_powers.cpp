#include<bits/stdc++.h>
using namespace std; 
int main(){

    int t; 
    cin>>t; 
    while(t--){

        int a,b; 
        cin>>a>>b; 
        vector<int> vec; 
        int i,j,k; 
        vector<int>::iterator it;
        for(i=0;i<a;i++){ 
            cin>>k;
            vec.push_back(k);  
        }

        int sum =0 ;
        for(i=0;i<b;i++){
            sum = vec[i] + sum ;
            vec.erase(vec.begin());
            for(j=0;j<vec.size();j++){
                vec[j] = vec[j] * (-1); 
            }
            sort(vec.begin(),vec.end()); 
        }

        cout<<sum<<endl; 

    }

    return 0; 
}