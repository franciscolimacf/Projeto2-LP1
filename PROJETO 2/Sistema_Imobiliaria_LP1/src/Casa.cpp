#include "Casa.h"

Casa::Casa()
{
    numPavimentos=0;
    numQuartos=0;
    areaTerreno=0;
    areaConstruida=0;
}

Casa::Casa(int np, int nq, double aTerreno , double aConstruida)
{
    numPavimentos = np;
    numQuartos = nq;
    areaTerreno = aTerreno;
    areaConstruida = aConstruida;
}

int Casa::getNumPavimentos()
{
    return numPavimentos;
}

int Casa::getNumQuartos()
{
    return numQuartos;
}

double Casa::getAreaTerreno()
{
    return areaTerreno;
}

double Casa::getAreaConstruida()
{
    return areaConstruida;
}
