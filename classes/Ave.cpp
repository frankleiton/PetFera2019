#include "Animal.cpp"

using namespace std;

class Ave : public Animal
{
private:
    double tamanho_do_bico_cm;
    double envergadura_das_asas;
public:
    Ave(double tamanho_do_bico_cm, double envergadura_das_asas, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo) : Animal(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, nome_batismo)
    {
        this->envergadura_das_asas = envergadura_das_asas;
        this->tamanho_do_bico_cm = tamanho_do_bico_cm;
    }
    ~Ave();
};

