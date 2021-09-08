#include <bits/stdc++.h> 

using namespace std;
int fact(int n){
    if(n == 0){
        return 1; 
    }
    return n*fact(n-1); 
}
int main() {
	int T;
	cin>>T; 
	int arr[T]; 
	int i;
	for(i=0;i<T;i++){
	    cin>>arr[i]; 
	}
	for(i=0;i<T;i++){
	    cout<< fact(arr[i])<<endl; 
	}
	
	return 0;
}