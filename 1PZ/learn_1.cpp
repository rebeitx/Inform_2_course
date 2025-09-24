#include <iostream>
#include <cmath>
using namespace std;

struct Dot
{
    double x;
    double y;
    Dot(){
        this->x = 0;
        this->y = 0;
    }
    Dot(double x, double y){
        this->x = x;
        this->y = y;
    }
    void setCord(double x, double y){
        this->x = x;
        this->y = y;
    }
    void giveCord(){
        cout << this->x << " " << this->y << endl;;
    }
};

struct Curcle
{
    Dot point;
    double rad;
    Curcle(){
        this->point.setCord(0, 0);
        this->rad = 0;
    }
    Curcle(double x, double y, double r){
        this->point.setCord(x, y);
        this->rad = r;
    }
    void setCord(double x, double y){
        this->point.setCord(x,y);
    }
    void setRad(double r){
        this->rad = r;
    }
    void giveCordRad(){
        this->point.giveCord();
        cout << " " << this->rad << endl;
    }
};

struct Square
{
    Dot point;
    double len;
    Square(){
        this->point.setCord(0, 0);
        this->len = 0;
    }
    Square(double x, double y, double r){
        this->point.setCord(x, y);
        this->len = r;
    }
    void setCord(double x, double y){
        this->point.setCord(x,y);
    }
    void setLen(double r){
        this->len = r;
    }
    void giveCordLen(){
        this->point.giveCord();
        cout << this->len << endl;
    }
};

void Vhod(Curcle a, Dot b){
    if(((a.point.x-b.x)*(a.point.x-b.x)+(a.point.y-b.y)*(a.point.y-b.y))<a.rad*a.rad){
        cout << "Dot in curcle";
    } else{
        cout << "Dot not in curcle";
    }
}

void Vhod(Square a, Dot b){
    if(a.point.x<b.x && a.point.y<b.y && a.point.x+a.len>b.x && a.point.y+a.len>b.y){
        cout << "Dot in square";
    } else{
        cout << "Dot not in square";
    }
}

void OnLine(Curcle a, Dot b){
    if(((a.point.x-b.x)*(a.point.x-b.x)+(a.point.y-b.y)*(a.point.y-b.y))==a.rad*a.rad){
        cout << "Dot on line curcle";
    } else{
        cout << "Dot not on line curcle";
    }
}

void OnLine(Square a, Dot b){
    if((a.point.x == b.x && a.point.y+a.len >= b.y && a.point.y <= b.y) || (a.point.x+a.len == b.x && a.point.y+a.len >= b.y && a.point.y <= b.y) || (a.point.y == b.y && a.point.x+a.len >= b.x && a.point.x <= b.x) || (a.point.y+a.len == b.y && a.point.x+a.len >= b.x && a.point.x <= b.x)){
        cout << "Dot on line square\n";
    } else{
        cout << "Dot not on line square" << endl;  
    }
}
void Peresech(Square a, Square b){
    if (a.point.x <= b.point.x and a.point.y <= b.point.y and a.point.x+a.len >= b.point.x+b.len and a.point.y+a.len >= b.point.y+b.len){
        cout << "Second square inside First";
    } else if(b.point.x <= a.point.x and b.point.y <= a.point.y and b.point.x+b.len >= a.point.x+a.len and b.point.y+b.len >= a.point.y+a.len){
        cout << "First squae inside Second";
    } else{
        cout << "No one inside another square";
    }
}

void Peresech(Curcle a, Curcle b){
    double rTOr = ((a.point.x-b.point.x)*(a.point.x-b.point.x)+(a.point.y-b.point.y)*(a.point.y-b.point.y));
    if (rTOr <= (b.rad - a.rad)*(b.rad - a.rad)){
        cout << "\nCurcle inside curcle";
    }
}

int main(){
    Dot tochka_1(2,3);
    tochka_1.giveCord();
    Square kvadrat_1(2,3,5);
    kvadrat_1.giveCordLen();
    OnLine(kvadrat_1, tochka_1);
    Square kvadrat_2(3,4,2);
    Peresech(kvadrat_1, kvadrat_2);
    Curcle krug_1(0, 0, 4);
    Curcle krug_2(0, 0, 5);
    Peresech(krug_1, krug_2);
}
