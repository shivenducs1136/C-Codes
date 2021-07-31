#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int swap(int a, int b){
    int c;
    c=a;
    a=b;
    b=c;
    return(a,b);
}

int main(){
//***** Lower case and Upper Case in String **********************************************
//     for(int i=0;i<s1.length();i++)

//     {
//         if(s1[i]>='a'&&s1[i]<='z')
//         {
//             s1[i]=s1[i]-32;
//         }
//     }
//     cout<<s1<<endl;
// for(int i=0;i<s1.length();i++)

//     {
//         if(s1[i]>='A'&&s1[i]<='Z')
//         {
//             s1[i]=s1[i]+32;
//         }
//     }
// cout<<s1<<endl;
//**Direct Method****************************

    // transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    // cout<<s1<<endl;
    // transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    // cout<<s1;
    // string hel;
    // cin>>hel;
    // sort(hel.begin(),hel.end());
    // cout<<hel[hel.length()-1]<<endl;

    string str;
    int l=str.length(),count[l],call=0;
    int a;
    cin>>str;
    
    return 0;
}