#include "fobjetivo.hpp"

//Constructores
fobjetivo::fobjetivo()
    : numvar{0}, z{"Z"}
{}

fobjetivo::fobjetivo(const unsigned &num,const std::string &vz)
    : numvar{num}, z{vz}
{}

//Getters
unsigned fobjetivo::getNumvar(){
    return numvar;
}

std::string fobjetivo::getVarz(){
    return z;
}

//Setters
void fobjetivo::setNumvar(const unsigned &num){
    numvar = num;
}

void fobjetivo::setVarz(const std::string &vz){
    z = vz;
}
