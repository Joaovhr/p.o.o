[atividade1.cpp](https://github.com/user-attachments/files/21907624/atividade1.cpp)
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
    Book obj1 = {"O Senhor dos Aneis", "J.R.R. Tolkien", 1954};
    Book obj2 = {"1984", "George Orwell", 1949};

    User usuario1 = {"João", "Rua A, 123", 20, {obj1}};
    User usuario2 = {"Maria", "Av. Central, 456", 25, {obj2}};

    cout << "Usuario 1: " << usuario1.nome << ", " << usuario1.endereco 
         << ", " << usuario1.idade << " anos" << endl;
    for (Book c : usuario1.livros_alugados) {
        cout << "  Livro: " << c.title << " - " << c.author 
             << " (" << c.year << ")" << endl;
    }

    cout << "\nUsuario 2: " << usuario2.nome << ", " << usuario2.endereco 
         << ", " << usuario2.idade << " anos" << endl;
    for (Book c : usuario2.livros_alugados) {
        cout << "  Livro: " << c.title << " - " << c.author 
             << " (" << c.year << ")" << endl;
    }

    return 0;
}
