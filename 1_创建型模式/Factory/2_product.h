/*************************************************************************
	> File Name: product.h
	> Author: wk
	> Mail: 18402927708@163.com
	> Created Time: Sun 15 Oct 2017 04:09:53 PM CST
 ************************************************************************/

#ifndef _PRODUCT_H
#define _PRODUCT_H


class Product
{
    public:
        virtual ~Product() = 0;
    protected:
        Product();
    private:

};

class ConcreteProduct:public Product
{
    public:
        ~ConcreteProduct();
        ConcreteProduct();
   protected:

   private:

};


#endif
