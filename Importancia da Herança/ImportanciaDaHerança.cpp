#include <iostream>
#include <stdlib.h>
#include "Pessoa.h"
#include "Pessoa.cpp"
using namespace std;

int main()
{
    Professor BigJhonson("BigJhonhson", 12345, 54321, "Ensino");
    Aluno ChillyWilly("Jeeega", 79498, 98767, "Sexo");
    Bibliotecario HollyNelson("Bookson", 33333, 44444);

   /*Professor BigJhonson;
    Aluno ChillyWilly;
    Bibliotecario HollyNelson;
    BigJhonson.Nome = "BigJhonson";*/

    BigJhonson.MostrarDados();
    ChillyWilly.MostrarDados();
    HollyNelson.MostrarDados();
    system ("pause");
    return 0;
}
