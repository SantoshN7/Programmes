#include<iostream>
#include<string.h>
using namespace std;

class String{
    private:
        int length;
        char *str;
    public:
        //default constructor
        String(){length=0;str=new char[length+1];}
        //parameterice constructor
        String(char *string){
            length=strlen(string);
            str=new char[length+1];
            strcpy(str,string);
        }
        //copy constructor
        String(String &A){
            length=A.length;
            str=new char[length];
            strcpy(str,A.str);
        }

        friend void concat(String A,String B);
        void display(){
            cout<<"\n"<<str;
        }
};
void concat(String A,String B){
    char *str1,*str2;
    str1=new char[A.length];
    str2=new char[B.length];
    strcpy(str1,A.str);
    strcpy(str2,B.str);
    strcat(str1,str2);
    cout<<str1;
    cout<<"hen";
}
main(){
    String A,B,C;//default
    A=String("santosh");//parameterised
    B=String(" nice");//parameterised
    concat(A,B);
    C=B;//copy
    C.display();
}
