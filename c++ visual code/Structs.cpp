// https://www.hackerrank.com/challenges/c-tutorial-struct/problem
#include<iostream>
using namespace std;
int main(){

    struct hacker
    {
        int age;
        string first_name;
        string last_name;
        int standard;
    };
    struct hacker data;

    cin>>data.age;
    cin>>data.first_name;
    cin>>data.last_name;
    cin>>data.standard;

    cout<<data.age<<endl<<data.last_name<<", "<<data.first_name<<endl<<data.standard<<endl<<endl;
    
    cout<<data.age<<","<<data.first_name<<","<<data.last_name<<","<<data.standard;


    return 0;
}