#ifndef __POW_HPP__
#define __POW_HPP__
#include "base.hpp"
#include <string>

class Pow: public Base{
  private:
    Base* left;
    Base* right;
  public:
    Pow(Base* first, Base* second){left = first; right = second;}
    virtual double evaluate();
    virtual std::string stringify(){return this->left->stringify() + " ** " + this->right->stringify();}
    

};

double Pow::evaluate(){
    double power = right->evaluate();
    double base = left->evaluate();
    if(power == 0){
        return 1;
    }
    for(int i = 1; i < power; i++){
        power = power * power;
    }
    return power;
}

#endif
