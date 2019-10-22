#ifndef __ADD_HPP__
#define __OP_HPP__
#include "base.hpp"
#include "string"

class Add: public Base{
  private:
    Base* left;
    Base* right;
  public:
    Add(Base* first, Base* second){left = first; right = second;}
    virtual double evaluate(){return (this->left->evaluate() + this->right->evaluate());}
    virtual std::string stringify(){return this->left->stringify() + " + " + this->right->stringify();}
 

};

#endif
