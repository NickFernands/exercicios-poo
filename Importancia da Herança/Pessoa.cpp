#include <iostream>
#include <string>
#include "Pessoa.h"
using namespace std;

void Pessoa::AcessarSistema()
{
    cout << "\nAcesso ao Sistema Concedido\n";
}

void Professor::EfetuarChamada()
{
    cout << "\nChamada Efetuada\n";
}

void Professor::EntregarPauta()
{
    cout << "\nPauta Entregue\n";
}

void Aluno::RealizarProva()
{
    cout << "\nProva Realizada\n";
}

void Bibliotecario::CadastrarLivros()
{
    cout << "\nLivros Cadastrados\n";
}

string Pessoa::GetNome()
{
    return Nome;
}

int Pessoa::GetCPF()
{
    return CPF;
}

int Pessoa::GetMatricula()
{
    return Matricula;
}

void Pessoa::SetNome(string NovoNome)
{
    Nome = NovoNome;
}

void Pessoa::SetCPF(int NovoCPF)
{
    CPF = NovoCPF;
}

void Pessoa::SetMatricula(int NovaMatricula)
{
    Matricula = NovaMatricula;
}

void Pessoa::MostrarDados()
{
    cout << "\n*** DADOS ***\n";
    cout << "\nNome: " << GetNome() << "\n";
    cout << "\nCPF: " << GetCPF() << "\n";
    cout << "\nMatricula: " << GetMatricula() << "\n";

}

string Professor::GetDepartamento()
{
    return Departamento;
}
void Professor::SetDepartamento(string NovoDepartamento)
{
    Departamento = NovoDepartamento;
}

void Professor::MostrarDados()
{
    Pessoa::MostrarDados();//chamando a função herdada pela classe base
    cout << "\nDepartamento: " << GetDepartamento() << "\n";

}

string Aluno::GetCurso()
{
    return Curso;
}

void Aluno::SetCurso(string NovoCurso)
{
    Curso = NovoCurso;
}

void Aluno::MostrarDados()
{
    Pessoa::MostrarDados();
    cout << "\nCurso: " << GetCurso() << "\n";
}

void Bibliotecario::MostrarDados()
{
    Pessoa::MostrarDados();
}
