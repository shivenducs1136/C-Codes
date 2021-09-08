#include<iostream>
#include<string>
using namespace std; 
int main(){

    string s0; 
    string s1("Hello"); 
    string s2 ="Hello world"; 
    string s3(s2); 
    string s4 = s3; 
    char a[] = {'a','b','c','\0'}; 
    string s5(a); 

    cout<<s0<<endl; 
    cout<<s1<<endl; 
    cout<<s2<<endl; 
    cout<<s3<<endl; 
    cout<<s4<<endl; 
    cout<<s5<<endl; 
    
    if(s0.empty()){
        
        cout<<"s0 is an empty string "<<endl; 

    }
// Append
    s0.append("I love C++"); 
    s0 += "and kotlin"; 
    cout<<s0<<endl; 
// remove 

    cout<<s0.length()<<endl;
    s0.clear();

    cout<<s0.length()<<endl;
// compare
s0 = "Apple"; 
s1 = "Mango"; 
cout<<s1.compare(s0)<<endl; // Returns an integer == 0 equal, > 0 , <0  

// Overloaded operator
     if(s1>s0){
         cout<<"Mango is greater than apple"<<endl; 
     }

     // Find substring

   string  s = "I want to have apple in juice"; 
    int idx = s.find("apple"); 
    cout<<idx<<"---"<<endl; 

    // Remove a word from string 
    string word = "apple"; 
    int len = word.length();
    cout<<s<<endl; 
 
    s.erase(idx,len); 
    cout<<s<<endl;

    // Iterate over all the characters in the string 
    for(int i=0;i<s1.length();i++){
        cout<<s1[i]<<":"<<endl; 
    } 

    for(auto it=s1.begin();it!= s1.end();it++){
        cout<<(*it)<<","<<endl; 
    }
    cout<<endl; 
// for each loop 
    for(auto c:s1){
        cout<<c<<"."; 
    }
    return 0; 
}