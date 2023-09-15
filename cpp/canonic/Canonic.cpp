#include "Canonic.hpp"

Canonic::Canonic()
{
}
Canonic::Canonic(Canonic const & canonic) 
{
    *this = canonic;
    return ;
}

Canonic::~Canonic()
{
}

Canonic  &Canonic::operator=(Canonic const &  canonic) {
    return *this;
}
