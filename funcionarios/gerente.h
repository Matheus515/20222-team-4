#ifndef GERENTE_H_INCLUDED
#define CLASSES_H_INCLUDED
#include <string>
#include "funcionario.h"

class Gerente : public Funcionario {
    private: 
        std::string _senha;
        
    public:
        Gerente ();
        ~Gerente();

        std::string set_senha();

        void editar_estoque(); //adiciona ou remove itens no estoque
        void cadastrar_funcionario(); // cadastra um funcionario novo (admissao)
        void excluir_funcionario(); // remove um funcionario antigo (demissao)
    
};

#endif