#include<iostream>

using namespace std;

class vector{
    int x;
    int y;
    public:
    vector(){x=0;y=0;}
    vector(int a,int b){x=a;y=b;}
    vector operator +(vector);//binary
    void operator ++();//unary
    void display(){
        cout<<"x:"<<x<<"\t"<<"y:"<<y<<endl;
    }
};
vector vector :: operator +(vector A){
    vector temp;
    temp.x=x+A.x;
    temp.y=y+A.y;
    return(temp);
}
void vector :: operator ++(){
    x=x+1;
    y=y+1;
}

main(){
    vector a,b,c;
    a=vector(2,4);
    b=vector(3,4);
    c=a+b; //binary call
    c.display();
    ++a; //unary call
    a.display();
}
