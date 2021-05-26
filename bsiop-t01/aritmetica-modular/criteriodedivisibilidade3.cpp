// https://neps.academy/br/exercise/272
#include <bits/stdc++.h>
using namespace std;

string num;

int main(){
    cin >> num;
    int tam = num.size(), r11, sp=0, si=0;

    for (int i=0; i<tam; i++){
        if ((i+1)%2 == 0) sp += num[i]-'0';
        else si += num[i]-'0';
    }
    r11 = (sp-si)%11;

    if (r11) cout << "N" << endl;
    else cout << "S" << endl;
}