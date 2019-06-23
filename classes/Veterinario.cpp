#include <iostream>
#include "Funcionario.cpp"

using namespace std;

class Veterinario : public Funcionario
{
private:
    string cmv;
public:
    Veterinario(string cmv);
    ~Veterinario();
};

Veterinario::Veterinario(string cmv)
{
    this->cmv = cmv;
}

Veterinario::~Veterinario()
{
}
