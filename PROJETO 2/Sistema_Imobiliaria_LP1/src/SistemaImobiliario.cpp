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

    cout << "Digite o im�vel que voc� deseja cadastrar: \nCasa (1) Apartamento (2) Terreno (3)"  << endl;
    cin >>  tipoImovel;

    cout << "O im�vel encontra-se para venda (1) ou aluguel (2)?" << endl;
    cin >> tipoOferta;

    cout << "Fa�a uma descri��o para o seu im�vel: " << endl;
    getline(cin, descricao);

    cout << "Digite a rua do seu im�vel: " << endl;
    getline(cin, rua);

    cout << "Digite o n�mero do im�vel: " << endl;
    cin >> numero;

    cout << "Digite o bairro do im�vel: " << endl;
    getline(cin, bairro);

    cout << "Digite a cidade do im�vel: " << endl;
    getline(cin, cidade);

    cout << "Digite o CEP do im�vel: " << endl;
    cin >> CEP;

    if(tipoImovel == 1)

    int numPavimentos, numQuartos;
    double areaTerreno, areaConstruida;

    cout << "Digite o n�mero de pavimentos: " << endl;
    cin >> numPavimentos;

    cout << "Digite o n�mero de quartos: " << endl;
    cin >> numQuartos;

    cout << "Digite a �rea do terreno: " << endl;
    cin >> areaTerreno;

    cout << "Digite a �rea constru�da: "  << endl;
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

