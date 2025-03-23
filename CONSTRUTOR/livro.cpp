#include "livro.hpp"
#include <iostream>
#include <string>

using namespace std;

// Construtor
livro::livro(string titulo, string autor, int ano)
{
    this->titulo = titulo;
    this->autor = autor;
    this->ano = ano;
}

/*
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
*/

// Getters
string livro::get_titulo()
{
    return titulo;
}
string livro::get_autor() 
{ 
    return autor; 
}
int livro::get_ano() 
{ 
    return ano; 
}