#include "funcionario.h"

class Pagamento //vai herdar vendas ou funcionarios 
{
private:

    double _valor_comissao;
    double _salario_base;
    int _horas_extras;

public:
    Pagamento();
    ~Pagamento();

    // calcular o salario no final do mes;
    double salarioFinal(double valor_comissao, double salario_base, int horas_extras);

};