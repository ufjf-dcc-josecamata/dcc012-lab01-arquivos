#ifndef SIGA_H__
#define SIGA_H__

#include "estudante.h"

class GerenciaSiga
{
    public:

        GerenciaSiga(string arquivo_estudante);
        void CadastraEstudante(Estudante& est);
        bool PesquisaPorMatricula(int matricula);
        void ImprimeEstudantePorMatricula(int matricula);
        void ImprimeListaEstudante();
        void AlteraCadastroEstudante(Estudante& est);
        ~GerenciaSiga();
    private:
        string  arquivo_nome;
        fstream file_stream;
        int      n_estudantes;
}

#endif /* SIGA_H__ */
