#include <iostream>
#include <string>

using namespace std;

struct Livro {
    string titulo;
    string autor;
    int anoPublicacao;

    Livro() {}

    Livro(string titulo, string autor, int anoPublicacao) {
        this->titulo = titulo;
        this->autor = autor;
        this->anoPublicacao = anoPublicacao;
    }
};

struct Secao {
    string nome;
    int capacidade;

    Secao() {}

    Secao(string nome, int capacidade) {
        this->nome = nome;
        this->capacidade = capacidade;
    }
};

struct Emprestimo {
    Livro livro;
    Secao secao;
    string dataEmprestimo;

    Emprestimo() {}

    Emprestimo(Livro livro, Secao secao, string dataEmprestimo) {
        this->livro = livro;
        this->secao = secao;
        this->dataEmprestimo = dataEmprestimo;
    }
};

Livro cadastrarLivro() {
    string titulo, autor;
    int anoPublicacao;

    getline(cin, titulo);
    getline(cin, autor);
    cin >> anoPublicacao;
    cin.ignore();

    return Livro(titulo, autor, anoPublicacao);
}

Secao cadastrarSecao() {
    string nome;
    int capacidade;
    getline(cin, nome);
    cin >> capacidade;
    cin.ignore();

    return Secao(nome, capacidade);
}

Emprestimo cadastrarEmprestimo(Livro livro, Secao secao) {
    string dataEmprestimo;
    getline(cin, dataEmprestimo);
    return Emprestimo(livro, secao, dataEmprestimo);
}

void exibirEmprestimo(Emprestimo emprestimo) {
    cout << "Emprestimo: " << emprestimo.livro.titulo << endl;
    cout << emprestimo.secao.nome << " - " << emprestimo.dataEmprestimo << endl;
}

int main() {

    Livro livro = cadastrarLivro();
    Secao secao = cadastrarSecao();
    Emprestimo emprestimo = cadastrarEmprestimo(livro, secao);
    exibirEmprestimo(emprestimo);

    return 0;
}
