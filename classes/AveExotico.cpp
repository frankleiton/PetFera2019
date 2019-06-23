#include <iostream>
#include "AnimalExotico.cpp"
#include "Ave.cpp"

using namespace std;

class AveExotico: public AnimalExotico, Ave
{
private:
    /* data */
public:
    AveExotico(/* args */);
    ~AveExotico();
};

AveExotico::AveExotico(/* args */)
{
}

AveExotico::~AveExotico()
{
}
