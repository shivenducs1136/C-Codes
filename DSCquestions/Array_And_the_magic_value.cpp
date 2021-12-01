#include<bits/stdc++.h>
using namespace std;

long long solve (int n, vector<int> a) {
   long long int arr[n]; 
   int i,j,k; 
   for(i=0;i<n;i++){
       arr[i] = a[i]; 
   }
   sort(arr,arr+n); 
//    for(k=0;k<n;k++){
//        for(i = 0; i<n;i++ ){
//            if(arr[i]>=arr[i+1]&&(i+1)<n){
//                j = arr[i]; 
//                arr[i ] = arr[i+1]; 
//                arr[i+1] = j;
//            }
//        }
//    }
   
    long long int sum_good=0, sum_bad=0; 
    for(i=0;i<n;i++){
        if(arr[i] == a[i]){
            sum_good = sum_good + arr[i]; 
            arr[i] = 0; 
        }
        sum_bad = sum_bad + arr[i]; 
    }
    return (sum_good-sum_bad); 
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i_a = 0; i_a < n; i_a++)
    {
    	cin >> a[i_a];
    }

    long long out_;
    out_ = solve(n, a);
    cout << out_;
}