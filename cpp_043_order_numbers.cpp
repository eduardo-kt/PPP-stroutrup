#include <iostream>
using namespace std;

// exercicio 6 pg 49
// toma 3 números inteiros e cria ordem ascendente com eles
int main() {
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;

    cout << "Digite 3 numeros separados por white space: ";
    cin >> n1 >> n2 >> n3;

    if(n1<=n2) {
        if(n2<=n3) {
            cout << "\n " << n1 << " < " << n2 << " < " << n3;
        } else {
            if(n1<=n3) {
                cout << "\n " << n1 << " < " << n3 << " < " << n2;    
            }
            else {
                cout << "\n " << n3 << " < " << n1 << " < " << n2;
            }
            
        }
    } else {
        if(n1<=n3) {
            cout << "\n " << n2 << " < " << n1 << " < " << n3;
        } else {
            if(n2 <=n3) {
                cout << "\n " << n2 << " < " << n3 << " < " << n1;
            }
            else {
                cout << "\n " << n3 << " < " << n2 << " < " << n1;
            }            
        }
    }
}