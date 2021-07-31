#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int mx=0,mn=0;
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    mx=*max_element(a, a + n);
	    mn=*min_element(a, a + n);
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==mx)
	        {
	            a[i]=mn;
	        }
	        sum+=a[i]/mn;
	    }
	    cout<<sum;
	    cout<<"\n";
	}
	return 0;
}




// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main(){

//     ll t; 
//     cin>>t ;
//     while(t--){
//         ll n; 
//         cin>>n; 
//         ll arr[n]; 
//         ll i,j,k; 
//         for(i=0;i<n;i++){
//             cin>>arr[i]; 
//         }
//         sort(arr,arr+n); 
//         ll sum= 0;
//         arr[n-1] = arr[0];  
//         for(i=0;i<n;i++){

//             sum = sum + arr[i]/arr[0]; 

//         }
//         cout<<sum<<endl; 
//     }


//     return 0; 
// }