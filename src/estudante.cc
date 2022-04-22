
#include <cstring>
#include <iostream>
#include <fstream>

#include "estudante.h"

using namespace std;


Estudante::Estudante(const char* nome, int matricula, int ano_ingresso, float ira)
{    
    strcpy(_nome,nome);
    _matricula    = matricula;
    _ano_ingresso = ano_ingresso;
    _ira          = ira;
}
        
int Estudante::ObterMatricula()
{
    return this->_matricula;
}
        
const char* Estudante::ObterNome()
{
    return this->_nome;

}
        
float Estudante::ObterIra()
{
    return this->_ira;
}

void Estudante::TrocarMatricula(int matricula)
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
    //CHECK: veja como é feita a leitura do arquivo binário!
    file.read((char*)&_nome, sizeof(_nome));
    file.read((char*)&_matricula, sizeof(_matricula));
    file.read((char*)&_ano_ingresso, sizeof(_ano_ingresso));
    file.read((char*)&_ira, sizeof(_ira));
}

void Estudante::EscreverNoArquivoBinario(fstream &file)
{
    //CHECK: veja como é feita a escrita do arquivo binário!
    file.write((char*)&_nome, sizeof(_nome));
    file.write((char*)&_matricula, sizeof(_matricula));
    file.write((char*)&_ano_ingresso, sizeof(_ano_ingresso));
    file.write((char*)&_ira, sizeof(_ira));
}
