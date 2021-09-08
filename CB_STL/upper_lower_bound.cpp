#include<iostream> 
#include<algorithm>
using namespace std; 
int main(){

    int arr[] = {1,10,40,40,40,40,11,9,100}; 
    int n = sizeof(arr)/sizeof(int); 

// Time Complexity O(log(n))
// Sorting of array is necc coz upper bound will return the element > key 
// but if the next element is smaller than the key then the output will become inncorrect 

    sort(arr,arr+n);
    //search --> find
    int key; 
    cin>>key; 
// binary_search --> To search a key 
// lower_bound(s,e,key) and upper_bound(s,e,key)
// lower_bound --> returns the address of key>=element
// upper_bound --> returns the address of key> element 




    bool present = binary_search(arr,arr+n,key); 
    if(present){
        cout<<"Present"<<endl; 
    }
    else{
        cout<<"Absent!"<<endl; 
    }

    auto lb = lower_bound(arr,arr+n,40); 
    cout<<"Lower Bound of 40 is "<<(lb-arr)<<endl; 


    auto ub = upper_bound(arr,arr+n,40); 
    cout<<endl<<"Upper Bound of 40 is "<<(ub-arr)<<endl; 

    cout<<endl<<"Frequency Of 40 in the array is "<<(ub-lb)<<endl; 
    return 0; 
}