#include <ctime>
#include "Animal.cpp"

class Anfibio: public Animal
{
private:
    int total_de_mudas;
    time_t ultima_muda;

public:
    Anfibio(int total_de_mudas, time_t ultima_muda, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo) : Animal(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, nome_batismo)
    {
        this->total_de_mudas = total_de_mudas;
        this->ultima_muda = ultima_muda;
    }

    ~Anfibio();

};
