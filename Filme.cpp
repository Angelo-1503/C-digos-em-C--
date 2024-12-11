0#include <iostream>
#include <string>

using namespace std;

struct Filme {
    string titulo;
    int duracao;
    int classificacao;

    Filme() {}

    Filme(string titulo, int duracao, int classificacao) {
        this->titulo = titulo;
        this->duracao = duracao;
        this->classificacao = classificacao;
    }
};

struct Sala {
    int numero;
    int capacidade;

    Sala() {}

    Sala(int numero, int capacidade) {
        this->numero = numero;
        this->capacidade = capacidade;
    }
};

struct Sessao {
    Filme filme;
    Sala sala;
    string horario;

    Sessao() {}

    Sessao(Filme filme, Sala sala, string horario) {
        this->filme = filme;
        this->sala = sala;
        this->horario = horario;
    }
};

Filme cadastrarFilme() {
    string titulo;
    int duracao, classificacao;

    getline(cin, titulo);
    cin >> duracao >> classificacao;
    cin.ignore();

    return Filme(titulo, duracao, classificacao);
}

Sala cadastrarSala() {
    int numero, capacidade;
    cin >> numero >> capacidade;
    cin.ignore();

    return Sala(numero, capacidade);
}

Sessao cadastrarSessao(Filme filme, Sala sala) {
    string horario;
    getline(cin, horario);
    return Sessao(filme, sala, horario);
}

void exibirSessao(Sessao sessao) {
    cout << "Sessao: " << sessao.filme.titulo << endl;
    cout << "Sala " << sessao.sala.numero << " as " << sessao.horario << endl;
}

int main() {

    Filme filme = cadastrarFilme();
    Sala sala = cadastrarSala();
    Sessao sessao = cadastrarSessao(filme, sala);
    exibirSessao(sessao);

    return 0;
}
