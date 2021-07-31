// https://www.hackerrank.com/challenges/cpp-maps/problem
#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    int T,o=0;
    cin>>T;
    int q;
    string str;
    int y;
    map<string,int> mymap;
    map<string,int>:: iterator itr;
   while(o<T){
       cin>>q>>str;
       

        if(q==1){
            cin>>y;
            itr = mymap.find(str);
            if(itr!=mymap.end()){
                itr->second=itr->second+y;
            }
            else mymap.insert({{str},y});
        }
        else if(q==2){
            mymap.erase(str);
        }
        else if(q==3){
            cout<<mymap[str]<<endl;
        }

       o++;
   }


    return 0;
}