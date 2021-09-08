#include <bits/stdc++.h>
#include<algorithm> 
using namespace std;

int main() {
	int n,k; 
	cin>>n>>k;
	int arr[n]; 
	int i ; 
	for(i=0;i<n;i++){
	    cin>>arr[i]; 
	}
    auto o =    find(arr,arr+n,k); 
    if(o-arr != n){
        cout<<o-arr<<" "; 
    }
    else{
        cout<<"-1"<<endl; 
    }
	return 0;
}
