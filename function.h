#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Word
{
private:
    std::string data;
    std::string def;

protected:
public:
    Word();
    Word(std::string da);
    Word(std::string de);
    Word(std::string da, std::string de);
    ~Word();
};

class Dictionary
{
private:
    //
protected:
    //
public:
    Dictionary();
    ~Dictionary();
};

#endif