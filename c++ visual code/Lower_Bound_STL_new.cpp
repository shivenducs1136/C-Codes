#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    int N;
    cin>>N;
    int num;
    vector<int> vec;
    for(int i=0;i<N;i++){
        cin>>num;
        vec.push_back(num);
    }

    int chk;
    cin>>chk;
    int ele,r,sum=0,flag=0;
    vector<int> :: iterator itr;
    for(int j=0;j<chk;j++){
        cin>>ele;sum=0;flag=0;
        for(int h=0;h<N;h++){
            r=h;
            r=r+1;
            if(vec[h]==ele){
                cout<<"Yes "<<r<<endl;
                sum=1;
                break;
            }
        }    if(sum==0){
            cout<<"No ";
            while(ele<=vec[N-1]){
                num++;
                for(int t=1;t<=N;t++){
                    if(ele == vec[t]){
                        cout<<t<<endl;
                        flag=1;
                        break;
                    }
                }
                if(flag==1) break;
            }
            if(ele>vec[N-1]) cout<<N-1<<endl;
        } 
    }

    return 0; 
}
// auto it = find(vec.begin(),vec.end(),ele);
//         if(it!=vec.end()){

//         cout<<"Yes "<<endl;

//         }
//         else {
//             cout<<"No "<<endl;
//         }