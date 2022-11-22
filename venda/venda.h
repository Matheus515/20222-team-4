#include <string>
#include "estoque/estoque.h"
#include "produto.h"
#include "vendedor.h"

class Venda : public Produto {
    private:
        int _id_venda=0; //contador que vai acumular a quantidade de vendas
        double _valor_total; // valor total da venda
    public:
        Venda (int id_venda, double valor_total, int matricula_vendedor, Produto id_produto, Produto preco);
        ~Venda ();
        void consulta_estoque(); // consulta se esta disponivel no estoque;
        int get_produto(); // pegar o id do produto pra registrar
        int get_quantidade(); // pegar a quantidade do produto
        int get_vendedor(); // pegar a matricula do vendedor para registrar a comissao
        int get_cliente(); // pegar o cpf do cliente para registrar a compra.
    
};



