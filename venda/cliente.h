#include <string>

class Cliente {
    private:
        std::string _nome_cliente;
        int _cpf_cliente;
        int _total_compras;
        double _desconto;
    
    public:
        Cliente (std::string nome, int cpf_cliente, int total_compras, double desconto);
        ~Cliente();
        void cadastra_cliente();
        std::string get_nome();
        int get_cpf_cliente();
        int get_total_compras();
        double get_desconto();
 
};