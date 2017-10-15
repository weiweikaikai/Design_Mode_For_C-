/*************************************************************************
	> File Name: 1_main.cpp
	> Author: wk
	> Mail: 18402927708@163.com
	> Created Time: Sun 15 Oct 2017 04:26:58 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#include"1_factory.h"
#include"1_product.h"

int main()
{
    Factory* fac = new Factory();
    Product* p = fac->CreateProduct(); 
    
    return 0;
}

