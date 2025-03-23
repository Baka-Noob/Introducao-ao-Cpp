#include "biblioteca.hpp"
#include <iostream>
#include <string>

using namespace std;

// livro(string nome, string autor, int ano);

// Setters
void livro::set_titulo(string titulo)
{
    this->titulo = titulo;
}
void livro::set_autor(string autor)
{
    this->autor = autor;
}
void livro::set_ano(int ano)
{
    this->ano = ano;
}

// Getters
string livro::get_titulo()
{
    return titulo;
}
string livro::get_autor() { return autor; }
int livro::get_ano() { return ano; }