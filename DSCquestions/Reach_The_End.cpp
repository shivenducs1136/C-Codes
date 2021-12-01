#include<bits/stdc++.h>
using namespace std;

int max( int a, int b){
    if(a>b){
        return a; 
    }
    return b; 
}
int solve(int N,int M,vector<vector<int>> mat,int count,int i,int j){
    if(i == N && j == M){
        return count; 
    }
    else if(i>N || j>M ){
        return -1; 
    }
    return max(solve(N,M,mat,count+1,i+mat[i][j],j),solve(N,M,mat,count+1,i,j+mat[i][j])); 
    
}
 
int solution (int N, int M, vector<vector<int> > mat_val) {
   int d = solve(N,M,mat_val,0,1,1);
   return d; 
}
 
int main() {
 
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        int M;
        cin >> M;
        vector<vector<int> > mat_val(N, vector<int>(M));
        for (int i_mat_val = 0; i_mat_val < N; i_mat_val++)
        {
        	for(int j_mat_val = 0; j_mat_val < M; j_mat_val++)
        	{
        		cin >> mat_val[i_mat_val][j_mat_val];
        	}
        }
 
        int out_;
        out_ = solution(N, M, mat_val);
        cout << out_;
        cout << "\n";
    }
}