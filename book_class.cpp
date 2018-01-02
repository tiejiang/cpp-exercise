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
        double price;
        double number;
        string name;
        string Author;
        string get_other_info(void);
        int get_total_number(void){

            return get_book_number();
        }

    private:
        int get_book_number(void);
};

string book_class::get_other_info(void){

    string str = "no other info get";
    return str;

}

int book_class::get_book_number(void){
    
    return 23;
}
int main(){
    
    book_class mBook;
    mBook.price = 456;
    mBook.number = 123;
    mBook.name = "the name of age";
    mBook.Author = "tiejiang";

    cout<< "book price= "<< mBook.price<<
    " book number= "<< mBook.number<< 
     " book Author= "<< mBook.Author<< endl;

    cout<< "other info= "<<  mBook.get_other_info()<< endl;
    cout<< "total book number= "<< mBook.get_total_number()<< endl;

}
