#include <cstdlib>
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
 
using namespace std;

class LibraryBooks
{
public:
    
    string getTitle() const
    {
        return _title;
    } 
    void setTitle(const string title)
    {
        _title = title;
    }

    string getAuthor() const
    {
        return _author;
    } 
    void setAuthor(const string author)
    {
        _author = author;
    }

       string getISBN() const
    {
        return _isbn;
    } 
    void setISBN(const string isbn)
    {
        _isbn = isbn;
    }  
private:
    string _title;
    string _author;
    string _isbn;
};

int main()
{
    LibraryBooks myBook;
    //Opening our checkedout.txt file and adding the Title, Author, and ISBN headers.
    ofstream foutCheckedOut; 
    foutCheckedOut.open("checkedout.txt");
    foutCheckedOut << "Title" << '\t' << "Author" << '\t' << "ISBN" << endl;

    //Adding ISBNS to from isbns.txt to a dynamic string Array
    char fileISBNs[100];
    fstream fISBNs;
    fISBNs.open("isbns.txt");
    string* isbnArray = new string[35];
    int isbnCount = 0;
    while(!fISBNs.eof())
    {
        fISBNs.getline(fileISBNs, 100);
        isbnArray[isbnCount].append(string(fileISBNs));
        isbnCount++; 
    }
    fISBNs.close();
    
    //Start checking for checkedout books and add them to checkedout.txt
    char fileBooks[100];
    fstream fbooks;
    fbooks.open("books.txt");
    while(!fbooks.eof())
    {
        //setting up myBook object with the book information.
        for (int i = 0; i <= 2; i++)
        {
            fbooks.getline(fileBooks, 100);
            if(i == 0)
            {
                myBook.setTitle(string(fileBooks));
            }
            else if(i == 1)
            {
                myBook.setAuthor(string(fileBooks));
            }
            else
            {
                myBook.setISBN(string(fileBooks));    
            }
            string bookinfo;
            bookinfo = string(fileBooks);
        }
        //checking to see if the our book is checked out, if it is we add it to checkedout.txt 
        for (int i=0; i <= isbnCount; i++)
        {
            if(isbnArray[i] == myBook.getISBN())
            {
                foutCheckedOut << myBook.getTitle() << '\t' << myBook.getAuthor() << '\t' << myBook.getISBN() << endl;
                break;
            }            
        }    
    }
    return 0;
}
