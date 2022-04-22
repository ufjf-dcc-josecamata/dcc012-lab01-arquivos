#include <string>

using namespace std;

#include "siga.h"

GerenciaSiga::GerenciaSiga(string arquivo_dados_estudante)
{

    this->arquivo_nome = arquivo_dados_estudante;
    
    // Abrir arquivo em modo binário
    
    // Obter numero de registros de estudante no arquivos
    // this->n_estudantes =     

}


bool  GerenciaSiga::PesquisaPorMatricula(int matricula)
{
    // Posicione o cursor para o inicio do arquivo:
    // Para i = 0 até n_estudante
    //    Ler matricula na posição corrente no arquivo
    //    testar se é a matricula procurada, se afirmativo
    //    retorne o curso para posição anterior a leitura e
    //    retorne V.
    //    move o curso do arquivo sizeof(estudante) bytes
    // Fim-Para
    // Coloque o cursor para o final do arquivo
    // retorne F
}
        
void GerenciaSiga::CadastraEstudante(Estudante& est)
{
    // Testa se est ja foi cadastrado
    // se não, salve no arquivo    
    // se ja nao faz nada e move cursor para
    // final do arquivo

}
        
void GerenciaSiga::ImprimeEstudantePorMatricula(int matricula)
{
    // Pesquisa aluno por matricula

    // 


}
        
void GerenciaSiga::ImprimeListaEstudante();
        
        
void GerenciaSiga::AlteraCadastroEstudante(int matricula, const char* nome, float ira)
{
    // pesquisa aluno pela matricula,
    //
}
        
~GerenciaSiga()
{
    //fecha arquivo
}