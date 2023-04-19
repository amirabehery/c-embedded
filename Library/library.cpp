#include <iostream>
#include <vector>
#include <algorithm>

class Book
{
    public:
    Book(std::uint16_t x, std::string y) : id(x), title(y)
    {

    }
    std::uint16_t id;
    std::string title;

    void displayBookInfo()
    {
        std::cout << "====================================" << std::endl;
        std::cout << "Book id: " << this->id << std::endl;
        std::cout << "Book Name: " <<this->title << std::endl;
    }

};

class Library
{
    public:
    Library()
    {
    }
    void addBook(Book &b)
    {
        books.push_back(b);
    }

    void searchBook(std::uint16_t x)
    {
        std::string message = "Book not found by id " + std::to_string(x);
        for (auto b : books)
        {
            if(x == b.id)
            {
                message = "Book found: " + b.title;
            }
        }
        std::cout << message << std::endl;
    }

    void updateBook(std::uint16_t x, std::string t)
    {
        for (auto &b : books)
        {
            if(x == b.id)
            {
                b.title = t;
            }
        }
        std::cout << "Book updated Successfully!" << std::endl;
    }

    void removeBook(std::uint16_t x)
    {
        for (std::uint16_t i = 0; i <books.size(); i++ )
        {
            if(x == books[i].id)
            {
                books[i].id = 0;
                books[i].title = "";
            }
        }
        std::cout << "Book by id "<< x << "deleted Successfully!" << std::endl;
    }

    void showLibrary()
    {
        std::cout << "Total number of books: " << books.size() << std::endl;
        for (auto book : books)
        {
            book.displayBookInfo();
        }
    }

    private:
    std::vector<Book> books;
};

int main()
{
    Library lib;

    Book b1(1, "book-1");
    Book b2(2, "book-2");
    Book b3(3, "book-3");
    Book b4(4, "book-4");
    Book b5(5, "book-5");
    Book b6(6, "book-6");
    Book b7(7, "book-7");
    Book b8(8, "book-8");


    lib.addBook(b1);
    lib.addBook(b2);
    lib.addBook(b3);
    lib.addBook(b4);
    lib.addBook(b5);
    lib.addBook(b6);
    lib.addBook(b7);
    lib.addBook(b8);


    lib.showLibrary();

    lib.searchBook(1);
    lib.searchBook(10);
    lib.searchBook(5);
    lib.searchBook(12);

    lib.updateBook(5, "Booooooooooooooooooook-5");

    // lib.searchBook(5);
    lib.removeBook(2);
    lib.showLibrary();
    return 0;

}