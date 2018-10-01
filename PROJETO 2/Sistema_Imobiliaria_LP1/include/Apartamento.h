#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include <Imovel.h>



class Apartamento : public Imovel
{
    public:
        Apartamento();
        Apartamento(double,int,int,string,string,string,string,string,double,double,int,int,int,std::string);
        double getArea();
        double getValorCondominio();
        int getNumQuartos();
        int getAndar();
        int getVagasGaragem();
        std::string getPosicao();

    private:
        double area, valorCondominio;
        int numQuartos, andar, vagasGaragem;
        std::string posicao;
};

#endif // APARTAMENTO_H
