#ifndef ESTUDANTE_H__
#define ESTUDANTE_H__

#include <fstream>

#define STR_MAX_SIZE 128
#define ESTUDANTE_SIZE (sizeof(char)*STR_MAX_SIZE + sizeof(int) + sizeof(float))

class Estudante
{
    public:
        Estudante(char* nome, int matricula, int ira);
        int         ObterMatricula();
        const char* ObterNome();
        float       ObterIra();

        void TrocarMatricula(int matricula);
        void TrocarNome(const char* nome);
        void TrocarIra(int ira);

        void Imprimir();

        void LerDoArquivoBinario(fstream &file);
        void EscreverNoArquivoBinário(fstream &file);

    private:
        char   _nome[STR_MAX_SIZE];
        int    _matricula;
        float  _ira;
}

#endif /* ESTUDENT_H__ */
