#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter the dimensions of Matrix";
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    cout<<"Enter the elements of the matrix";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

}
