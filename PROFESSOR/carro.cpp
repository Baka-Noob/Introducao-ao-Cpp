#include <iostream>
#include "carro.h"

using namespace std;

    //construtor
    carro::carro(int a, float v, float k){
        ano = a;
        valor = v;
        km = k;
    }

    //get e set
    //ano

    /*
    void carro::setano(int a){
        ano = a;
        //this->ano = ano;
    }

    void carro::setvalor(float v){
        valor = v;
    }
    void carro::setkm(float k){
        km = k;
    }

    */
    
    int carro::getano(){
        return ano;
    }
    //valor
    
    float carro::getvalor(){
        return valor;
    }
    //km
    
    float carro::getkm(){
        return km;
    }