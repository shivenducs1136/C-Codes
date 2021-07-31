#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &vec1)
{
    cout<<"Displaying the vector"<<endl;
    for(int i=0; i<vec1.size();i++)
    {
        cout<<vec1[i]<<" "; 
        // cout<<vec1.at(i)<<" ";
    }
}
int main()
{
    vector<int> vec1;//Zero lenght integer vector
    vector<char> vec2(4); // 4 - element char vector
    vector<char> vec3(vec2); // 4-element char vector from vec2
    vector<int> vec4(6,3); //6-element vector of 3s.
    // vec2.push_back('5');
    // display(vec2);

    // display(vec3);
    display(vec4);


    // int size ;
    // cin>>size;
    // int ele;
    // for(int i=0;i<size;i++)   
    // {
    //     cin>>ele;
    //     vec.push_back(ele);
    // }
    // // vec.pop_back();
    // // display(vec);cout<<endl;
    // vector<int> :: iterator itr= vec.begin();
    // // vec.insert(itr+3,100,5 66);

    // display(vec);
     
    return 0;
}