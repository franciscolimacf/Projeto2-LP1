#include "SistemaImobiliario.h"

SistemaImobiliario::SistemaImobiliario()
{
    //ctor
}

SistemaImobiliario::~SistemaImobiliario()
{
    //dtor
}
void SistemaImobiliario::cadastrarImovel()
{
    double valor;
    int tipoOferta, tipoImovel;
    std::string descricao, rua, numero, bairro, cidade, CEP;

    cout << "Digite o imóvel que você deseja cadastrar: \nCasa (1) Apartamento (2) Terreno (3)"  << endl;
    cin >>  tipoImovel;

    cout << "O imóvel encontra-se para venda (1) ou aluguel (2)?" << endl;
    cin >> tipoOferta;

    cout << "Faça uma descrição para o seu imóvel: " << endl;
    getline(cin, descricao);

    cout << "Digite a rua do seu imóvel: " << endl;
    getline(cin, rua);

    cout << "Digite o número do imóvel: " << endl;
    cin >> numero;

    cout << "Digite o bairro do imóvel: " << endl;
    getline(cin, bairro);

    cout << "Digite a cidade do imóvel: " << endl;
    getline(cin, cidade);

    cout << "Digite o CEP do imóvel: " << endl;
    cin >> CEP;

    if(tipoImovel == 1)

    int numPavimentos, numQuartos;
    double areaTerreno, areaConstruida;

    cout << "Digite o número de pavimentos: " << endl;
    cin >> numPavimentos;

    cout << "Digite o número de quartos: " << endl;
    cin >> numQuartos;

    cout << "Digite a área do terreno: " << endl;
    cin >> areaTerreno;

    cout << "Digite a área construída: "  << endl;
    cin >> areaConstruida;

    limovel.push_back(Casa(valor, ))

    else if()

}
list<Imovel> SistemaImobiliario::getImoveis()
{

}

list<string> SistemaImobiliario::getDescricao()
{

}

list<Imovel> SistemaImobiliario::getImoveisPorTipo(int)
{

}

list<Imovel> SistemaImobiliario::getImoveisParaAlugarPorBairro(std::string)
{

}

list<Imovel> SistemaImobiliario::getImoveisParaVenderPorBairro(std::string)
{

}

list<Imovel> SistemaImobiliario::getImoveisPorCidade(std::string)
{

}

