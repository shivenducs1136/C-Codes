// https://www.hackerrank.com/challenges/vector-sort/problem

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){

        cout<<v[i]<<" ";

    }
}
int main(){

    int n;
    vector<int> vec;
    int ele;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ele;
        vec.push_back(ele);
    }
    sort(vec.begin(),vec.end());
    display(vec);
    return 0; 
}