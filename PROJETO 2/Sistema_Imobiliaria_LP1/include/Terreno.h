#ifndef TERRENO_H
#define TERRENO_H

#include <Imovel.h>

class Terreno : public Imovel
{
    public:
        Terreno();
        Terreno(double, int,int,string,string,string,string,string,double);
        double getArea();

    private:
        double area;
};

#endif // TERRENO_H
