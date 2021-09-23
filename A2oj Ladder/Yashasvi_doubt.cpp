#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    string t;
    int a;
    double b; 
    string c; 

    getline(cin, t);
    a = stoi(t);
    getline(cin, t);
    b = stod(t);
    getline(cin, c);

    cout<<i+a<<endl;
    cout<<fixed<<setprecision(1)<<d+b<<endl;
    cout << s + c << endl;
    return 0;}