#include "function.h"

Word::Word()
{
    this->data = "";
    this->def = "";
    this->next = nullptr;
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
    this->next = nullptr;
}

int Word::hashFunction()
{
    int h = 0;
    for (int i = 0; i < 5; i++)
    {
        h += this->data[i] % 65;
    }
    return h;
}

Dictionary::Dictionary()
{
    Word tmp("", "");
    for (int i = 0; i < this->size; i++)
    {
        this->list.push_back(tmp);
    }
}

Dictionary::~Dictionary()
{
}
