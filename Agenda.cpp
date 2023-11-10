///////////Jos� Viecili//////
#include <iostream>
#include <string> 
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;


// Defini��o da struct para representar os dados do usu�rio
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

// Fun��o para cadastrar um novo usu�rio na agenda
void cadastrarUsuario(Usuario usuarios[], int& numUsuarios) {
    if (numUsuarios < 100) {
        Usuario novoUsuario;

        cout << "Digite o nome do usu�rio: ";
        cin.ignore();
        getline(cin, novoUsuario.nome);
        cout << "Digite o telefone fixo do usu�rio: ";
        getline(cin, novoUsuario.telefoneFixo);
        cout << "Digite o endere�o do usu�rio: ";
        getline(cin, novoUsuario.endereco);
        cout << "Digite o CPF do usu�rio: ";
        getline(cin, novoUsuario.cpf);
        cout << "Digite o RG do usu�rio: ";
        getline(cin, novoUsuario.rg);
        cout << "Digite a data de nascimento do usu�rio: ";
        getline(cin, novoUsuario.dataNascimento);
        cout << "Digite a profiss�o do usu�rio: ";
        getline(cin, novoUsuario.profissao);
        cout << "Digite a idade do usu�rio: ";
        cin >> novoUsuario.idade;
        cout << "Digite o telefone celular do usu�rio: ";
        cin.ignore();
        getline(cin, novoUsuario.telefoneCelular);
        cout << "Digite a cidade do usu�rio: ";
        getline(cin, novoUsuario.cidade);
        cout << "Digite o estado do usu�rio: ";
        getline(cin, novoUsuario.estado);

        usuarios[numUsuarios] = novoUsuario;
        numUsuarios++;
        cout << "Usu�rio cadastrado com sucesso!" << endl;
    } else {
        cout << "A agenda est� cheia. N�o � poss�vel cadastrar mais usu�rios." << endl;
    }
}

// Fun��o para exibir todos os usu�rios cadastrados na agenda
void exibirAgenda(Usuario usuarios[], int numUsuarios) {
    if (numUsuarios > 0) {
        cout << "Agenda de Usu�rios:" << endl;
        for (int i = 0; i < numUsuarios; i++) {
            cout << "Usu�rio " << i + 1 << ":" << endl;
            cout << "Nome: " << usuarios[i].nome << endl;
            cout << "Telefone Fixo: " << usuarios[i].telefoneFixo << endl;
            cout << "Endere�o: " << usuarios[i].endereco << endl;
            cout << "CPF: " << usuarios[i].cpf << endl;
            cout << "RG: " << usuarios[i].rg << endl;
            cout << "Data de Nascimento: " << usuarios[i].dataNascimento << endl;
            cout << "Profiss�o: " << usuarios[i].profissao << endl;
            cout << "Idade: " << usuarios[i].idade << endl;
            cout << "Telefone Celular: " << usuarios[i].telefoneCelular << endl;
            cout << "Cidade: " << usuarios[i].cidade << endl;
            cout << "Estado: " << usuarios[i].estado << endl;
            cout << endl;
        }
    } else {
        cout << "A agenda est� vazia. Cadastre usu�rios para exibir." << endl;
    }
}
int main() {
    Usuario usuarios[100]; // Vetor para armazenar os usu�rios na agenda
    int numUsuarios = 0;   // Vari�vel para controlar o n�mero de usu�rios na agenda

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



