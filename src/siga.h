#ifndef SIGA_H
#define SIGA_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "estudante.h"

class Siga
{
    public:
        Siga(string arquivo_estudante);
        void CadastraEstudante(Estudante est);
        bool PesquisaPorMatricula(int matricula);
        void ImprimeEstudantePorMatricula(int matricula);
        void AlteraCadastroEstudante(Estudante est);
        void SalvaListaEstudanteEmTexto(string arquivo_txt);
        int ObterNumeroEstudantesArmazenados();
        ~Siga();
    private:

        // Funcao auxiliar 
        size_t CalculaPosicaoRegistroEstudante(int id_estudante);

        // atributos
        string   arquivo_nome;
        fstream  file_stream;
        int      n_estudantes;
};

#endif /* SIGA_H */
