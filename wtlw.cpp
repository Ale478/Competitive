#include <bits/stdc++.h>
using namespace std;

// Way Too Long Words Exercise

int main(){

    int n;
    cin >> n;

    for (int i=0; i<n; i++){
        string word;
        cin >> word;

        int len = word.length();

        // here you have to compress

        if(len > 10){
            cout << word[0] << len-2 << word[len-1] << endl;
        }

        // here it should be left as is
        
        else{
            cout << word << endl;
        }
    }
}