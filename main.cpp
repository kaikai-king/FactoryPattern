#include <QCoreApplication>
#include "product.h"
#include "concrete_factory.h"
#include <iostream>
using namespace std;

#ifndef SAFEDELETE
#define SAFEDELETE(p){if(p){delete (p); (p)=NULL;}}
#endif

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    AFactory *pFactory = new BenzFactory();

    ICar *pBenz_Car = pFactory->CreateCar();
    cout<< "Benz Factory: "<< pBenz_Car->Name() <<endl;

    SAFEDELETE(pBenz_Car);
    SAFEDELETE(pFactory);

    pFactory = new BmwFactory();
    ICar *pBmw_Car = pFactory->CreateCar();
    cout <<"Bmw Factory: "<< pBmw_Car->Name() <<endl;

    SAFEDELETE(pBmw_Car);
    SAFEDELETE(pFactory);

    pFactory = new AudiFactory();
    ICar *pAudi_Car = pFactory->CreateCar();
    cout << "Audi Factory: " << pAudi_Car->Name() <<endl;

    SAFEDELETE(pAudi_Car);
    SAFEDELETE(pFactory);

    return a.exec();
}

//工厂方法模式（Factory Method Pattern）是一种常用的对象创建型设计模式，
//此模式的核心思想是封装类中不变的部分，
//提取其中个性化善变的部分为独立类，通过依赖注入以达到解耦、复用以及方便后期维护拓展的目的。

//优点:
//克服了简单工厂模式违背开放-封闭原则的缺点，又保留了封装对象创建过程的优点，降低客户端和工厂的耦合性。
//所以说，“工厂方法模式”是“简单工厂模式”的进一步抽象和推广。

//缺点:
//每增加一个产品，相应的也要增加一个子工厂，加大了额外的开发量。

//适用场景
//对于某个产品，调用者清楚地知道应该使用哪个具体工厂服务，实例化该具体工厂，生产出具体的产品来。
//只是需要一种产品，而不想知道也不需要知道究竟是哪个工厂生产的，即最终选用哪个具体工厂的决定权在生产者一方，
//它们根据当前系统的情况来实例化一个具体的工厂返回给使用者，而这个决策过程对于使用者来说是透明的。























