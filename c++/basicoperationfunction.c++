// this program is for hactoberfest using c++ program and it is for begineers
// this program may include basic functions in c++ program using all the operations

#include <bits/stdc++.h>
#include <cmath>


int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}

int multiply(int a, int b){
    return a*b;
}

int division(int a, int b){
    return a/b;
}

int modulo(int a, int b){
    return a%b;
}

int power(int a, int b){
    return pow(a,b);
}

int squareroot(int a){
    return sqrt(a);
}

int cube(int a){
    return a*a*a;
}

int andand(int a, int b){
    return a&&b;
}

int oror(int a, int b){
    return a||b;
}

int notnot(int a){
    return !a;
}

int xorxor(int a, int b){
    return a^b;
}

int leftleft(int a, int b){
    return a<<b;
}

int rightright(int a, int b){
    return a>>b;
}

bool ternary(int a, int b){
    return a>b?true:false;
}


using namespace std;

int main(){
    int x,y;
    x=10; y=5;
    add(x,y);
    sub(x,y);
    multiply(x,y);
    division(x,y);
    modulo(x,y);
    power(x,y);
    squareroot(x);
    cube(x);
    andand(x,y);
    oror(x,y);
    notnot(x);
    xorxor(x,y);
    notnot(y);
    leftleft(x,y);
    rightright(x,y);
    ternary(x,y);
    return 0;
}