#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

#include <string>
using namespace std;

class livro
{
private:
    string titulo;
    string autor;
    int ano;

public:
    // Construtor
    livro (string titulo, string autor, int ano);

    // Setters
    //void set_titulo(string titulo);
    //void set_autor(string autor);
    //void set_ano(int ano);

    // Getters
    string get_titulo();
    string get_autor();
    int get_ano();
};
#endif