#pragma once
#include <iostream>
#include <string>
using namespace std;

class Pessoa
{   
    public:

        //Interessante Criar Construtores
        //aqui o construtor padrão(vazio) ja pode receber valores padrão, como o exemplo abaixo
        Pessoa():Nome(""), CPF(0), Matricula(0) {}
        /*isso seria o mesmo que:
        Pessoa()
        {
            Nome = "";
            CPF = 0;
            Matricula = 0;
        }*/

        //agora um construtor com parametros
        Pessoa(string NovoNome, int NovoCPF, int NovaMatricula):Nome(NovoNome), CPF(NovoCPF), Matricula(NovaMatricula){}
        /*podendo tambem ser feito assim
        {

            Nome = "NovoNome";
            CPF = NovoCPF;
            Matricula = NovaMatricula;

        }*/

        void AcessarSistema();

        //como agora os atributos sao privados, voce precisa criar metodos publicos que poderao ser usados fora da classe para obter(get) ou alterar (set) os atributos
        string GetNome();
        int GetCPF();
        int GetMatricula();
        void SetNome(string NovoNome);
        void SetCPF(int NovoCPF);
        void SetMatricula(int NovaMatricula);
        void MostrarDados();
        
    private:
        string Nome;
        int CPF;
        int Matricula;
};

class Professor : public Pessoa
{
    public:
        Professor(){}//Construtor Padrao(vazio)

        //esses sao os parametros que o construtor de professor podera receber
        Professor(string NovoNome, int NovoCPF, int NovaMatricula, string NovoDepartamento): Pessoa(NovoNome, NovoCPF, NovaMatricula), 
        Departamento(NovoDepartamento){}

        /*Acima estamos chamando o construtor da classe base para iniciar os parametros do objt professor*/

        void EfetuarChamada();
        void EntregarPauta();
        string GetDepartamento();
        void SetDepartamento(string NovoDepartamento);
        void MostrarDados();

    private:
        string Departamento;
};

class Aluno : public Pessoa
{   
    public:
        Aluno(){}
        Aluno(string NovoNome, int NovoCPF, int NovaMatricula, string NovoCurso): Pessoa(NovoNome, NovoCPF, NovaMatricula),
        Curso(NovoCurso){}
    
        void RealizarProva();
        string GetCurso();
        void SetCurso(string NovoCurso);
        void MostrarDados();
    
    private:
        string Curso;
};

class Bibliotecario : public Pessoa
{
    public:
        Bibliotecario(){}
        Bibliotecario(string NovoNome, int NovoCPF, int NovaMatricula): Pessoa(NovoNome, NovoCPF, NovaMatricula){}
        
        void CadastrarLivros();
        void MostrarDados();
};