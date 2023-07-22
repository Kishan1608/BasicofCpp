#include<iostream>
using namespace std;

class Parent{
    public:
    int x;

    protected:
    int y;

    private:
    int z;
};

class Child1: public Parent{
    //x will be public
    //y will be protected
    //z will be inaccessible
};

class Child2: private Parent{
    //x will become private
    //y will become private
    //z will be inaccessible
};

class Child3: private Parent{
    //x will be protected
    //y will be protected
    //z will be inaccessible
};

int main(){

    return 0;
}