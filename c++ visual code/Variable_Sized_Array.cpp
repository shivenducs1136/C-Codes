#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define op 1000
int main()
{
    int n, q, i, x, b, j;
    cin >> n >> q;
    int size;
    int a[n][n]
    for (i = 0; i < n; i++)
    {
        cin >> size;
        for (j = 0; j < size; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int k = 1; k <= q; k++)
    {
        cin >> x >> b;
        cout << a[x][b] << endl;
    }

    return 0;
}

// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;
// int main(){

//     int num,q,size_arr,ele;
//     cin>>num>>q;
//     vector<int> vec[num];
//     for(int i=0 ;i<num;i++){
//         cin>>size_arr;
//         for(int j=0;j<size_arr;j++){
//             cin>>ele;
//             vec[i].push_back(ele);
//         }
//     }
//     int vec_num,index;
//     for(int k=1;k<=q;k++){
//         cin>>vec_num>>index;
//         cout<<vec[vec_num][index]<<endl;
//     }

//     return 0;
// }

// #include <vector>
// #include <iostream>
// #include <algorithm>
// #define max 1000
// using namespace std;
// int main()
// {
//     int arr[max][max];
//     int n,q,i,j, length;
//     int r1,r2;
//     cin>>n>>q;
//     for(i=0;i<n;i++){
//         cin>>length;
//         for(j=0;j<length;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<q;i++){
//         cin>>r1>>r2;
//         cout<<arr[r1][r2]<<endl;
//     }

//     return 0;
// }