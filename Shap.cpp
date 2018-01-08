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

    protected:
        int width;
        int height;
        
};

class Rectangle:public Shap{

    public:
    int getArea(){

        return(width*height);
    }
};

int main(){
    
    Rectangle Rect;

    Rect.setWidth(5);
    Rect.setHeight(6);
    cout<< "total area: "<< Rect.getArea()<< endl;

    return 0;
}
