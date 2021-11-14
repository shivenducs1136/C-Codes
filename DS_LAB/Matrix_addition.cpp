#include<bits/stdc++.h>
using namespace std;
int main(){

    int n1,m1,n2,m2;
    cout<<"Enter Rows And Column of First  and Second Matrix : "; 
    cin>>n1; 
    m1 = n1; 
    cout<<endl; 
    n2= n1 ;
    m2 = n2; 
    if(n1!=m2 && n2!=m1){
        cout<<"Matrix Multiplication is not possible"<<endl;
        return 0;  
    } 
    int arr[n1][m1], brr[n2][m2];
    vector<int> vec; 
    cout<<"Enter First Matrix : "<<endl; 
    int i,j; 
    for(i=0;i<n1;i++){
        for(j=0;j<m1;j++){
            cin>>arr[i][j]; 
        }
    }
      cout<<endl; 
    cout<<"Enter Second Matrix : "<<endl;
    for(i=0;i<n2;i++){
        for(j=0;j<m2;j++){
            cin>>brr[i][j]; 
        }
    }
      cout<<endl; 


    cout<<"Your First Matrix is :"<<endl; 
     for(i=0;i<n1;i++){
        for(j=0;j<m1;j++){
            cout<<arr[i][j]<<" "; 
        }
        cout<<endl;
    }
    cout<<endl; 
    cout<<"Your Second Matrix is :"<<endl; 
     for(i=0;i<n2;i++){
        for(j=0;j<m2;j++){
            cout<<brr[i][j]<<" "; 
        }
        cout<<endl; 
    }
    cout<<endl; 

    int sum =0 ; 
    
    cout<<"Matrix Addition is : "<<endl ;
    for(i= 0 ;i<m1 ; i++){
        for(j=0;j<m1; j++){
            sum = arr[i][j] + brr[i][j];
            cout<<sum<<" "; 
        }
    cout<<endl; 
    }

    return 0; 
}