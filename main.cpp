#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>

void rectangle(int longeur, int largeur, int increment ,int deuxiemeincrement) {
    for (deuxiemeincrement = 0; deuxiemeincrement < largeur; deuxiemeincrement++) {
        for (increment = 0; increment < longeur; increment++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

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
        std::cout << "c pas bon" << std::endl;
    }


    std::vector<int> compter {1,2,3,4,5};
    std::cout << "la longeur du tableau est de " << std::size(compter) << std::endl;
    std::cout << "la derniere valeur est "  << compter.back() << std::endl;
    std::cout << "la troiseme valeur est " << compter[2] << std::endl;
    compter.assign(3,42);

    compter.clear();
    int k { 0 };
    for(k=0; k <10; k++){
        compter.push_back(k+1);
    }
    int i { 0 };
    for(i=0;i < std::size(compter);i++){
        std::cout << "nb " << compter[i] << std::endl;
    }

    auto iterateur { std::begin(compter) };
    std::cout << "iterateur " << *iterateur << std::endl;

    std::string mot { "llanche" };
    std::cout << mot << std::endl;
    std::cout << "faute d'orthographe" << std::endl;
    auto const itera { std::begin(mot) };
    *itera = 'p';
    std::cout << mot << " c mieux mainteant" << std::endl;

    std::vector<double> constantes_mathematiques { 2.71828, 3.1415, 1.0836, 1.4142, 1.6180 };
    std::sort(std::begin(constantes_mathematiques),std::end(constantes_mathematiques));
    for (auto constante : constantes_mathematiques){
        std::cout << constante << std::endl;
    }

    std::cout << R"(aaaaa "aaaaaa"aaaaaa)" << std::endl;

    std::ofstream fichier { "fichier.txt",std::ios::app };
    fichier << "couscous " << 10 << std::endl;
    fichier << "ah let's go j'ai bien mange a la cantine";

    std::ifstream lecture { "fichier.txt" };
    std::string contenu {};
    lecture >> contenu >> std::ws;
    std::cout << contenu << std::endl;

    rectangle(2, 3, 0 ,0);

    return 0; //couscous
}
