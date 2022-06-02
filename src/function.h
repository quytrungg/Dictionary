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
    Word *next;

protected:
public:
    Word();
    Word(std::string da);
    Word(std::string de);
    Word(std::string da, std::string de);
    int hashFunction();
    ~Word();
};

class Dictionary
{
private:
    int size = 130;
    std::vector<Word> list;

protected:
    //
public:
    Dictionary();
    ~Dictionary();
};

int stringToNum(std::string buf)
{
    return (char)toupper(buf[0]);
}

#endif