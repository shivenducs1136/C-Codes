// Program For Linear Search 
#include<bits/stdc++.h>
using namespace std; 


// Due to the below block of code we can pass any 
// Containers like array, list,vector , string any thing 
// and a key of any type
template<class forwardIt,class T>
forwardIt search(forwardIt start,forwardIt end,T key){

    while(start!=end){
        if(*start==key){ 
            return start; 

        }
        start++;
    }
    return end; 
}


int main(){

    list<int> l; 
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);

    auto it = search(l.begin(),l.end(),3); 
    cout<<*it<<endl; 

    return 0; 
}