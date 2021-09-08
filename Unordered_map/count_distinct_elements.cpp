#include<bits/stdc++.h>
using namespace std; 
int countdiss(int arr[],int n){
    unordered_set<int>s; 
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    return s.size(); 
}
int main(){
    int n; 
    cin>>n; 
    int arr[n]; 
    int i,j,k; 

    for(i=0;i<n;i++){
        cin>>arr[i]; 
    }

    cout<<countdiss(arr,n)<<endl; 
    return 0; 
}



/* 
    Naive 2.O
    Timecomplextiy = O(1)
*/
/*#include<bits/stdc++.h>
using namespace std; 
int main (){

    
    int n; 
    cin>>n; 
    int arr[n]; 
    int i,j,k; 

    for(i=0;i<n;i++){
        cin>>arr[i]; 
    }

    sort(arr,arr+n);
    int count = 1; 
    for(i=1;i<n;i++){
        if(arr[i-1] != arr[i]){
            count++; 
        }
    }
    cout<<count<<endl; 

    return 0; 
}
*/
/* Naive Solution 
    Time Complexity = O(n^2)
/*
/*#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; 
    cin>>n; 
    int arr[n],brr[1000]; 
    int i,j,k; 

    for(i=0;i<n;i++){
        cin>>arr[i]; 
    }
    for(i=0;i<1000;i++){
        brr[i] =0;  
    }
    int count =0,t=0; 
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i] == arr[j]){
                brr[arr[i]] ++;
            }
        }
    }
    for(i=0;i<1000;i++){
        if(brr[i]>0){
            count++; 
        }
    }

    cout<<count<<endl; 
    return 0; 
}*/