#include <string>

using namespace std;

#include "siga.h"

Siga::Siga(string arquivo_dados_estudante)
{

    this->arquivo_nome = arquivo_dados_estudante;
    //  TODO: Implementar abertura de arquivo em modo binário
    // this->file_stream
    
    // TODO: Obter numero de registros de estudante no arquivos
    // 
    // Lembre-se que o arquivo de dados de estudante é binário e 
    // que já pode conter registros de estudantes.
    // this->n_estudantes = 

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
    }

}


bool  Siga::PesquisaPorMatricula(int matricula)
{
    // TODO: implementar pesquisa por matrícula
    // Posicione o cursor para o inicio do arquivo:
    // Para i = 0 até n_estudante
    //    Ler matricula na posição corrente no arquivo
    //    Testar se é a matricula procurada, se afirmativo
    //    retorne o curso para posição anterior a leitura 
    //    da matricula e retorne V.
    //    Move o cursor para a próxima posição de estudante.
    // Fim-Para
    // Coloque o cursor para o final do arquivo
    // retorne F
    return false;
}
        
void Siga::CadastraEstudante(Estudante est)
{
    //Todo: implementar cadastro de estudante
    // Passos:
    // Testar se est já foi cadastrado
    // Se cadastrado, move cursor para inicio do arquivo e saia   
    // Caso Contrário, escreva o estudante no final do arquivo, move cursor
    // para o inicio do arquivo e incremente o numero de estudantes
    
}
        
void Siga::ImprimeEstudantePorMatricula(int matricula)
{
    //TODO: implementar impressão de estudante por matricula.
    // Pesquisa aluno por matricula
    // Se o aluno estiver cadastrado, imprima o aluno.


}
        
void Siga::SalvaListaEstudanteEmTexto(string arquivo_txt)
{
    //TODO: implementar salvar lista de estudantes em texto
    // A saida deve ser a seguinte formatação:
    // Primeira linha conter o cabeçalho:
    // Matricula;Nome;Ano de Ingresso;IRA
    // Demais linhas com as informações dos estudantes.
}
        
        
void Siga::AlteraCadastroEstudante(Estudante est)
{
    // TODO: implementar alteração de cadastro de estudante
    // Pesquisa dr o aluno com est->matricul estda cadastrado
    // Se o aluno estiver cadastrado, reescreva a informação do aluno.
}
        
Siga::~Siga()
{
    //TODO: fecha arquivo
}

int Siga::ObterNumeroEstudantesArmazenados()
{
    return this->n_estudantes;
}

// TODO: implementar função auxiliar para calcular a posição do registro de estudante
// no arquivo binário.
size_t Siga::CalculaPosicaoRegistroEstudante(int id_estudante)
{
    size_t pos = 0; // implemente aqui
    return pos;
}