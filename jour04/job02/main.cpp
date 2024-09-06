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
}