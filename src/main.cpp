#include "fobjetivo.hpp"

#include <iostream>
#include <vector>

void asignarcoeficientes(std::vector<int>&, const unsigned &);
void mostrarcoeficientes(const std::vector<int>&);


int main(){
    fobjetivo fo;
    unsigned tam{0};
    std::string objetivo = " ";
    std::vector<int> vect_coeficientes;

    std::cout<<"Ingresar Objetivo: Max(z) \242 Min(z)\nObjetivo = ";
    std::cin>>objetivo;

    std::cout<<"Ingrese el n\243mero de variables de decisi\242n\nn\243mero = ";
    std::cin>>tam;

    fo.setVarz(objetivo);
    fo.setNumvar(tam);

    asignarcoeficientes(vect_coeficientes, fo.getNumvar());
    std::cout << "\tFO: " << fo.getVarz() << " = ";
    mostrarcoeficientes(vect_coeficientes);

    return 0;
}

void asignarcoeficientes(std::vector<int>& vect, const unsigned &tam) {
    int coef_temp{0};
    unsigned indice{0};
    for(unsigned num = 0; num < tam; ++num){
        std::cout<<"Ingrese el coeficiente de X["<< ++indice << "]" << " = ";
        std::cin>>coef_temp;
        vect.push_back(coef_temp);
    }
}

void mostrarcoeficientes(const std::vector<int>& vect){
    unsigned subnumeros{0};
    for (const auto& valor : vect)
        std::cout << "+" << valor << "X" << ++subnumeros << '\t';
}
