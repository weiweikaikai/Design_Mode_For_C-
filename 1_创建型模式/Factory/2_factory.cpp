/*************************************************************************
	> File Name: 1_Factory.cpp
	> Author: wk
	> Mail: 18402927708@163.com
	> Created Time: Tue 22 Aug 2017 09:53:18 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#include "2_factory.h"
#include "2_product.h"


Factory::Factory()
{
}
Factory::~Factory()
{
}
ConcreteFactory::ConcreteFactory()
{
    cout<<"ConcreteFactory....."<<endl;
}
ConcreteFactory::~ConcreteFactory()
{
    cout<<"~ConcreteFactory....."<<endl;
}
Product* ConcreteFactory::CreateProduct()
{
    return new ConcreteProduct();
}
