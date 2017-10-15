/*************************************************************************
	> File Name: Factory.h
	> Author: wk
	> Mail: 18402927708@163.com
	> Created Time: Sun 15 Oct 2017 04:00:19 PM CST
 ************************************************************************/

#ifndef FACTORY_H
#define FACTORY_H

class Product;

class Factory
{
  public:
      virtual ~Factory() = 0;
      virtual Product *CreateProduct() = 0;
  protected:
      Factory();
  private:


};

class ConcreteFactory:public Factory
{
    public:
        ~ConcreteFactory();
        ConcreteFactory();

        Product* CreateProduct();
    protected:

    private:
};














#endif
