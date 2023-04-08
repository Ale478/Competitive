#include <bits/stdc++.h>
using namespace std;

// Watermelon Exercise

int main(){

    int w;
    cin >> w;

    // w is an even number 
    if((w % 2 == 0)&&(w != 2)){
        cout << "YES" << endl;
    }

    // w is an odd number
    else{
        cout << "NO" << endl;
    }
}