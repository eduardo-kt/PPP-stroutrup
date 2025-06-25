#include <iostream>

// pag 49 exercicio [4]
// criar 2 integers calcular maior, menor, soma, diferença, produto e quociente
int main() {
    int var1 = 0;
    int var2 = 0;
    std::cout << "Digite 2 numeros inteiros: ";
    std::cin >> var1 >> var2;

    if(var1 > var2) {
        std::cout << "\nO maior numero eh " << var1;
        std::cout << "\nO menor numero eh " << var2;
    } 
    else {
        std::cout << "\nO maior numero eh " << var2;
        std::cout << "\nO menor numero eh " << var1;
    }

    std::cout << "\nA soma dos valores eh "<< var1+var2;
    std::cout << "\nA diferenca eh " << var2-var1 << " ou " << var1-var2;

    std::cout << "\nO produto eh " << var2*var1;
    std::cout << "\nO quociente eh " << 
        static_cast<double>(var1) / var2 << 
        " ou " << static_cast<double>(var2) / var1;
}