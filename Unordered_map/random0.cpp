#include<bits/stdc++.h>
using namespace std;


void printPrimeFactors(int num,int arr[],int n) {
    vector <int> vec; 
   while (num%2 == 0){
      vec.push_back(2);
      num = num/2;
   }
   for (int i = 3; i <= sqrt(num); i = i+2){
      while (num%i == 0){
      vec.push_back(i);

         num = num/i;
      }
   }
   if (num > 2){
      vec.push_back(num);

   }


    int sum =0;
    for(int i=0;i<vec.size();i++){
        sum = sum + arr[vec[i]]; 
    }
    
    cout<<sum<<endl; 

}
int main() {
   int n;
   cin>>n; 
   int arr[n]; 
   int i; 
   for(i=0;i<n;i++){
       cin>>arr[i]; 
   }
   int num; 
   cin>>num ;
      printPrimeFactors(num,arr,n);
   return 0;
}