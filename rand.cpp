#ifndef __RAND_HPP__
#define __RAND_HPP__
#include <string>
#include "base.hpp"

clasee Rand : public Base {
	private:
		double val;

	public:
		Rand();
		virtual double evaluate() { return this->val; }
		virtual std::string stringify() { return std::to_string(this->val); }
};

Rand::Rand()
{
	val = rand() % 100;
}

#endif //__RAND_HPP__
