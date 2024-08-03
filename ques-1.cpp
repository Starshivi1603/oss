#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    cout << "Enter a paragraph of text:" << endl;
    string paragraph;
    getline(cin, paragraph);
    cout << "Paragraph you entered:\n" << paragraph << endl;
    map<string, int> M;
    string word="";
    for(int i=0;i<paragraph.size();i++){
        if(paragraph[i]==' '){
            if(M.find(word)==M.end()){
                M.insert(make_pair(word,1));
                word="";
            }
            else{
                M[word]++;
                word="";
            }
        }
        else word+=paragraph[i];
    }
     if (M.find(word) == M.end())
        M.insert(make_pair(word, 1));

    // Update the frequency
    else
        M[word]++;
    for(auto& it:M){
        cout<<it.first<<"-"<<it.second<<endl;
    }

    return 0;


}
