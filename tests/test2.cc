
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "siga.h"

// Insere dados de estudante no gerencia_siga e imprmir
// o numero de estudantes armazenados
int main(int argc, char* argv[])
{
    Siga siga("estudantes.bin");
    siga.CadastraEstudante(Estudante("Joao", 123, 2000, 9.5));
    siga.CadastraEstudante(Estudante("Maria", 456, 2001, 8.5));
    siga.CadastraEstudante(Estudante("Pedro", 789, 2002, 7.5));
    siga.CadastraEstudante(Estudante("Jose", 101, 2003, 6.5));

    cout << "Numero de estudantes armazenados: " << siga.ObterNumeroEstudantesArmazenados() << endl;

    return 0;
}