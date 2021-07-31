// https://www.hackerrank.com/challenges/vector-erase/problem
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}

int main()
{
	int n, ele;
	cin>>n;
	int i;
	vector<int> v;
	for(i=1;i<=n;i++)
	{
		cin>>ele;
		v.push_back(ele);
	}
	
	int remove;
	cin>>remove;
	v.erase(v.begin()+(remove-1));
	int r1,r2;
	cin>>r1>>r2;
	v.erase(v.begin()+(r1-1),v.begin()+(r2-1));
	cout<<v.size()<<endl;
	display(v);
	return 0; 
	
}