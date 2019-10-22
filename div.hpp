#ifndef __DIV_HPP__
#define __ DIV_HPP__
#include <string>
#include "base.hpp"

class Div : public Base {
	private:
		Base* left;
		Base* right;
	public:
		Div( Base* first, Base* second);
		virtual double evaluate() { return ( this->left->evaluate() / this->right->evaluate() ); }
		virtual std::string stringify() { return ( this->left->stringify() + " / " + this->right->stringify() ); }

};

Div::Div( Base* first, Base* second )
{
	left = first;
	right = second;
}

#endif //__DIV_HPP__
