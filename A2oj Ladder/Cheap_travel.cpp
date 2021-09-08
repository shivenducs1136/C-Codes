#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int A1,A2,A3;
    cin>>A1>>A2>>A3; 
	if(A1==0  && A2==0 && A3==0)
	{
	cout<<"Fail";
	}
	if(A1==1  && A2==1 && A3==1)
	{
	cout<<"Pass";
	}
	if(A1==0)
	{
	    	if(A2==0 && A3==1)
	    		cout<<"Fail";
	   
	
	
	    if(A2==1 && A3==0)
	    cout<<"Fail";
	
	
	
	    if(A2==1 && A3==1)
	    cout<<"Pass";
	}
		if(A2==0)
	{
	    	if(A1==0 && A3==1)
	    	cout<<"Fail";
	
	
	if(A1==1 && A3==0)
	cout<<"Fail";
	    
	
	    if(A1==1 && A3==1)
	    cout<<"Pass";
	}
	if(A3==0)
	{
	    	if(A2==0 && A1==1)
	    	cout<<"Fail";
	
	if(A2==1 && A1==0)
	    cout<<"Fail";

	    if(A2==1 && A1==1)
	    cout<<"Pass";
	}
	
	
	return 0;
}

// #include<bits/stdc++.h>
// using namespace std; 
// int main(){

//     int n,m,a,b; 
//     cin>>n>>m>>a>>b; 

//     cout<<m+a+b+1<<endl; 

//     return 0; 
// }