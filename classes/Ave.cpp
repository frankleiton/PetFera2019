#include "Animal.cpp"

using namespace std;

class Ave : public Animal
{
private:
    double tamanho_do_bico_cm;
    double envergadura_das_asas;
public:
    Ave(double tamanho_do_bico_cm, double envergadura_das_asas);
    ~Ave();
};

Ave::Ave(double tamanho_do_bico_cm, double envergadura_das_asas)
{
    this->envergadura_das_asas = envergadura_das_asas;
    this->tamanho_do_bico_cm = tamanho_do_bico_cm;
}

Ave::~Ave()
{
}
