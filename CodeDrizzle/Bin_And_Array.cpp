#include<bits/stdc++.h>
using namespace std;
#define ll long long 
bool prime(ll n){
	int i; 
	if(n == 1 || n ==0){
		return false; 
	}
	for(i=2;i<n;i++){
		if(n%i == 0){
				return false; 
		}
	}
	return true; 
}
int main(){
	ll n,k;
	cin>>n>>k; 

	vector<int> vec; 
	int b=k, i,a; 
	for(i=0;i<n;i++){
		cin>>a; 
		
		while(k--){
			if(prime(a)){
				a-=1;
			}
			else{
				a+=1; 
			}
		}
		vec.push_back(a); 
		k=b; 
	}
	
	for(i=0;i<n;i++){
		cout<<vec[i]<<" "; 
	}
	return 0; 
}