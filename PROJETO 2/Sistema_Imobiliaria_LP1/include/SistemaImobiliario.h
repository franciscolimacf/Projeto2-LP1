#ifndef SISTEMAIMOBILIARIO_H
#define SISTEMAIMOBILIARIO_H
#include <list>
#include <iostream>
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"

using namespace std;

class SistemaImobiliario
{
private:
    Imovel *imovel;
    list<Imovel> limovel;

public:
    SistemaImobiliario();
    virtual ~SistemaImobiliario();
    void cadastrarImovel();
    list<Imovel> getImoveis();
    list<string> getDescricao();
    list<Imovel> getImoveisPorTipo(int);
    list<Imovel> getImoveisParaAlugarPorBairro(string);
    list<Imovel> getImoveisParaVenderPorBairro(string);
    list<Imovel> getImoveisPorCidade(string);
};

#endif // SISTEMAIMOBILIARIO_H
