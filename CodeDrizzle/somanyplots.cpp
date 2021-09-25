#include<bits/stdc++.h>
using namespace std;

void solution (int n, vector<int> plots, vector<int> costs_arr) {
   int cost = 0 ,j=0,k=1; 
   int plot_area=0,i,a; 
   for(i=0;i<n;i++){
      plot_area = plot_area + plots[i];
   }
   for(i = 0 ; i < n && j<n && k<n; i++ ){
      cost = cost + plots[j++] + plots[k];
      plots[j] = plots[j-1]+ plots[k];
      k++; 
   }
   cout<<cost<<endl; 
   int cost_per_unit_area = 0; 
   for(i=0;i<n;i++){
      cost_per_unit_area = cost_per_unit_area + plots[i] * costs_arr[i]; 
   }
   if(cost<cost_per_unit_area){
      cout<<"YES"<<endl; 
   }
   else{
      cout<<"NO"<<endl; 
   }
   
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> plots(n);
    for(int i_plots = 0; i_plots < n; i_plots++)
    {
    	cin >> plots[i_plots];
    }
    vector<int> costs_arr(n);
    for(int i_costs_arr = 0; i_costs_arr < n; i_costs_arr++)
    {
    	cin >> costs_arr[i_costs_arr];
    }

     solution(n, plots, costs_arr);
   
}