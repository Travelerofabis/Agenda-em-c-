///////////José Viecili//////
#include <iostream>
#include <string> 
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;


// Definição da struct para representar os dados do usuário
struct Usuario {
    string nome;
    string telefoneFixo;
    string endereco;
    string cpf;
    string rg;
    string dataNascimento;
    string profissao;
    int idade;
    string telefoneCelular;
    string cidade;
    string estado;
};

// Função para cadastrar um novo usuário na agenda
void cadastrarUsuario(Usuario usuarios[], int& numUsuarios) {
    if (numUsuarios < 100) {
        Usuario novoUsuario;

        cout << "Digite o nome do usuário: ";
        cin.ignore();
        getline(cin, novoUsuario.nome);
        cout << "Digite o telefone fixo do usuário: ";
        getline(cin, novoUsuario.telefoneFixo);
        cout << "Digite o endereço do usuário: ";
        getline(cin, novoUsuario.endereco);
        cout << "Digite o CPF do usuário: ";
        getline(cin, novoUsuario.cpf);
        cout << "Digite o RG do usuário: ";
        getline(cin, novoUsuario.rg);
        cout << "Digite a data de nascimento do usuário: ";
        getline(cin, novoUsuario.dataNascimento);
        cout << "Digite a profissão do usuário: ";
        getline(cin, novoUsuario.profissao);
        cout << "Digite a idade do usuário: ";
        cin >> novoUsuario.idade;
        cout << "Digite o telefone celular do usuário: ";
        cin.ignore();
        getline(cin, novoUsuario.telefoneCelular);
        cout << "Digite a cidade do usuário: ";
        getline(cin, novoUsuario.cidade);
        cout << "Digite o estado do usuário: ";
        getline(cin, novoUsuario.estado);

        usuarios[numUsuarios] = novoUsuario;
        numUsuarios++;
        cout << "Usuário cadastrado com sucesso!" << endl;
    } else {
        cout << "A agenda está cheia. Não é possível cadastrar mais usuários." << endl;
    }
}

// Função para exibir todos os usuários cadastrados na agenda
void exibirAgenda(Usuario usuarios[], int numUsuarios) {
    if (numUsuarios > 0) {
        cout << "Agenda de Usuários:" << endl;
        for (int i = 0; i < numUsuarios; i++) {
            cout << "Usuário " << i + 1 << ":" << endl;
            cout << "Nome: " << usuarios[i].nome << endl;
            cout << "Telefone Fixo: " << usuarios[i].telefoneFixo << endl;
            cout << "Endereço: " << usuarios[i].endereco << endl;
            cout << "CPF: " << usuarios[i].cpf << endl;
            cout << "RG: " << usuarios[i].rg << endl;
            cout << "Data de Nascimento: " << usuarios[i].dataNascimento << endl;
            cout << "Profissão: " << usuarios[i].profissao << endl;
            cout << "Idade: " << usuarios[i].idade << endl;
            cout << "Telefone Celular: " << usuarios[i].telefoneCelular << endl;
            cout << "Cidade: " << usuarios[i].cidade << endl;
            cout << "Estado: " << usuarios[i].estado << endl;
            cout << endl;
        }
    } else {
        cout << "A agenda está vazia. Cadastre usuários para exibir." << endl;
    }
}
int main() {
    Usuario usuarios[100]; // Vetor para armazenar os usuários na agenda
    int numUsuarios = 0;   // Variável para controlar o número de usuários na agenda

    int opcao;

    do {
        cout << "Selecione uma opcao:" << endl;
        cout << "1 - Cadastrar usuario" << endl;
        cout << "2 - Exibir agenda" << endl;
        cout << "0 - Sair" << endl;
        cin >> opcao;

        switch (opcao) {
            case 1:
                cadastrarUsuario(usuarios, numUsuarios);
                break;
            case 2:
                exibirAgenda(usuarios, numUsuarios);
                break;
            case 0:
                cout << ".....SAINDO....." << endl;
                break;
            default:
                cout << "Opcao invalida. Tente novamente." << endl;
                break;
        }
    } while (opcao != 0);

}



