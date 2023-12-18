#include <iostream>
#include <vector>

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

    std::cout << "donne moi ton age bg " << std::endl;
    int age { 0 };
    //std::cin >> age;
    std::cout << "ton age est " << age << std::endl;

    int couscous { 1 };
    int camembert { 1 };
    if(couscous == camembert){
        std::cout << "c trop bon" << std::endl;
    }
    couscous = 1;
    camembert = 2;
    if(couscous == camembert){
        std::cout << "c trop bon" << std::endl;
    }
    else{
        std::cout << "c pas bon" <<std::endl;
    }


    std::vector<int> compter {1,2,3,4,5};
    std::cout << "la longeur du tableau est de " << std::size(compter) << std::endl;
    std::cout << "la derniere valeur est "  << compter.back() << std::endl;
    std::cout << "la troiseme valeur est " << compter[2] << std::endl;
    compter.assign(3,42);
    int i { 0 };
    for(i=0;i < std::size(compter);i++){
        std::cout << compter[i] << std::endl;
    }
    return 0;
}
