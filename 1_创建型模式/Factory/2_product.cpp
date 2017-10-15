/*************************************************************************
	> File Name: product.cpp
	> Author: wk
	> Mail: 18402927708@163.com
	> Created Time: Sun 15 Oct 2017 04:10:33 PM CST
 ************************************************************************/
#include<iostream>
using namespace std;



#include"2_product.h"

Product::Product()
{}
Product::~Product()
{}

ConcreteProduct::ConcreteProduct()
{
  cout<<"ConcreteProduct..."<<endl;
}
ConcreteProduct::~ConcreteProduct()
{
  cout<<"~ConcreteProduct..."<<endl;
}

