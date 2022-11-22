#include <string>

class Cliente {
    private:
        std::string _nome_cliente;
        int _cpf_cliente;
        int _total_compras;
        double _desconto;
    
    public:
        Cliente ();
        ~Cliente();

        std::string get_nome();
        int set_cpf_cliente();
        int set_total_compras();
        double set_desconto();

        int get_cpf_cliente();
        int get_total_compras();
        double get_desconto();

        void cadastra_cliente(std::string nome, int cpf_cliente, int total_compras, double desconto);
 
};