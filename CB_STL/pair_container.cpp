#include<bits/stdc++.h>
using namespace std; 
int main(){
// Method one 
    pair<int,char> p ; 
    p.first = 10; 
    p.second = 'B' ; 

    cout<<p.first<<endl; 
    cout<<p.second<<endl; 
// Method two
    cout<<endl<<"Pair inside an old pair***"<<endl ; 
    pair<int,char> p2(p); 
    cout<<p2.first<<endl; 
    cout<<p2.second<<endl; 
 // Method three 

    pair<int,string> p3 = make_pair(100,"Shivendu"); 
    cout<<p3.first<<endl; 
    cout<<p3.second<<endl;

// We can Also make array and vector of pairs 
// We can also make pair of pairs 
    
    pair<pair<int, int>, string > car; 
    car.second =" Audi "; 
    car.first.first = 10; 
    car.first.second = 20; 
     
     cout<<car.first.first<<" "<<car.second<<endl; 
     cout<<car.first.second<<" "<<car.second<<endl; 

    return 0; 
}