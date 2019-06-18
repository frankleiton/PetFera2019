#include "Animal.cpp"

using namespace std;

class Mamifero : public Animal
{
private:
    string cor_do_pelo;
public:
    Mamifero( string cor_do_pelo);
    ~Mamifero();
};

Mamifero::Mamifero( string cor_do_pelo)
{
    this->cor_do_pelo = cor_do_pelo;
}

Mamifero::~Mamifero()
{
}
