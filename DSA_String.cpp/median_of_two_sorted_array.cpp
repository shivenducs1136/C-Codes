#include<bits/stdc++.h>
using namespace std; 
int main(){


    int n = nums1.size(); 
        int m = nums2.size();
        int j =0 ; 
        for(int i = 0 ; i< n; i ++ ){
            if( nums1[i-1] < nums2[j] && nums2[j]<= nums1[i] && i-1>0){
                nums1.push_back(nums2[j]);
                j++;
            }
        }
        for(int i = 0 ; i<nums1.size(); i++ ){
            cout<<nums1[i]<<" "<<endl ; 
        }
 
    return 0; 
}