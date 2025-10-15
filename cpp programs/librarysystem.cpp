#include<bits/stdc++.h>
using namespace std;

class Book{
    public:
    int id;
    string title;
    string author;
    int avalibleCopies;
    Book(int id, string title, string author, int avalibleCopies){
        this->id = id;
        this->title = title;
        this->author = author;
        this->avalibleCopies = avalibleCopies;
    }
    void DisplayBook(){
        //is to print the info of the book
        cout << "The ID of the Book is : " << id <<endl;
        cout << "Title : " << title << endl;
        cout << "The Author of the Book is : " << author << endl;
        cout << "Available Copies : " << avalibleCopies <<endl;
        //the id of book : 
        //the autor of book
    }

};
class Member{
    public:
    int id;
    string name;
    int phoneNumber;
    vector<int>InfoBook;

    Member(int id, string name, int phoneNumber){
        this->id = id;
        this->name = name;
        this->phoneNumber = phoneNumber;
    }
    void borrowBook(int bookId){
        InfoBook.push_back(bookId);
    }
    void returnBook(int bookId){
        InfoBook.erase(remove(InfoBook.begin(),InfoBook.end(),bookId),InfoBook.end());

    }

};

class Library{
    public:
    vector<Book>books; // 100
    vector<Member>members;

    void addBook(Book b){
        books.push_back(b);
    }
    void addMember(Member m){
        members.push_back(m);
    }

    void borrowBook(int memberId, int bookId){
        bool f = 0;
        for(auto &b : books){
            if(b.id == bookId && b.avalibleCopies > 0){
                for(auto &m : members){
                    if(m.id == memberId){
                        m.borrowBook(bookId);
                        b.avalibleCopies--;
                        f = 1;
                        cout << m.name <<" borrowed " << b.title << endl;
                    }
                }
            }
        }
        if(f == 0) cout << "book is not avalible\n";
    }
    void returnBook(int memberId, int bookId){
        for(auto &b : books){
            if(b.id == bookId){
                for(auto &m : members){
                    if(m.id == memberId){
                        m.returnBook(bookId);
                        b.avalibleCopies++;
                        cout << m.name <<" returned " << b.title << endl;
                        return;
                    }
                }
            }
        }
        cout << "Invalid return" << endl;
    }


};


int main(){
    Library lib;
    Book b1(1,"c++","Ashok",3);
    lib.addBook(b1);
    Member m1(1,"Alice",9848456125);
    lib.addMember(m1);
    Book b2(2,"Good Girls Guide to Mother","Alexnder",5);
    lib.addBook(b2);
    Book b3(3,"Reason Behind Success","Ravindranadh Tagore",1);
    lib.addBook(b3);
    Member m2(2,"Bob",7456981258);
    lib.addMember(m2);
    Member m3(3,"John Doe",8965485255);
    lib.addMember(m3);
    Member m4(4,"Elizibeth",7855496444);
    lib.addMember(m4);
    lib.borrowBook(2,3);
    lib.borrowBook(1,3);
    lib.returnBook(2,3);
    
    

    

}