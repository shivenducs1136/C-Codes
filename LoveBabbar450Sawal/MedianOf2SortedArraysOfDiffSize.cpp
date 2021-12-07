#include<bits/stdc++.h>
using namespace std;
int find_median(int v[],int n)
		{
		    sort(v,v+n);
		    if(n%2==0){
		        int ans = (v[n/2-1]+v[n/2])/2; 
		        return ans; 
		    }
		    else{
		        return v[n/2]; 
		    }
		}
int main(){

    int n,m; 
    cin>>n>>m; 
    int arr[n],brr[m]; 
    int i,j,k; 
    for(i=0;i<n;i++){
        cin>>arr[i]; 
    }
    sort(arr,arr+n); 
    for(i=0;i<m;i++){
        cin>>brr[i]; 
    }
    sort(brr,brr+m);
    cout<<"Median for arr : "<<find_median(arr,n)<<endl;
    cout<<"Median for brr : "<<find_median(brr,m)<<endl;


    return 0; 
}