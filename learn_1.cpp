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
    if(sqrt((a.point.x-b.x)*(a.point.x-b.x)+(a.point.y-b.y)*(a.point.y-b.y))<a.rad){
        cout << "Dot in curcle";
    } else{
        cout << "Dot not in curcle";
    }
}

void Vhod(Square a, Dot b){
    if(a.point.x<b.x and a.point.y<b.y and a.point.x+a.len>b.x and a.point.y+a.len>b.y){
        cout << "Dot in square";
    } else{
        cout << "Dot not in square";
    }
}

void OnLine(Curcle a, Dot b){
    if(sqrt((a.point.x-b.x)*(a.point.x-b.x)+(a.point.y-b.y)*(a.point.y-b.y))==a.rad){
        cout << "Dot in curcle";
    } else{
        cout << "Dot not in curcle";
    }
}

void OnLine(Square a, Dot b){
    if((a.point.x == b.x and a.point.y+a.len >= b.y and a.point.y <= b.y) or (a.point.x+a.len == b.x and a.point.y+a.len >= b.y and a.point.y <= b.y) or (a.point.y == b.y and a.point.x+a.len >= b.x and a.point.x <= b.x) or (a.point.y+a.len == b.y and a.point.x+a.len >= b.x and a.point.x <= b.x)){
        cout << "Dot in square";
    } else{
        cout << 111;
        cout << a.point.x << " " << a.point.x+a.len << " " << a.point.y << " " << a.point.y+a.len << " " << b.x << " " << b.y;
        cout << "Dot not in square" << endl;
        
    }
}

int main(){
    Dot a(2,3);
    a.giveCord();
    Square b(2,3,5);
    b.giveCordLen();
    Vhod(b, a);
}
