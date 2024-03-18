#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
template<class T>
class calculator
{
private:
T num1;
public:
calculator(T n1)
{
num1=n1;
}
void display()
{
cout<<"Numbers are:"<<num1<<endl;
cout<<"Square is :"<<square()<<endl;
cout<<"Cube is:"<<cube()<<endl;
}
T square(){return num1*num1;}
T cube(){return num1*num1*num1;}
};
int main()
{
calculator<int>intcalc(2);
calculator<float>floatcalc(3.0);
cout<<"Int result"<<endl;
int calcdisplay();
cout<<"Float result"<<endl;
floatcalc.display();
return 0;
}
