#include <iostream>
#include <cstring>
using namespace std;

class LibraryBook {
private:
    char title[100];
    char author[100];
    char borrower[100];

public:
    // Constructor to initialize book details
    LibraryBook(const char* bookTitle, const char* bookAuthor, const char* borrowerName) {
        strcpy(title, bookTitle);
        strcpy(author, bookAuthor);
        strcpy(borrower, borrowerName);
        
        cout << "Book Borrowed: " << title
            << " by " << author 
            << " | Borrower: " << borrower 
            << endl;
    }

    // Destructor to display message when book is returned
    ~LibraryBook() {
        cout << "Book Returned: " << title << " | Borrower: " << borrower << endl;
    }
};

int main() {
    int choice;
    LibraryBook *book1;
    while(1)
    {
        cout << "Press 1 : Issue a book "<<endl;
        cout << "Press 2 : Return a book "<<endl;
        cin >> choice;
        // Borrowing a book
        if (choice ==1)
        { 
            book1 = new LibraryBook("Wings of Fire", " Arun Tiwari", "Dibyasundar Das");
        }
        else
        {
            delete book1;
        }
    }

    return 0;
}
