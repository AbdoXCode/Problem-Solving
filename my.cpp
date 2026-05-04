#include <bits/stdc++.h>
using namespace std;

void swapRow(vector<vector<int>> &mat,int x,int y) {
    swap(mat[x],mat[y]);
}
void swapColumn(vector<vector<int>> &mat,int x,int y) {
    int n = mat.size();

    for (int i =0;i<n;i++) {
        swap(mat[i][x],mat[i][y]);
    }
}

int main() {
    int n,x,y;
    cin>>n>>x>>y;

    x--,y--;
    vector<vector<int>> mat(n , vector<int>(n));

    for (int i =0;i<n;i++) {
        for (int j =0;j<n;j++) {
            cin>>mat[i][j];
        }
    }

    swapRow(mat,x,y);
    swapColumn(mat,x,y);

    for (int i =0;i<n;i++) {
        for (int j =0;j<n;j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}