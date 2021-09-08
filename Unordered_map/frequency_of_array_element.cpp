#include<bits/stdc++.h>
using namespace std; 


void countfreq(int arr[], int n)
{
    unordered_map<int, int> mp;
 
    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
 
    // Traverse through map and print frequencies
    for (auto x : mp)
        cout << x.first << " " << x.second << endl;
}
 
int main(){
   
    int n; 
    cin>>n; 
    int arr[n],brr[1000]; 
    int i,j,k; 

    for(i=0;i<n;i++){
        cin>>arr[i]; 
    }
    countfreq(arr,n); 
    return 0; 
}

/*
void printfreq(int arr[],int n){
    for(int i=0; i<n;i++){
        bool flag = false ; 
        for (int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j]){
                flag = true ;
                break; 
            }
        }
        if(flag == true ) continue ; 
        int freq = 1; 
        for(int j = i+1 ;j < n; j++){
            if(arr[i] == arr[j]){
                freq++; 
            }
        }
        cout<<arr[i]<<" "<<freq<<endl; 
    }
}
*/
