/*
Drill página 47
*/
#include <iostream>
#include <string>

int main() {
    std::string destinatario = "";
    std::string fulano = "";
    int idade = 0;
    int heranca = 0;

    std::cout << "Digite o nome do destinatário: ";
    std::cin >> destinatario;
    std::cout << "Digite o nome do morto: ";
    std::cin >> fulano;
    
    std::cout << "Digite a idade que " << fulano << " faleceu: ";
    std::cin >> idade;

    std::cout << "Olá " << destinatario << ".\n\n";
    std::cout << "Escrevo esta carta para comunicar o seguinte ocorrido: \n";
    std::cout << fulano << " morreu!\n";
    std::cout << "Ele já estava com " << idade << " anos e não aguentou a cirurgia.";
    idade += 1;

    std::cout << "\nUma pena porque ele já fazia planos para seu aniversário de " 
        << idade << " anos."; 
    
    std::cout << "Ele deixou heranca? \n(1) sim (2) nao ";
    std::cin >> heranca;

    if(heranca == 1) {
        std::cout << "O sr. " << fulano << " partiu deixando heranca.";
    }
    else if(heranca == 2) {
        std::cout << "O sr. " << fulano << " partiu sem deixar heranca.";
    }
    else {
        std::cout << "Nao sabemos se o sr. " << fulano << " deixou heranca.";
    }


} 