
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "siga.h"

// Testa a abertura do arquivo
int main(int argc, char* argv[])
{
    Siga siga;
    siga.SetDatabase("estudantes.bin");
    siga.LerCSV("estudantes.csv");
    if(siga.ObterNumeroEstudantes() != 3)
    {
        cout << "Erro: Numero de estudantes incorreto" << endl;
        return -1;
    }
    return 0;
}


