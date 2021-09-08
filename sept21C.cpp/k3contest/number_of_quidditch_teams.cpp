#include <bits/stdc++.h>
using namespace std;
 
int min(vector<int> vec, int n)
{
    set<int> s1;
 
    int count = 1;
 
    for (int i = 0; i < n; i++) {
  
        if (s1.count(vec[i]) == 0) {
            s1.insert(vec[i]);
        }
        else {
            count++;
            s1.clear();
            s1.insert(vec[i]);
        }
    }
 
    return count;
}
 
int main()
{
   vector<int> vec; 
    int n,k;
    cin>>n ; 
    for(int i=0;i<n;i++){
        cin>>k; 
        vec.push_back(k); 
    }
    cout << min(vec, n);
    return 0;
}
 