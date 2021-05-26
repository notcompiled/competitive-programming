// https://neps.academy/br/exercise/266
#include <bits/stdc++.h>
using namespace std;

string num;

int main(){
    cin >> num;
    int tam = num.size(), lastpos = num[tam-1]-'0';
    int r2 = lastpos%2, r5 = lastpos%5, r3=0;

    for (int i=0; i<tam; i++){
        r3 = (r3 + num[i]-'0') % 3;
    }

    if (r2) cout << "N" << endl;
    else cout << "S" << endl;

    if (r3) cout << "N" << endl;
    else cout << "S" << endl;

    if (r5) cout << "N" << endl;
    else cout << "S" << endl;
}