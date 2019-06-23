#include <iostream>
#include "AnimalNativo.cpp"
#include "Anfibio.cpp"

using namespace std;

class AnfibioNativo : public AnimalNativo, Anfibio
{
private:
    /* data */
public:
    AnfibioNativo(string uf_origem, string autorizacao, string autorizacao_ibama, int total_de_mudas, time_t ultima_muda, int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo): AnimalNativo(uf_origem, autorizacao, autorizacao_ibama), Anfibio(total_de_mudas, ultima_muda, id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, nome_batismo)
    {

    }
    ~AnfibioNativo();
};

