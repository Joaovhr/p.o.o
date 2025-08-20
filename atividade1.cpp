#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
public:
    string title;
    string author;
    int year;
};

class User {
public:
    string nome;
    string endereco;
    int idade;
    vector<Book> livros_alugados;
};

int main() {
    Book livro1 = {"O Senhor dos Aneis", "J.R.R. Tolkien", 1954};
    Book livro2 = {"1984", "George Orwell", 1949};
    Book livro3 = {"Dom Casmurro", "Machado de Assis", 1899};

    User usuario1 = {"João", "Rua A, 123", 20, {livro1, livro2}};
    User usuario2 = {"Maria", "Av. Central, 456", 25, {livro3}};

    cout << "Usuario 1: " << usuario1.nome << ", " << usuario1.endereco 
         << ", " << usuario1.idade << " anos" << endl;
    for (Book b : usuario1.livros_alugados) {
        cout << "  Livro: " << b.title << " - " << b.author 
             << " (" << b.year << ")" << endl;
    }

    cout << "\nUsuario 2: " << usuario2.nome << ", " << usuario2.endereco 
         << ", " << usuario2.idade << " anos" << endl;
    for (Book b : usuario2.livros_alugados) {
        cout << "  Livro: " << b.title << " - " << b.author 
             << " (" << b.year << ")" << endl;
    }

    return 0;
}
