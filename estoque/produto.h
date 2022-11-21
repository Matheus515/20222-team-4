#include <string>

class Produto {

    private: 
        std::string __nome;
        int _id;
        double _preco;
    public:
        Produto(std::string nome, int id, double preco);
        ~Produto();
        std::string get_nome();
        double get_preco();
        int get_codigo();
        int get_quantidade();

};