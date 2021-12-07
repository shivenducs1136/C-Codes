#include<bits/stdc++.h>
using namespace std; 
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        long long int i=0,j=0,count=0; 
        long long int c[n+m]; 
        for(i=0;i<n;i++){
            c[i] = a[i];
        }
        for(i;i<m+n;i++){
            c[i]= b[i-n]; 
        }
        set<int> s(c,c+(n+m)); 
        return s.size(); 
    }
};