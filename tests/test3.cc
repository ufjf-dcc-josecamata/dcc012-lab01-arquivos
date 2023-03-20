
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "siga.h"

// Cadastra um novo estudante na base de dados e imprima
// o numero de estudantes armazenados
int main(int argc, char* argv[])
{
    Siga siga;
    siga.SetDatabase("data/estudantes.bin");
    int idx = siga.PesquisaPorMatricula(677);
    if(idx == -1)
        return -1;

    return 0;
}