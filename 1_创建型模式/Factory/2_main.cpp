/*************************************************************************
	> File Name: main.cpp
	> Author: wk
	> Mail: 18402927708@163.com
	> Created Time: Sun 15 Oct 2017 04:15:14 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#include"2_factory.h"
#include"2_product.h"


int main()
{

    Factory* fac = new ConcreteFactory();
    Product* p = fac->CreateProduct(); 
   
//    Product* p2 = (new ConcreteFactory())-> CreateProduct();
    
    return 0;
}

