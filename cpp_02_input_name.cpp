// read and write a first name
#include <iostream>
#include <string>

int main() {
    std::cout<< "Digite seu nome e sobrenome: \n";
    std::string nome;
    std::string sobrenome;
    std::cin >> nome >> sobrenome;
    std::string nome_completo = nome + " " + sobrenome;

    std::cout << "Hello " << nome_completo << "!\n";
    std::cout << "Qual a sua idade? ";
    int idade = -1;
    std:: cin >> idade;
    std::cout << "Sua idade eh " << idade << " anos.";


}