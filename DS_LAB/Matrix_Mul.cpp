#include<bits/stdc++.h>
using namespace std;
int main(){

    int n1,m1,n2,m2;
    cout<<"Enter Rows And Column of First Matrix : "; 
    cin>>n1>>m1; 
    cout<<endl; 
     cout<<"Enter Rows And Column of Second Matrix : "; 
    cin>>n2>>m2;
    if(n1!=m2 && n2!=m1){
        cout<<"Matrix Multiplication is not possible"<<endl;
        return 0; 
    } 
    int arr[n1][m1],brr[n2][m2];
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

    int sum =0; 
     for(i=0;i<n1;i++){

        for(int k=0;k<m2;k++){
            for(j=0;j<n2;j++){
            sum = sum + arr[i][j]*brr[j][k];
        }
        vec.push_back(sum);
        sum=0; 
        }
    }
    cout<<"Multiplication Of matrix is : "<<endl; 
    int k=0; 
    for(i=0;i<n1;i++){
        for(j=0;j<m2;j++){
            cout<<vec[k++]<<" ";
    
        }
        cout<<endl; 
    }


    return 0; 
}