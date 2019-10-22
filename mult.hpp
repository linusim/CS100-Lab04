#ifndef __MULT_HPP__
#define __MULT_HPP__
#include <string>
#include "base.hpp"

class Mult : public Base {
	private:
		Base* left;
		Base* right;
	public:
		Mult( Base* first, Base* second);
		virtual double evaluate() { return ( this->left->evaluate() * this->right->evaluate() ); }
		virtual std::string stringify() { return ( this->left->stringify() + " * " + this->right->stringify() ); } 

};

Mult::Mult( Base* first, Base* second )
{
	left = first;
	right = second;
}

#endif //__MULT_HPP__
