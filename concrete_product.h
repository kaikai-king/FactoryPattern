#ifndef CONCRETE_PRODUCT_H
#define CONCRETE_PRODUCT_H

#include "product.h"
#include <string>
using namespace std;

//奔驰汽车
class BenzCar:public ICar
{
public:
    virtual string Name()
    {
        return "Benz Car";

    }

};

//宝马汽车
class BmwCar:public ICar
{

    virtual string Name()
    {

        return "Bmw Car";
    }

};

//奥迪汽车
class AudiCar:public ICar
{

    virtual string Name()
    {

        return "Audi Car";
    }

};


#endif // CONCRETE_PRODUCT_H
