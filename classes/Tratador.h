#ifndef TRATADOR_H
#define TRATADOR_H

class Tratador : public Funcionario
{
protected:
    int nivel_de_seguranca;
public:
    Tratador();
    Tratador(int nivel_de_seguranca, int id, string nome, string cpf, short idade, short tipo_sanguineo, char fator_rh, string especialidade);
    ~Tratador();
};

#endif