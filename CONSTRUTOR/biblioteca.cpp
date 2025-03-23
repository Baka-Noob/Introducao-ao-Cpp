#include "livro.hpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string t, a;
    int y;

    cout << "Entre o nome do livro: ";
    getline(cin, t);
    //livro1.set_titulo(t);


    cout << "Entre o nome do autor: ";
    getline(cin, a);
    //livro1.set_autor(a);


    cout << "Entre o ano de publicacao: ";
    cin >> y;
    //livro1.set_ano(y);


    // Construtor
    livro livro1(t, a, y);

    cout << "\nO livro " << livro1.get_titulo() << " foi escrito por "
         << livro1.get_autor() << " e publicado em " << livro1.get_ano() << endl;

    return 0;
}