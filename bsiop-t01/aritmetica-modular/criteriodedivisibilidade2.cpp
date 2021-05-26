// https://neps.academy/br/exercise/263
#include <bits/stdc++.h>
using namespace std;

string num;

int main(){
    cin >> num;
    int tam = num.size();
    int r4, r9=0, r25;
    if (tam>=2){
        int last2d = (num[tam-2]-'0')*10 + num[tam-1]-'0';
        r4 = last2d%4; r25 = last2d%25;
    } else {
        int lastd = num[0]-'0';
        r4 = lastd%4; r25 = lastd%25;
    }

    for (int i=0; i<tam; i++){
        r9 = (r9 + num[i]-'0') % 9;
    }

    if (r4) cout << "N" << endl;
    else cout << "S" << endl;

    if (r9) cout << "N" << endl;
    else cout << "S" << endl;

    if (r25) cout << "N" << endl;
    else cout << "S" << endl;
}