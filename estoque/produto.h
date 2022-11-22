#include <string>

class Produto {

    private: 
        std::string _nome_produto;
        int _id;
        double _preco;

    public:
        Produto(std::string nome_produto, int id, double preco);
        ~Produto();

        std::string set_nome_produto();
        double get_preco();
        int set_id();

        std::string get_nome_produto();
        double get_preco();
        int get_id();
    

};