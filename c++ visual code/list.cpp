#include<iostream>
#include<list>
using namespace std;

void display (list<int> &lst){

    list<int> :: iterator it;
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it<<" ";
        
    }
cout<<endl;
}

int main(){

    list<int> list1;// list of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    list <int>:: iterator iter;
    // list1.pop_front();
    //Reverse the list
    list1.remove(1);
    list1.sort();
    list1.reverse();
    display(list1);

    list<int> list2(3);// empty list of size 7  
    list<int>:: iterator iter1;
    iter1 = list2.begin();
    *iter1=45;
    iter1++;
    *iter1=43;
    iter1++;
    *iter1=2;
    list2.sort();
    list2.reverse();
    display(list2);

    list2.merge(list1);
    list2.sort();
    list2.reverse();
    cout<<"After Sorting and Merging ";
    display(list2);

    return 0;
}