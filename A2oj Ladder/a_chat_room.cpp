#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    cin >> str;
    int l = str.length();
    int a, b, c, d, e, f, g;
    size_t found = str.find("h");
    if (found != string::npos){
        a = found;
        // cout<<a<<"a"<<endl;
    }
        
    found = str.find("e");
    if (found != string::npos){
        b = found;
    //    cout<<b<<"b"<<endl; 
    }
        
    found = str.find("l");
    if (found != string::npos)
    {
        c = found;
        // cout<<c<<"c"<<endl;
        str[c] = 0;
    }
    
    found = str.find("l");
    if (found != string::npos)
       {
            d = found;
            // cout<<d<<"d"<<endl;
       }
    found = str.find("o");
    if (found != string::npos)
     {
            e = found;
            // cout<<e<<"e"<<endl;
     }
    if (a < b && b < c && c < d && d < e)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
