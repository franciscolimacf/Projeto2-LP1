#include "Imovel.h"

Imovel::Imovel()
{
    valor=0;
    tipoOferta=0;
    tipoImovel=0;
    rua="";
    numero="";
    bairro="";
    cidade="";
    CEP="";
}

void Imovel::setValor(double v)
{
    valor = v;
}

void Imovel::setTipoOferta(int to)
{
    tipoOferta = to;
}

void Imovel::setTipoImovel(int ti)
{
    tipoImovel = ti;
}

void Imovel::setRua(std::string r)
{
    rua = r;
}

void Imovel::setNumero(std::string n)
{
    numero = n;
}

void Imovel::setBairro(std::string b)
{
    bairro = b;
}

void Imovel::setCidade(std::string ci)
{
    cidade = ci;
}

void Imovel::setCEP(std::string cep)
{
    CEP = cep;
}

double Imovel::getValor()
{
    return valor;
}

int Imovel::getTipoOferta()
{
    return tipoOferta;
}

int Imovel::getTipoImovel()
{
    return tipoImovel;
}

std::string Imovel::getRua()
{
    return rua;
}

std::string Imovel::getNumero()
{
    return numero;
}

std::string Imovel::getBairro()
{
    return bairro;
}

std::string Imovel::getCidade()
{
    return cidade;
}

std::string Imovel::getCEP()
{
    return CEP;
}
