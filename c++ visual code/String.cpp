#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

// *****Input/Output*****************
    // cin>>str;
    // cout<<str;
//***Declaratrion type 2************************
    // string str1(5,'n');
    // cout<<str1;
//***Declaration type 3****************
    // string str3="ShivenduMishra";
    // cout<<str3;
// *******Declaration type 4 **********
    // string str5;
    // getline(cin,str5);
    // cout<<str5;
// *********Functions in String***********
    // s1="fam" s2 ="ily" == family (Append krna mtlb jodna )
    // string s1 = "Fam";
    // string s2 = "ily";

    // // cout<<s1+s2<<endl;
    // // // s1.append(s2);// function 1
    // // cout<<s1<<endl;
    // cout<<s1[1];// accesing the string like an array , Zero based Indexing .
// Clear function;
    // string abc="jsbdnejnfmdnsl dfniek  evneice";
    // cout<<abc<<endl;
    // abc.clear();
    // cout<<abc;
// Compare Function;
    // string s1 ="abc";
    // string s2="xyz";
    // cout<<s2.compare(s1)<<endl;//Comparing s2 with s1.
    //  cout<<s1.compare(s2)<<endl;
    // s2="abc";
    // cout<<s1.compare(s2)<<endl;
    
//Empty Function;
    // string s1="abc";
    // cout<<s1<<endl;
    // s1.clear();
    // if(s1.empty())
    // cout<<"String is Empty"<<endl;
// Erase Function <--------

    // string s1="Nincompoop";

    // s1.erase(3,3);//3rd index se three element erase kara

    // cout<<s1<<endl;
// Find Function

    // string s1="nincompoop";
    // cout<<s1.find("com")<<endl;// ye first matched element ka index return krta hai for example iss wale ka output 3 hai.
// Inset Function
    // string s1="nincompoop";
    
    // s1.insert(2,"lol");// Insert the string at 2nd index(coz its provided)

    // cout<<s1<<endl;
//Length / size function
    // string s1="jfmife";
    // cout<<s1.length()<<endl;
    // for(int i=0;i<s1.length();i++){// itreating the string and printing each character in every line
    //     cout<<s1[i]<<endl;
    // }
// Get Substring Function
    // string s1="nincompoop";

    // string s=s1.substr(6,4);// 6th index se leke 4 element print kara ye. OUTPUT = poop

    // cout<<s<<endl;
// string to integer function;
    // string s1="786";
    // int x = stoi(s1);
    // cout<<x+2<<endl;
// Integer to string function  ;
    // int x1=786;
    // cout<<to_string(x1)+"2"<<endl;
// Sorting a String ; // uses ALGORITHM library.

    // string s1="dnfjeflmrlwm";
    // sort(s1.begin(),s1.end());
    // cout<<s1<<endl;

    return 0;
}