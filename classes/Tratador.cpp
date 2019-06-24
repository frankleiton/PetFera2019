#include "Funcionario.cpp"

class Tratador : public Funcionario
{
protected:
    int nivel_de_segurança;
public:
    Tratador();
    Tratador(int nivel_de_segurança, int id, string nome, string cpf, short idade, short tipo_sanguineo, char fator_rh, string especialidade) : Funcionario(id, nome, cpf, idade, tipo_sanguineo, fator_rh, especialidade)
    {
        this->nivel_de_segurança = nivel_de_segurança;
    }
    ~Tratador();
};

