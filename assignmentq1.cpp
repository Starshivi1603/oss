#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the array :";
    int n;
    cin>>n;
    cout<<"Enter the elements of the array :";
    int arr[n];
    float sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Sum is :"<<sum<<endl;
    cout<<"Average is :"<<sum/n<<endl;

}
