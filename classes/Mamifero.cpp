#include "Animal.cpp"

using namespace std;

class Mamifero : public Animal
{
private:
    string cor_do_pelo;
public:
    Mamifero( string cor_do_pelo, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo) : Animal(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, nome_batismo)
    {
        this->cor_do_pelo = cor_do_pelo;
    }
    ~Mamifero();
};