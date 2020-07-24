#include <iostream>
#include <stdlib.h>
using namespace std;

//Classe Base, tambem conhecida por classe mae/pai e superclasse
class Base
{
    //as seçoes public, protegida e privada de uma classe devem ser declaradas nessa ordem: public, protected, private
    public:/*indica que os membros do objeto criado a partir dessa classe terão acesso direto a todos os atributos e funções
            presentes na seção public*/
        void SolicitarNumeros()
        {
            cout <<"Num1: ";
            cin >> Num1;
            cout <<"\nNum2: ";
            cin >> Num2;

            //chamada do metodo privado da classe dentro da propria classe é permitido
            /*ou seja nao e necessario ter todos os metodos publicos, nesse caso apenas solicitarNumeros sera publico
            e ele ira solicitar os outros metodos da classe*/
            MostrarResultado(Num1, Num2);
        }

    private:/*aqui indica que os membros da seção private so serao acessiveis dentro do codigo da classe,o obj nao podera
    acessar diretamente esses itens e atributos e funções fora da classe*/
        float Num1, Num2;
        float Soma(int Num1, int Num2)
        {
            return(Num1 + Num2);
        }

        void MostrarResultado(int Num1, int Num2)
        {
            cout << "Soma de: " << Num1 << " + " << Num2 <<" = " << Soma(Num1, Num2) << "\n";
        }
};


//agora declaramos uma classe que herda da classe base, porém ela nao tem nada e esta vazia
//a classe derivada tambem e chamada de subclasse ou classe filha
class Derivada : public Base
{

};

int main ()
{
    Derivada Obj;//obto criado a partir da classe derivada

    Obj.SolicitarNumeros();//uma classe herda tudo de sua classe base,mas nao herdara os itens privados da classe base

    system("pause");
    return 0 ;
};
