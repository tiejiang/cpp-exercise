#include <iostream>

using namespace std;

//#define LENGTH 100
//#define HEIGHT 200

void constTest(){
    
    const int LENGTH = 6; 
    const int HEIGHT = 6;
    cout<< "area= "<< LENGTH*HEIGHT<< endl;
}

//extern void printFuncTest();

void loopTest(){
    
    for(int i=0; i<9; i++){
        cout<< "i= "<< i<<endl;
        if(i==2){
            cout<< "now i = 2, jump to i = 4 judge"<< endl;
            i = 4;
            continue;
        }
        if(i==8){
            cout<< "now i = 8, break"<< endl;
        }
    }
}

void judgeTest(){

    int flag = 4;
    flag<5 ? cout<<"right"<< endl : cout<<"wrong" << endl; 
}

void swap(int *x, int *y){

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    return;
}

void swap_address_copy(int &a, int &b){
    
    int temp;
    temp = a;
    a = b;
    b = temp;
    return;

}

int main(){
    
    //cout<< "area= "<< LENGTH*HEIGHT<< endl;
    //constTest();
   // printFuncTest();
   // loopTest();
    //judgeTest();
    int a = 10;
    int b = 12;
   // swap(&a, &b);
   // cout<< "a= "<< a<< " b= "<<b <<endl;
   swap_address_copy(a, b);
   cout<< "a= "<< a<< " b="<< b<< endl;

    return 0;
}
