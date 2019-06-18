#include "Animal.cpp"

using namespace std;

class Reptil: public Animal
{
private:
    bool venenoso;
    string tipo_veneno;
public:
    Reptil(bool venenoso, string tipo_veneno);
    ~Reptil();
};

Reptil::Reptil(bool venenoso, string tipo_veneno)
{
    this->venenoso = venenoso;
    this->tipo_veneno = tipo_veneno;
}

Reptil::~Reptil()
{
}
