#include "funcionario.h"

class Gerente : public Funcionario {
    public:


    private: 
        void editar_estoque(); //adiciona ou remove itens no estoque
        void cadastrar_funcionario(); // cadastra um funcionario novo (admissao)
        void excluir_funcionario(); // remove um funcionario antigo (demissao)

};