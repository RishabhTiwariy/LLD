#include<iostream>
#include"Inheritance.h"

using namespace std;

Inheritance::Inheritance(int x) : x(x){}

int Inheritance::getX(){
    return x;
}

void Inheritance::setX(int x){
    this->x = x;
}

int Inheritance::complexCalculation(int a, int b){
    cout<<"Complex cal\n";
    return 0;
}