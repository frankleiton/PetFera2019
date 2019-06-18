#include "Funcionario.cpp"

class Tratador : Funcionario
{
private:
    int nivel_de_segurança;
public:
    Tratador(int nivel_de_segurança);
    ~Tratador();
};

Tratador::Tratador( int nivel_de_segurança)
{
    this->nivel_de_segurança = nivel_de_segurança;
}

Tratador::~Tratador()
{
}
