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
    cout<<"ConcreteFactory....."<<endl;
}
Factory::~Factory()
{
}
Product* Factory::CreateProduct()
{
    return new ConcreteProduct();
}
