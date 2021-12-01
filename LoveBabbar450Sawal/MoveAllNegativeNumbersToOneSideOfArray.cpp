// Two Pointers Approach 
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n; 
    cin>>n; 
    int arr[n],neg[n]; 
    int i,j,k; 
    int count =0; 
    for(i=0;i<n;i++){
        cin>>arr[i]; 
    }
    int low = 0,high = n-1; 
    while(low<high){
        if(arr[low]<0 && arr[high]<0){
            low++; 
        }
        else if(arr[low]>0 && arr[high]<0){
             k = arr[low]; 
            arr[low] = arr[high]; 
            arr[high] = k ; 
            low++; 
            high--; 
        }
        else if (arr[low]>0 && arr[high] >0)
      high-=1;
    else{
      low+= 1;
      high -= 1;
    }
    
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0; 
}
// Swaping approach; 
/*#include<bits/stdc++.h>
using namespace std;
int main(){

    int n; 
    cin>>n; 
    int arr[n],neg[n]; 
    int i,j,k; 
    int count =0; 
    for(i=0;i<n;i++){
        cin>>arr[i]; 
    }
    j=0; 
    for(i=0;i<n;i++){
        if(arr[i]<0){
            count++; 
            neg[j++]=i; 
        }
    }
     i=0 ; 
     j=0; 
    while(count--){
        if(arr[i]>=0){
            k = arr[i]; 
            arr[i] = arr[neg[j]]; 
            arr[neg[j]] = k ; 
            j++; 
        }
        i++; 
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0; 
}
*/