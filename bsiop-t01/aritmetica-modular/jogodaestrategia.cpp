// https://www.urionlinejudge.com.br/judge/pt/problems/view/1940
#include <iostream>
#define N 502
using namespace std;

int v[N], jog, rod, ponto;

int main(){

    cin >> jog >> rod;
    for (int i=0; i<jog*rod; i++){
        cin >> ponto;
        v[(i%jog)] += ponto; 
    }

    int maior = -1, venc;
    for (int i=0; i<jog; i++){
        if (v[i] >= maior) {
            maior = v[i];
            venc = i+1;
        }
    }

    cout << venc << endl;
}