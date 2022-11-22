#include <string>

class Funcionario {
    private:
    std::string _nome;
    int _matricula;
    double _porcentagem_comissao;
    double _salario_base;
    double _horas_semanais;
    double _valor_hora_extra;

    
    public:
    Funcionario(std::string nome, int matricula, double comissao, double salario, double horas_semanais); // construtor
    ~Funcionario(); // desconstrutor
    std::string get_nome();
    int get_matricula();
    double get_comissao();
    double get_salario();
    double get_horas_semanais();
    // calcular o salario no final do mes;
    double salario_final();

};