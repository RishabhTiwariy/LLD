#include<iostream>
#include"Inheritance.cpp"
using namespace std;

int main(){
    Inheritance a(10);
    cout<<a.getX()<<'\n';
    a.setX(80);
    cout<<a.getX()<<'\n';
    return 0;
}