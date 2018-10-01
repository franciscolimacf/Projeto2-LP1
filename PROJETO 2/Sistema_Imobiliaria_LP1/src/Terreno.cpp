#include "Terreno.h"

Terreno::Terreno()
{
   // tipoImovel = "Terreno";
}

Terreno::Terreno(double a)
{
    area = a;
}

double Terreno::getArea()
{
    return area;
}
