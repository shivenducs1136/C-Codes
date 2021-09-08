#include<bits/stdc++.h>
using namespace std; 
int main(){

    string str;
    cin>>str;
    int i,j,k,l1,m,n,o=0;
    int l = str.length();
 transform(str.begin(), str.end(), str.begin(), ::tolower);
    
    for(i=0;i<l;i++){
        if(str[i] == 'h'){
            for(j=i+1;j<l;j++){
                if(str[j] == 'e'){
                    for(k=j+1;k<l;k++){
                        if(str[k]=='l'){
                            for(l1=k+1;l1<l;l1++){
                                if(str[l1]=='l')
                                for(m=l1+1;m<l;m++){
                                    if(str[m] == 'o'){
                                            o = 1; 
                                            cout<<"YES"<<endl; 
                                            break; 
                                    }
                                }
                                if(o==1){
                                    break; 
                                }
                            }
                        }
                        if(o==1){
                                    break; 
                                }
              
                    }
              
                }
                if(o==1){
                                    break; 
                                }
            }
      
        }
        if(o==1){
                                    break; 
                                }
    }

    if(o==0){
                cout<<"NO"<<endl;  
 }
    return 0; 
}
//  transform(str.begin(), str.end(), str.begin(), ::tolower);

//         int i1=str.find('h'),i2=str.find('e'),i3=str.find('l'),i5=str.find('o');

//         str[i3] = '0';  
//         int ii3=str.find('l');
//         // cout<< i1<<" "<<i2<<" "<<i3<<" "<<ii3<<" "<<i5;

//         if( i1 < i2 && i2 < i3 && i3 < ii3 && ii3 < i5 ){
//             cout<<"YES";
//         }

//         else{
//             cout<<"NO";
//         }