
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "siga.h"

// Cadastra um novo estudante na base de dados e imprima
// o numero de estudantes armazenados
int main(int argc, char* argv[])
{
    Siga siga("estudantes.bin");
    int matricula; 
#ifndef CLASSROOM 
    cout << "Entre com a matricula: ";
#endif
    cin >> matricula; 

    if(siga.PesquisaPorMatricula(matricula))
    {
        cout << "Estudante encontrado" << endl;
    }
    else
    {
        cout << "Estudante nao encontrado" << endl;
    }

    return 0;
}
