#ifndef ESTUDANTE_H__
#define ESTUDANTE_H__

#include <fstream>

usign namespace std;

#define STR_MAX_SIZE 128
#define ESTUDANTE_SIZE (sizeof(char)*STR_MAX_SIZE + 2*sizeof(int) + sizeof(float))

class Estudante
{
    public:
        Estudante(const char* nome, int matricula, int ano_ingresso, float ira);
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
        int    _ano_ingresso;
        float  _ira;
}

#endif /* ESTUDENT_H__ */
