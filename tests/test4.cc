#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "siga.h"

// Inprime Informações de um estudante na base de dados 
int main(int argc, char* argv[])
{
    Siga siga("estudantes.bin");
    int matricula; 
#ifndef CLASSROOM 
    cout << "Entre com a matricula: ";
#endif
    cin >> matricula; 

    siga.ImprimeEstudantePorMatricula(matricula);


    return 0;
}
