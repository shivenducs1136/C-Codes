#include<iostream> 
#include<algorithm>
using namespace std; 
int main(){

    int arr[] = {1,10,11,9,100}; 
    int n = sizeof(arr)/sizeof(int); 
    //search --> find
    int key; 
    cin>>key; 
    auto it = find(arr,arr+n,key); 
    int index = it - arr; 
    if(index == n ){
        cout<<key<<"Not Present"<<endl;
    }
    else{
        cout<<"Present at Index : "<<index<<endl; 
    }
    bool present = binary_search(arr,arr+n,key); 
    if(present){
        cout<<"Present"<<endl; 
    }
    else{
        cout<<"Absent!"<<endl; 
    }
    return 0; 
}