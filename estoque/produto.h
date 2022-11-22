#include <string>

class Produto {

    private: 
        std::string _nome_produto;
        int _id;
        double _preco;
    public:
        Produto(std::string nome_produto, int id, double preco);
        ~Produto();
        std::string get_nome_produto();
        double get_preco();
        int get_codigo();
        int get_quantidade();

};