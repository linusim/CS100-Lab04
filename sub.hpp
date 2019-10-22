#ifndef __SUB_HPP__
#define __SUB_HPP__
#include "base.hpp"
#include <string>

class Sub: public Base{
  private:
    Base* left;
    Base* right;
  public:
    Sub(Base* first, Base* second){left = first; right = second;}
    virtual double evaluate(){return (this->left->evaluate() - this->right->evaluate());}
    virtual std::string stringify(){return this->left->stringify() + " - " + this->right->stringify();}
 

};

#endif
