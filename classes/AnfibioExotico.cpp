#include <iostream>
#include "AnimalExotico.cpp"
#include "Anfibio.cpp"

using namespace std;

class AnfibioExotico : public AnimalExotico, Anfibio
{
private:
    /* data */
public:
    AnfibioExotico(string pais_origem, string autorizacao_ibama, int total_de_mudas, time_t ultima_muda, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo) : AnimalExotico(pais_origem, autorizacao_ibama), Anfibio(total_de_mudas, ultima_muda, id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, nome_batismo)
    {

    }
    ~AnfibioExotico();
};
