// https://www.hackerrank.com/challenges/cpp-sets/problem
#include<iostream>
#include<set>
using namespace std;
int main(){

    int T,o=0;
    cin>>T;
    set<int>s;
    int y,x;
    set<int>::iterator itr;
    while(o<T)
    {
        cin>>y>>x;
        if(y==1){
            s.insert(x);
        }
        else if(y==2){
            itr = s.find(x);
            if(itr!=s.end()){
                s.erase(x);
            }
        
        }
        else if(y==3){
            itr = s.find(x);
            if(itr!=s.end()){
                cout<<"Yes"<<endl;
            }
            else cout<<"No"<<endl;
        
        }
    o++;
    }
    
    return 0;
}