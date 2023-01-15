#include <iostream>
#include <typeinfo>
#include <exception>
#include <string>
#include <fstream>
using namespace std;

class PLUS {

public:
    PLUS()
    {
        num = 0;
    }

    PLUS(int Numer)
    {
        this->num = Numer;
    }

    string Sign()
    {
        return "+";
    }

    string Operation()
    {
        return "Addition";
    }

   int operator + (const PLUS &other)
    {
       cout << "+ chek" << endl;
        this->num = this->num + other.num;
        return num;
    }

  
    int operator = (const PLUS& other)
   {
      cout << "= chek" << endl;
       this->num = other.num;
       return num;
   }

    /*~PLUS()
    {
        cout << "Destructor chek" << endl;
    }
    */

   void Print()
   {
       cout << num << endl;
   }

private:
    int num;
};


class MULT
{
public:
    MULT()
    {
        num = 0;
    }

    MULT(int Numer)
    {
        this->num = Numer;
    }

    string Sign()
    {
        return "*";
    }

    string Operation()
    {
        return "Multiplication";
    }


    int operator * (const MULT& other)
    {
        cout << "* chek" << endl;
        this->num = this->num * other.num;
        return num;
    }


    int operator = (const MULT& other)
    {
        cout << "= chek" << endl;
        this->num = other.num;
        return num;
    }

    /*~PLUS()
    {
        cout << "Destructor chek" << endl;
    }
    */

    void Print()
    {
        cout << num << endl;
    }

private:
    int num;
};


class SUB
{
public:
    SUB()
    {
        num = 0;
    }

    SUB(int Numer)
    {
        this->num = Numer;
    }

    string Sign()
    {
        return "-";
    }

    string Operation()
    {
        return "Subtraction";
    }

    int operator - (const SUB& other)
    {
        cout << "- chek" << endl;
        this->num = this->num - other.num;
        return num;
    }


    int operator = (const SUB& other)
    {
        cout << "= chek" << endl;
        this->num = other.num;
        return num;
    }

    /*~PLUS()
    {
        cout << "Destructor chek" << endl;
    }
    */

    void Print()
    {
        cout << num << endl;
    }

private:
    int num;

};


class Point
{
private:
    double x;
    double y;
    double Z;
public:
    
    Point()
    {
        x = 0;
        y = 0;
        Z = 0;
    }

    Point(double X, double Y)
    {
        this->x = X;
        this->y = Y;
        this->Z = 0;
    }


    void Print()
    {
        cout << x << "  " << y << endl;
    }

    void PrintZ()
    {
        cout << Z << endl;
    }


    double RAST(const Point& other)
    {
        this->Z = sqrt(pow((other.x - this->x),2) + pow((other.y - this->y), 2));
        return Z;
    }

};


int main() {
    PLUS a(2), b(10);
    PLUS c;
    c.Operation();
    c.Sign();
    c.Print();
    c = a + b;
    c.Print();
    SUB d(10), e(5);
    SUB f;
    f.Operation();
    f.Sign();
    f.Print();
    f = d - e;
    f.Print();
    MULT g(10), h(2);
    MULT i;
    i.Operation();
    i.Sign();
    i.Print();
    i = g * h;
    i.Print();
    Point j(10, 10), l(2, 2);
    j.Print();
    j.PrintZ();
    j.RAST(l);
    j.PrintZ();
    
    return 0;
}


//std::cout << typeid(b).name() << std::endl;


/*
template<class T>
class Named {
public:
    std::string getName() {
        return typeid(T).name();
    }
};

class Foo : public Named<Foo> { };

int main() {
    std::cout << Foo().getName() << std::endl;
    return 0;
} */