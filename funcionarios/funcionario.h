#include <string>

class Funcionario {
    private:
    std::string _nome;
    int _matricula;
    double _porcentagem_comissao;
    double _salario_base;
    double _horas_semanais;

    
    public:
    Funcionario(std::string nome, int matricula, double porcentagem_comissao, double salario_base, double horas_semanais, double valor_hora_extra); // construtor
    ~Funcionario(); // desconstrutor
    std::string get_nome();
    int get_matricula();
    double get_porcentagem_comissao();
    double get_salario_base();
    double get_horas_semanais();

};