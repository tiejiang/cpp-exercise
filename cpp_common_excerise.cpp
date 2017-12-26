#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
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

void arrayTest(){
    
    int temp[] = {10, 20, 30, 6};
    int *temp_pointer = temp;
    int *temp_pointer_end = temp;
    for(int i=0; i<4; i++){
        cout<< "temp["<< i<< "]"<< " ="<< temp[i]<< endl;
    }
    cout<< "temp[0]= "<< *temp_pointer<< endl;
    cout<< "temp[1]= "<< *(temp_pointer+1)<< endl;
    for(int j=0; j<4; j++){
        cout<< "array value= "<< *(temp_pointer_end+j)<< endl;    
    };
}

void pointer_array(int *param){
    
    int *temp = param;
    for(int i=0; i<3; i++){
        cout<< "param value= "<< *(temp+i)<< endl;
    }

}

void set_value_to_pointer_array_func(){
    
    int test_array[] = {1, 3, 4, 6, 23, 5};
    pointer_array(test_array);
}

int *pointer_func_test(){

    static int receive_array[5];
    srand((unsigned)time(NULL));
    for(int i=0; i<5; i++){
        receive_array[i] = rand();
        cout<< "receive[]= "<< receive_array[i]<< endl;
    }
    return receive_array;
}

void get_pointer_func_test_value(){

    int *temp = pointer_func_test();
    for(int i=0; i<5; i++){
        cout<< "temp value = "<< *(temp+i)<< endl; 
    }
  
}

void string_test(){
    
    char greeting[] = {'h', 'l', 'l' };
    char temp[3];
    strcpy(temp,greeting);
    cout<< "value = "<< greeting<< endl;
    cout<< "temp value= "<< temp<< endl;
}

void pointer_array(){

    int var[] = {1, 3, 54, 6};
    int *pointer[4];

    for(int i=0; i<4; i++){
        pointer[i] = &var[i];

        cout<< "value of pointer[]= "<< *pointer[i] <<endl;
    }
    
}

void pointer_string_array(){
    
    const char *names[3] = {"we", "adf", "afr"};
    for(int i=0; i<3; i++){
        cout<< "string value= "<< names[i]<< endl;
    }
}

void pointer_pointer_test(){

    int a = 500;
    int *pointer_a;
    int **pointer_pointer_a;
    pointer_a = &a;
    pointer_pointer_a = &pointer_a;
    cout<< "a address= "<< pointer_a<< endl;
    cout<< "pointer address= "<< pointer_pointer_a<< endl;
    cout<< "a value= "<< *pointer_a <<endl;
    cout<< "or "<< **pointer_pointer_a<< endl;
}

void transfer_pointer(int *value){

    *value = 12;
}

void set_transfer_pointer(){
    
    int temp = 3;
    transfer_pointer(&temp);
    cout<< "value temp= "<< temp<< endl;
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
  // swap_address_copy(a, b);
   //cout<< "a= "<< a<< " b="<< b<< endl;
    //arrayTest();
   // set_value_to_pointer_array_func();
  // get_pointer_func_test_value();
  //string_test();
   // pointer_array();
   //pointer_string_array();
   //pointer_pointer_test();
   set_transfer_pointer();

    return 0;
}
