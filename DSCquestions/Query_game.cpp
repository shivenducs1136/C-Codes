#include<bits/stdc++.h>
using namespace std;

void query_game (int N, vector<int> A, int Q, vector<vector<int> > P) {
   int i,j,k,l; 
   vector<int> res; 
   for(i=0;i<Q;i++){
        j= 0; 
           if(P[i][j]==1){
               int low=0,high=N-1;
               while(low<high){
                   int c = A[low];
                   A[low] = A[high];
                   A[high] = c; 
                   low++;
                   high--;
               }
           }
         if(P[i][j] == 2){
               k = P[i][1]; 
                l = P[i][2]; 
                int c = A[k]; 
                A[k] = A[l]; 
                A[l] = c;  
           }
        if(P[i][j] == 3){
               k = P[i][1]; 
               for(int o=0;o<N;o++){
                   if(k == A[o]){
                    cout<<o+1<<" "; 
                    break; 
                   }
               }
           }
       
   }
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for(int i_A = 0; i_A < N; i_A++)
        {
        	cin >> A[i_A];
        }
        int Q;
        cin >> Q;
        vector<vector<int> > P(Q, vector<int>(3));
        for (int i_P = 0; i_P < Q; i_P++)
        {
        	for(int j_P = 0; j_P < 3; j_P++)
        	{
        		cin >> P[i_P][j_P];
        	}
        }
     query_game(N, A, Q, P);
    }
}