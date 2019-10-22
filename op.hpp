#ifndef __OP_HPP__
#define __OP_HPP__
#include <string>
#include "base.hpp"

class Op : public Base {
    private:
	double val;

    public:
        Op(double value);
        virtual double evaluate() { return this->val; }
        virtual std::string stringify() { return std::to_string(this->val); }
};

Op::Op(double value)
{
	val = value;
}

class SevenOpMock: public Base {
    public:
        SevenOpMock() { };

        virtual double evaluate() { return 7.5; }
        virtual std::string stringify() { return "7.5"; }
};

class NegativeOpMock: public Base {
    public:
        NegativeOpMock() { };

        virtual double evaluate() { return -7.5; }
        virtual std::string stringify() { return "-7.5"; }
};

class ZeroOpMock: public Base {
    public:
        ZeroOpMock() { };

        virtual double evaluate() { return 0; }
        virtual std::string stringify() { return "0"; }
};

class TwentySixOpMock: public Base {
    public:
        TwentySixOpMock() { };

        virtual double evaluate() { return 26; }
        virtual std::string stringify() { return "26"; }
};

class EightMock: public Base {
    public:
	EightMock() { };
	
	virtual double evaluate() { return 8; }
	virtual std::string stringify() { return "8"; }
};

#endif //__OP_HPP__
