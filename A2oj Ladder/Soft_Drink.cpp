#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
    ll n,k,l,c,d,p,nl,np; 
    cin>>n>>k>>l>>c>>d>>p>>nl>>np; 
    ll millit_of_drink = k*l;
    ll slice_of_lime = d*c;
    ll t = min(millit_of_drink/nl,slice_of_lime); 
    ll tt = min(t,p/np); 
    cout<<tt/n<<endl; 
    return 0; 
}