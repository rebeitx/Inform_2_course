#include <iostream>
using namespace std;
struct dot
{
    int x;
    int y;
    dot(){
        this->x = 0;
        this->y = 0;
    }
    dot(int x, int y){
        this->x = x;
        this->y = y;
    }
    void setCord(int x, int y){
        this->x = x;
        this->y = y;
    }
    void giveCord(){
        cout << this->x << " " << this->y << endl;;
    }
};

struct curcle
{
    dot a;
    int r;
    curcle(){
        this->a.setCord(0, 0);
        this->r = 0;
    }
    curcle(int x, int y, int r){
        this->a.setCord(x, y);
        this->r = r;
    }
    void setCord(int x, int y){
        this->a.setCord(x,y);
    }
    void setRad(int r){
        this->r = r;
    }
    void giveCordRad(){
        this->a.giveCord();
        cout << " " << this->r << endl;
    }
};

struct square
{
    dot a;
    int r;
    square(){
        this->a.setCord(0, 0);
        this->r = 0;
    }
    square(int x, int y, int r){
        this->a.setCord(x, y);
        this->r = r;
    }
    void setCord(int x, int y){
        this->a.setCord(x,y);
    }
    void setLen(int r){
        this->r = r;
    }
    void giveCordLen(){
        this->a.giveCord();
        cout << " " << this->r << endl;
    }
};

int main(){
    dot a(2,3);
    a.giveCord();
    square b(2,3,5);
    b.giveCordLen();
}
