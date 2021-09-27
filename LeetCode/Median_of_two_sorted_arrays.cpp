#include<bits/stdc++.h>
using namespace std; 
int main () {

    int n1,n2,c;
    cin>>n1>>n2;   
    vector<float> nums1,nums2,res; 
    for(int i =0 ;i < n1 ;i++){
        cin>>c; 
        nums1.push_back(c); 
    }
    for(int i =0 ;i < n2 ;i++){
        cin>>c; 
        nums2.push_back(c); 
    }

    vector<float> vec; 
    int i,j; 
    for(i=0;i<nums1.size();i++){
        vec.push_back(nums1[i]); 
    }
     for(j=0;j<nums2.size();j++){
        vec.push_back(nums2[j]); 
    }
     sort(vec.begin(),vec.end()); 
    int l = vec.size(); 
    if(l%2!=0){
       
        printf("%.5f",vec[l/2]); 
    }
    else{
        printf("%.5f",((vec[l/2-1] + vec[l/2])/2)); 
    }
    return 0; 
}