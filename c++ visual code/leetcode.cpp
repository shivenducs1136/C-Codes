#include<iostream>
#include<math.h>
using namespace std;

int rev(int x){
    
    int sum=0,t;
    while(x!=0){
        t=x%10;
        sum =sum*10+t;
        x=x/10;
        
    }
    // if(sum<(-pow(2,31))|| sum>(pow(2,31)-1)){
    //     return 0;
    // }
    else return sum;
    
    
}


int main(){
    
    int x;
    cin>>x;
    cout<<rev(x)<<endl; 
    
    
    return 0;
}