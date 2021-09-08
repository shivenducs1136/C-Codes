#include<iostream>
#include<unordered_map> 
using namespace std; 
int main(){
    unordered_map<string,int> m; 
    m["gfg"] = 20; 
    m["ide"] = 30; 
    m.insert({"courses",15}); 
    m.insert({"Shivendu",7});
    auto it = m.find("Shivendu"); 
    if(it!=m.end()){
        cout<<(it->second)<<endl; 
    }
    else{
        cout<<"Unable to find"<<endl; 
    }
    for(auto it = m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl; 
    }
    return 0; 
}