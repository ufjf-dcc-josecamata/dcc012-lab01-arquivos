
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

    siga.CadastraEstudante(Estudante("Ana",1001, 2006, 9.5));

    cout << "Numero de estudantes armazenados: " << siga.ObterNumeroEstudantesArmazenados() << endl;

    return 0;
}