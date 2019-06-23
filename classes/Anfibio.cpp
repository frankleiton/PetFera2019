#include <ctime>
#include "Animal.cpp"

class Anfibio: public Animal
{
private:
    int total_de_mudas;
    time_t ultima_muda;

public:
    Anfibio(int total_de_mudas, time_t ultima_muda);
    ~Anfibio();

};

Anfibio::Anfibio(int total_de_mudas, time_t ultima_muda)
{
    this->total_de_mudas = total_de_mudas;
    this->ultima_muda = ultima_muda;
}

Anfibio::~Anfibio()
{
}
