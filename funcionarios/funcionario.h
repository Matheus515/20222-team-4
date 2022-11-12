#include <string>

class Funcionario {
    private:
    std::string _nome;
    int _matricula;
    double _comissao;
    double _salario;
    double _horas_semanais;
    
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