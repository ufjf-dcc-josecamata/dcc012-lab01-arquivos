
#include <cstring>
#include <iostream>
#include <fstream>

#include "estudante.h"

using namespace std;

Estudante::Estudante(char* nome, int matricula, int ira):
    _matricula(matricula), _ira(ira)
    {    
        strcpy(_nome,nome);
    }
        
int Estudante::ObterMatricula()
{
    return this->_matricula;
}
        
const char* Estudante::ObterNome()
{
    return this->_nome;

}
        
float       Estudante::ObterIra()
{
    return this->_ira;
}

void         Estudante::TrocarMatricula(int matricula)
{
    this->_matricula = matricula;
}

void Estudante::TrocarNome(const char* nome)
{
    strcpy(_nome,nome);
}
        
void Estudante::TrocarIra(int ira)
{
    this->_ira = ira;
}

void Estudante::Imprimir()
{
    cout <<"Nome: " << this->_nome << endl;
    cout <<"Matricula: " << this->_matricula << endl;
    cout <<"IRA: " << this->_matricula << endl; 
}

void Estudante::LerDoArquivoBinario(fstream &file)
{
    file.read((char*)&this->_matricula, sizeof(int));
    file.read((char*) this->_nome, sizeof(char*)*STR_MAX_SIZE);
    file.read((char*)&this->_ira, sizeof(float));
}

void Estudante::EscreverNoArquivoBinario(fstream &file)
{
    file.write((char*)&this->_matricula, sizeof(int));
    file.write((char*) this->_nome     , sizeof(char*)*STR_MAX_SIZE);
    file.write((char*)&this->_ira      , sizeof(float));
}

