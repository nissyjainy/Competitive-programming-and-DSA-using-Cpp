#include <bits/stdc++.h>
using namespace std;
class book
{

    string author;
    string title;
    int price;
    string publisher;
    int stock;
};
class bookinventory
{

    // variable lakhya che
private:
    book books[5];
    // books name nu variable che
    // initialize kar ok
public:
    // aa tare constructor che
    bookinventory()
    {
        books[0] = {"A", "C++", 100, "abc", 20};
        books[1] = {"B", "DCOM", 1000, "cde", 10};
        books[2] = {"C", "Embedded", 500, "efg", 50};
        books[3] = {"D", "oops", 600, "gfh", 30};
        books[4] = {"E", "antenna", 200, "xyz", 100};
    }
    // find kar ok
    bool searchbook(const string &title, const string &author) // ahiya const valu kem lidhu che ae khabr na padi mane
    {
        for (int i = 0; i < sizeof(books) / sizeof(book); i++)
        {
            if (books[i].title == title && books[i].author == author) // ahiya i walu che ae input sathe compare thay che
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    void display(const string &title, const string &author)
    {
        for (int i = 0; i < sizeof(books) / sizeof(book); i++)
        {
            // jo find thayu che to tu print kar aene ok
            if (books[i].title == title && books[i].author == author)
            {
                cout << "The author of the book is " << books[i].author << endl;
                cout << "The title of the book is " << books[i].title << endl;
                cout << "The price of the book is " << books[i].price << endl;
                cout << "The publisher of the book is " << books[i].publisher << endl;
                cout << "The stock of the book is " << books[i].stock << endl;
                return;
            }
        }
        cout << "The book is not found " << endl;
    }
    // transaction karvanu che ok
    // logic shu che ki if book is present then hu shu karu che ki no of book tu le ane price sathe multiply karine output kar ok
    // ek aji vastu che ok jo tare given number thi ochi che to nathi thay ok
    bool transaction(const string &title, const string &author, int copies)
    {
        // jo tari pase book che ki nahi ae jo ok
        for (int i = 0; i < sizeof(books) / sizeof(book); i++)
        {
            if (books[i].title == title && books[i].author == author)
            {
                if (copies <= books[i].stock)
                {
                    // ahiya mare stock update thayu ki ketlu che
                    books[i].stock = books[i].stock - copies;
                    // have cose find kar
                    cout << "The total price of the book is" << (books[i].price) * copies << endl;
                    return true;
                }
                else
                {
                    cout << "The stock is insufficient" << endl;
                    return false;
                }
            }
        }
        // have jo tane book mali j nathi to shu karish tu

        cout << "The book is not found in the library" << endl;
        return false;
    }
};
int main()
{
    bookinventory Nis;
    // ahiya mei Nis name nu object banai didhu che ok
    string title, author;
    cout << "Enter the title of the book to be found" << endl;
    cin >> title;
    cout << "Enter the author of the book to be found" << endl;
    cin >> author;
    // have search function find kar ok
    if (Nis.searchbook(title, author))
    {
        // atle ahiaya mare bool function che ok
        // to have tu print kari de ok
        Nis.display(title, author);

        int copies;
        cout << "Enter the number of copies you want" << endl;
        cin >> copies;
        // have tu transaction print kar ok

        Nis.transaction(title, author, copies);
    }
    else
    {
        cout << "The book is not present" << endl;
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// struct book
// {
// public:
//     string auther;
//     string title;
//     int price;
//     string publisher;
//     int stock;
// };
// class inventory
// {
// private:
//     book inv[5];

// public:
//     inventory()
//     {
//         inv[0] = {"A", "C++", 200, "pson", 10};
//         inv[1] = {"B", "8085", 500, "pson", 20};
//         inv[2] = {"C", "8051", 400, "tmh", 30};
//         inv[3] = {"D", "dcom", 450, "tmh", 40};
//         inv[4] = {"E", "Antenna", 600, "viking", 50};
//     }

//     bool find_book(const string &title, const string &auther)
//     {

//         for (int i = 0; i < 5; i++)
//         {

//             if (inv[i].title == title && inv[i].auther == auther)
//             {
//                 return true;
//             }
//             else
//             {
//                 return false;
//             }
//         }
//     }

//     void display(const string &title, const string &auther)
//     {

//         for (int i = 0; i < 5; i++)
//         {
//             if (inv[i].title == title && inv[i].auther == auther)
//             {
//                 cout << "Book Details : " << endl;
//                 cout << "Auther Name : " << inv[i].auther << endl;
//                 cout << "Book Title : " << inv[i].title << endl;
//                 cout << "Book price : " << inv[i].price << endl;
//                 cout << "Book publisher : " << inv[i].publisher << endl;
//                 cout << " Book Stock : " << inv[i].stock << endl;
//                 return;
//             }
//         }
//         cout << "Book is not Available" << endl;
//     }

//     bool transaction(const string &title, const string &auther, int n)
//     {
//         for (int i = 0; i < 5; i++)
//         {

//             if (inv[i].title == title && inv[i].auther == auther)
//             {
//                 if (n <= inv[i].stock)
//                 {
//                     inv[i].stock -= n;
//                     cout << "Transaction Successful" << endl;
//                     cout << "total cost : " << n * inv[i].price << endl;
//                     return true;
//                 }
//                 else
//                 {
//                     cout << "required copy not in stock" << endl;
//                     return false;
//                 }
//             }
//         }
//         cout << "Book not found" << endl;
//         return false;
//     }
// };

// int main()
// {
//     // Create an instance of BookInventory to manage the book store
//     inventory inventory;

//     // Get the title and author of the book the customer wants.
//     string title, author;
//     cout << "Enter the title of the book: ";
//     getline(cin, title);
//     cout << "Enter the author of the book: ";
//     getline(cin, author);

//     // Search for the book in the inventory
//     if (inventory.find_book(title, author))
//     {
//         // Display book details if found
//         inventory.display(title, author);
//         // Request the number of copies the customer wants
//         int num_copies;
//         cout << "Enter the number of copies required: ";
//         cin >> num_copies;
//         // Process the transaction
//         inventory.transaction(title, author, num_copies);
//     }
//     else
//     {
//         cout << "The book is not available." << endl;
//     }
//     return 0;
// }