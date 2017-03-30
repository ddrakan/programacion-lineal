#ifndef PLINEAL_FOBJETIVO_HPP
#define PLINEAL_FOBJETIVO_HPP

#include <string>

class fobjetivo{
    public:

        fobjetivo();
        fobjetivo(const unsigned &,const std::string &);

        unsigned getNumvar();
        std::string getVarz();
        void setNumvar(const unsigned &);
        void setVarz(const std::string &);

    private:
        unsigned numvar;
        std::string z;
};
#endif
