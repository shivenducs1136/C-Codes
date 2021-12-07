/*
1 -> MAP -> BST -> logn
2 -> unordered map -> HashTable -> O(1) [insertion, deletion,searching]	
*/
#include<iostream>
#include<unordered_map>
using namespace std; 
int main(){
    unordered_map <string, int> ourMap; 
    
    // Insert
    pair<string,int> p("abc",1);
    ourMap.insert(p); // Insert Method 1 
    ourMap["def"] = 2; // Insert Method 2
    // Find or Access
    cout<<ourMap["abc"]<<endl;
    cout<<ourMap.at("abc")<<endl; 
    // Difference  btw [] and using .at("")
    // is that [] -> insert 0 by default if key not present.
    // .at() -> Gives error when the key is not found.

    // to check a key is present or not
    // we use count -> it gives either 0 or 1 
    // because in map a key is either present or not present at all.
     
    ourMap["ghi"]; 

    if(ourMap.count("ghi")>0){
        // key is present
        cout<<"Present"<<endl; 
    }
    else{
        // key is not present
        cout<<"Notpreesnt"<<endl; 
    }
    cout<<ourMap.size()<<endl; 
    // erase
    ourMap.erase("ghi");
    cout<<ourMap.size();  
    return 0; 
}