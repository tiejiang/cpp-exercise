/*************************************************************************
	> File Name: book_class.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月02日 星期二 16时53分14秒
 ************************************************************************/

#include<iostream>
using namespace std;

class book_class{

    public:
        static int book_account;
        double price;
        double number;
        string name;
        string Author;
        string get_other_info(void);
        book_class(double number);
        book_class(double number, double book_price);
        int get_book_info(void){

            int number = get_book_number();
            string name = get_book_name();
            cout<< "book number= "<< number<< " book name= "<< name<< endl;
            return 0;
        }
        friend void print_book_info(void);
        ~book_class();
        book_class(const book_class &book_class_obj);
        double get_number(); 

    private:
        double *ptr;
        int get_book_number(void);
        string get_book_name(void);

};

book_class::book_class(double number){

    ptr = new double;
    number = number;
    *ptr = number;
}

book_class::book_class(double number, double book_price):number(number), price(book_price){
    
    cout<< "object is Created and number= "<< number<< endl;
//    ptr = new double;
//    *ptr = number;
}

book_class::~book_class(){

    cout<< "this class was destoryed"<< endl;
    delete ptr;
}

book_class::book_class(const book_class &book_class_obj){

    cout<< "use copy construct func"<< endl;
    ptr = new double;
    *ptr = *book_class_obj.ptr;

}

int book_class::book_account=4;

string book_class::get_other_info(void){

    string str = "no other info get";
    return str;

}

double book_class::get_number(){
    
    return *ptr;
}

string book_class:: get_book_name(void){
    
    return "this book has no name";
}

int book_class::get_book_number(void){
    
    return 23;
}

void display(book_class book_class_copy){
    
    book_class_copy.get_number();
}

void print_book_info(book_class book_class_obj){
    
    cout<< "book_info= "<< book_class_obj.number<< endl;
}

inline int getMaxNumber(int a, int b){

    return (a>b)?a:b;
}

class ChineseBook: public book_class{
    
    public:
        string book_name;
        string data;
        int book_price;
        double book_number;
        ChineseBook(double number);
        string get_book_name(void);

    private:


};

ChineseBook::ChineseBook(double number){
    
    book_number = number;
}

string ChineseBook::get_book_name(void){

    return "this chinese book is new and no name yet";
}

int main(){
    
//    book_class mBook(45, 12334);
    book_class mBook(23);
    book_class *book_class_ptr;
    book_class_ptr = &mBook;
    cout<< "book number= "<< book_class_ptr->number<< endl;
    cout<< "book other info= "<< book_class_ptr->get_other_info()<< endl;
//    cout<< "the init book number= "<< mBook.number<< " the init book price= "<< mBook.price<< endl;
//    mBook.get_number();
//    mBook.price = 456;
//    mBook.number = 123;
//    mBook.name = "the name of age";
//    mBook.Author = "tiejiang";

//    cout<< "book price= "<< mBook.price<<
//    " book number= "<< mBook.number<< 
//    " book Author= "<< mBook.Author<< endl;

//    cout<< "other info= "<<  mBook.get_other_info()<< endl;
//    mBook.get_book_info();
    display(mBook);
    print_book_info(mBook);
    cout<< "max value= "<< getMaxNumber(10, 20)<< endl;
    cout<< "max value= "<< getMaxNumber(30, 20)<< endl;
    cout<< "book account= "<< mBook.book_account<< endl;
   // cout<< "total book number= "<< mBook.get_total_number()<< endl;
//    ChineseBook mChineseBook("new book");
//    cout<< "get book name= "<< mChineseBook.get_book_name()<< endl;
}
