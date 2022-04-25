#include <string>

using namespace std;

#include "siga.h"

Siga::Siga(string arquivo_dados_estudante)
{

    this->arquivo_nome = arquivo_dados_estudante;
    //  TODO: Implementar abertura de arquivo em modo binário, tanto para leitura e escrita
    // se arquivo ja existir, o conteudo pre existente não deve ser apagado. 
    // this->file_stream = ...
    
    // A função deve imprimir:
    //   SIGA: Inicializado com sucesso
    //  caso o arquivo seja aberto corretamente ou vaso contrário, 
    //   SIGA: Erro ao abrir arquivo
    if(this->file_stream.is_open())
    {
        cout << "SIGA: Inicializado com sucesso" << endl;
    }
    else
    {
        cout << "SIGA: Erro ao abrir arquivo" << endl;
        return; 
    }

    // TODO: Obter numero de registros de estudante no arquivo
    // 
    // Lembre-se que o arquivo de dados de estudante é binário e 
    // que já pode conter registros de estudantes.
    // this->n_estudantes = 

    cout << this->n_estudantes << " registros de estudantes" << endl;
}


int  Siga::PesquisaPorMatricula(int matricula)
{
    // TODO: implementar pesquisa por matrícula
    // Posicione o cursor para o inicio do arquivo:
    // Para i = 0 até n_estudante
    //    Ler estudante na posição corrente no arquivo
    //    Testar se é a matricula procurada, se afirmativo
    //    retorne a posiçao i.
    // Fim-Para
    // Coloque o cursor para o final do arquivo
    // retorne -1
    return -1;
}
        
void Siga::CadastraEstudante(Estudante est)
{
    // TODO: Implementar cadastro de estudante
    // Passos:
    // Testar se est já foi cadastrado
    // Se já cadastrado, saia   
    // Caso Contrário, escreva o estudante no final do arquivo 
    // e incremente o numero de estudantes
    
}
        
void Siga::ImprimeEstudantePorMatricula(int matricula)
{
    //TODO: implementar impressão de estudante por matricula.
    // Pesquisa aluno por matricula
    // Se o aluno estiver cadastrado, imprima o aluno.
    // caso contrario: Estudante não cadastrado

}
        
void Siga::SalvaListaEstudanteEmTexto(string arquivo_txt)
{
    //TODO: implementar salvar lista de estudantes em texto
    // A saida deve ser a seguinte formatação:
    // Primeira linha conter o cabeçalho:
    // Matricula;Nome;Ano de Ingresso;IRA
    // Demais linhas com as informações dos estudantes.
    // nao use espacos entre os campos!!
   
}
        
        
void Siga::AlteraCadastroEstudante(Estudante est)
{
    // TODO: implementar alteração de cadastro de estudante
    // Pesquisa se o aluno com est->matricula está cadastrado
    // Se o aluno estiver cadastrado, reescreva a informação do aluno e 
    // escreva  "Dados Alterados"
    // Caso contrário, escreva: "Estudante não cadastrado"
}
        
Siga::~Siga()
{
    //TODO: fecha arquivo
}

int Siga::ObterNumeroEstudantesArmazenados()
{
    return this->n_estudantes;
}
