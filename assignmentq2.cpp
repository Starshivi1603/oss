#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string :";
    cin>>str;
    int l=str.length();
    int start=0;
    int last= l-1;
    while(start<last){
        int temp=str[start];
        str[start]=str[last];
        str[last]=temp;
        start++;
        last--;

    }
    cout<<str;

}
