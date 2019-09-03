#include<iostream>
using namespace std;
class aa{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    void get_value(int x,int y,int z){
        a=x;
        b=y;
        c=z;
    }
};

class bb : public aa{
    public:
    void display(){
        cout<<b+1<<"\n";
        cout<<c+1;
    }
};
main(){
    bb A;
    A.get_value(1,2,3);
    A.display();
}

