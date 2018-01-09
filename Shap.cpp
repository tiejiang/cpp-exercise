/*************************************************************************
	> File Name: Shap.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月09日 星期二 07时37分53秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Shap{

    public:
    void setWidth(int w){

        width = w;
    }
    void setHeight(int h){

        height = h;
    }
    Shap(int a=0, int b=0){
        width = a;
        height = b;
    }    
    virtual int area(){
        cout<< "Parent area: "<< endl;
        return 0;
    }

    virtual int get_area() = 0;


    protected:
        int width;
        int height;
        
};

class Rectangle:public Shap{

    public:
    Rectangle(int a=0, int b=0):Shap(a, b){}
    int area(){
        cout<< "Rectangle area: "<< endl;
        return(width*height);
    }

    int get_area(){

        return 4;
    }
};

class Triangle:public Shap{
    
    public:
        Triangle(int a=0, int b=0){}
    
        int area(){
            cout<< "Triangle area: "<< endl;
            return (width*height/2);
        } 
        
    int get_area(){
        
        return 9;
    }
};

int main(){
    
    Shap *shap;
    Rectangle Rect(10, 7);
    Triangle Tri(10, 5);

    shap = &Rect;
    shap->area();
    shap->get_area();

    shap = &Tri;
    shap->area();
   // Shap->get_area();

//    Rect.setWidth(5);
//    Rect.setHeight(6);
//    cout<< "total area: "<< Rect.getArea()<< endl;

    return 0;
}
