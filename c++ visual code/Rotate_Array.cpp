#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){

    for(int i=0; i< v.size(); i++){
        cout<< v.at(i) <<" ";
    }

}
int main(){

    int T,o=0;
    cin>>T;
    int num , rot;
     int ele,r1,r2,i,j;
     vector<int> vec;
     vector<int>::iterator itr; 
    while(o<T){
        

       cout<<"Ex 1"<<endl;
       cin>>num>>rot;
        for( i=0;i<num;i++){
            cin>>ele;
            vec.push_back(ele); 
        }
               cout<<"Ex 2"<<endl;
            
            for(j=0;j<rot;j++){
                 cout<<"Ex 3"<<endl;
               
                cout<<"Ex 4"<<endl;  
            }
             cout<<"Ex 5"<<endl;
                  
        display(vec);
         cout<<"Ex 6"<<endl;
        o++;

    }

    return 0; 
}