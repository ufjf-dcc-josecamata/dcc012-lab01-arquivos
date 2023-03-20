
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "siga.h"

// Insere dados de estudante no gerencia_siga e imprmir
// o numero de estudantes armazenados
int main(int argc, char* argv[])
{
    Siga siga;
    siga.SetDatabase("data/estudantes.bin");
    siga.AdicionaEstudante(Estudante("Felipe", 677, 2018, 7.5));
    cout << "Numero de estudantes armazenados: " << siga.ObterNumeroEstudantes() << endl;

    return 0;
}