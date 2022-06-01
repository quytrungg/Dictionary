#include "function.h"

Word::Word()
{
}

Word::~Word()
{
}

Word::Word(std::string da)
{
    this->data = da;
}

Word::Word(std::string de)
{
    this->def = de;
}

Word::Word(std::string da, std::string de)
{
    this->data = da;
    this->def = de;
}

Dictionary::Dictionary()
{
}

Dictionary::~Dictionary()
{
}
