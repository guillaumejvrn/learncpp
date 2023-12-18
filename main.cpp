#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "ca a l'air de marcher c bg ca" << std::endl;
    std::cout << "1 + 2 = " << 1 + 2 << std::endl;
    std::cout << "1 + 1,5 = " << 1 + 1.5 << std::endl;
    std::cout << "1 + 1 * 10 = " << 1 + 1 * 10 <<std::endl;
    std::cout << "(1 + 1) * 10 = " << (1 + 1) * 10 <<std::endl;

    int variable = 10;
    std::cout << "la variable est de " << variable << std::endl;
    int newvariable { 10 };
    std::cout << "la nouvelle variable est de " << newvariable << std::endl;
    int somme { 0 };
    somme = 10 + 10 + 10 + 10;
    std::cout << "la somme de 10 + 10 + 10 + 10 = " << somme << std::endl;
    somme = somme - 7;
    std::cout << "maintenant la somme est de " << somme << std::endl;

    return 0;
}
