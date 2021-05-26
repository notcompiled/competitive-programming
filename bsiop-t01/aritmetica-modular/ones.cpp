// https://www.urionlinejudge.com.br/judge/pt/problems/view/1213
#include <bits/stdc++.h>
using namespace std;

int num, cont, aux;

int main(){
    while (cin >> num){
        cont=1;
        aux=1;
        while (aux%num) {
            aux = (aux*10 + 1) % num;
            cont += 1;
        }
        cout << cont << endl;
    }
}
