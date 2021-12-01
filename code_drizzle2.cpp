#include<bits/stdc++.h>
using namespace std;

int lis(vector<int> arr, int n)
{
    int lis[n];
 
    lis[0] = 1;
    for (int i = 1; i < n; i++) {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    }
     return *max_element(lis, lis + n);
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> Arr(N);
    for(int i_Arr = 0; i_Arr < N; i_Arr++)
    {
    	cin >> Arr[i_Arr];
    }

    for(int i = 1 ;i<=N;i++){
        vector<int> vec; 
        for(int j=0;j<i;j++){
            vec.push_back(Arr[j]); 
        }
        cout<<lis(vec,vec.size())<<" ";
    }
}
// Game Of Coordinates
// #include<bits/stdc++.h>
// using namespace std;
// void solve (long long x, long long y) {

//    if(x == 1 && y == 1){
//        cout<<"Yes"<<endl;
//        return;  
//    }
//    else if(x<=0 || y<=0){
//          cout<<"No"<<endl;
//        return; 
//    }
//    else if(x == y && x!=1){
//          cout<<"No"<<endl;
//        return; 
//    }
//    if(y>x){ 
//        solve(x,y-x);
//    }else if(x>y){
//        solve(x-y,y); 
//    }
// }

// int main() {

//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int T;
//     cin >> T;
//     for(int t_i=0; t_i<T; t_i++)
//     {
//         long long x;
//         cin >> x;
//         long long y;
//         cin >> y;

//          solve(x, y);
       
//     }
// }


// Group Of Nuimbers; 
// #include<bits/stdc++.h>
// using namespace std;

// vector<int> group_Sol (int N, vector<int> a) {
//    vector<int> result,r;
//     int arr[1001];
//     for(int i =0;i<1001;i++){
//         arr[i] = 0; 
//     } 
//     for(int i=0;i<N;i++){
//         arr[a[i]]++; 
//     }
//     for(int i=0;i<1001;i++){
//         if(arr[i]>0){
//             result.push_back(arr[i]);
//         }
//     }

//     int n= result.size();
//      for(int k=0;k<n;k++){
//         for(int i=0;i<n;i++){
//             if(result[i]<=result[i+1] && (i+1)<n){
//                 int j = result[i]; 
//                 result[i] = result[i+1]; 
//                 result[i+1] = j; 
//             }
//         }
//     }

//     for(int i = 0; i< n;i++){
//         for(int j = 1000;j>=0;j--){
//             if(result[i] == arr[j]){
//                 r.push_back(j);
//                 arr[j] = -1; 
//                 break; 
//             }
//         }
//     }
//    return r;
// }

// int main() {

//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int N;
//     cin >> N;
//     vector<int> a(N);
//     for(int i_a = 0; i_a < N; i_a++)
//     {
//     	cin >> a[i_a];
//     }

//     vector<int> out_;
//     out_ = group_Sol(N, a);
//     cout << out_[0];
//     for(int i_out_ = 1; i_out_ < out_.size(); i_out_++)
//     {
//     	cout << " " << out_[i_out_];
//     }
// }



// Minimum Substring
// #include<bits/stdc++.h>
// using namespace std;

// int solve (string S) {
//    int l = S.size(); 
//    int i,j,k=0,count=-1; 
//    j = 'A'; 
//    for(i=0;i<l;i++){
//        if(S[i]==(j) && (j)<='Z'){
//            k=1; 
//            j++;
//        }
//        if(k==1){
//            count++; 
//        }
//    }
//    return count; 
// }

// int main() {

//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     string S;
//     cin>>S;

//     int out_;
//     out_ = solve(S);
//     cout << out_;
// }