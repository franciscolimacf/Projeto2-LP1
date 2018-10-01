#include "Apartamento.h"

Apartamento::Apartamento()
{
   // tipoImovel = "Apartamento";
}
Apartamento::Apartamento(double,int,int,string,string,string,string,string,double ar, double vc, int nq, int a, int vg, std::string p)
{
    area = ar;
    valorCondominio = vc;
    numQuartos = nq;
    andar = a;
    vagasGaragem = vg;
    posicao = p;
}

double Apartamento::getArea()
{
    return area;
}

double Apartamento::getValorCondominio()
{
    return valorCondominio;
}

int Apartamento::getNumQuartos()
{
    return numQuartos;
}

int Apartamento::getAndar()
{
    return andar;
}

int Apartamento::getVagasGaragem()
{
    return vagasGaragem;
}

std::string Apartamento::getPosicao()
{
    return posicao;
}
