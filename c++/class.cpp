#include<iostream>
using namespace std;
static int count;
class student{
    int rollno;
    char *name;
    float percentage;
    public:
    student(){}
    student(int r,char* n,float p){
        rollno=r;
        name=n;
        percentage=p;
        count++;
    }
    void display(void);
    friend void compair(student,student);
    int getcount(){
        return count;
    }
};
void student :: display(void){
    cout<<"rollno:"<<rollno<<"\n"<<"name:"<<name<<"\n"<<"percentage:"<<percentage;
    cout<<"\n"<<getcount();
} 
void compair(student A,student B){
    if(A.percentage==B.percentage){
        cout<<"Bot are equal";
    }
    else if(A.percentage>B.percentage){
        cout<<A.name<<" is Smarter";
    }
    else{
        cout<<B.name<<" is smarter";
    }
}
main(){
    student S1,S2;
    S1=student(1,"santosh",80.90);
    S2=student(2,"abhi",80.90);
    S1.display();
    S2.display();
    compair(S1,S2);
}