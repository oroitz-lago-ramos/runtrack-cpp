#include <iostream>
#include "Box.hpp"

class Book
{
private:
    /* data */
public:
    Book(/* args */);

    int nbPages;
    char category;
};

Book::Book()
    : nbPages(45), category('A')
{
}

int main()
{
    Book book = Book();

    Box box = Box(book);

    Book copyBook = box.getData();

    copyBook.nbPages = 456;

    std::cout << copyBook.nbPages << std::endl;
    std::cout << book.nbPages << std::endl;

    Box box2 = Box(4.68);
    std::cout << box2.getData() << std::endl;

    Box<int> intBox(42);
    std::cout << "Contenu du intBox: " << intBox.getData() << std::endl;

    Box<std::string> stringBox("Hello");
    std::cout << "Contenu du stringBox: " << stringBox.getData() << std::endl;

    // Utilisation de la spécialisation pour les pointeurs
    int value = 100;
    Box<int *> pointerBox(&value);
    std::cout << "Contenu du pointerBox (déréférencé): " << pointerBox.getData() << std::endl;

    std::string str = "Specialized Hello";
    Box<std::string *> stringPointerBox(&str);
    std::cout << "Contenu du stringPointerBox (déréférencé): " << stringPointerBox.getData() << std::endl;

    return 0;
}