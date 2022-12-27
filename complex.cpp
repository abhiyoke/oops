#include<bits/stdc++.h>
using namespace std;
class complex1{
float real,img;
public:
complex1(){
real=0;
img=0;
cout<<"intialized"<<endl;
}
complex1(float x,float y){
real=x;
img=y;
}
void display(){ 
cout<<"complex no. is:"<<real<<"+i"<<img<<endl;
}
complex1 operator+ (complex1 temp){
complex1 temp2;
temp2.real=real+temp.real;
temp2.img=img+temp.img;
return temp2;
}
complex1 operator-(complex1 temp){
complex1 temp2;
temp2.real=real-temp.real;
temp2.img=img-temp.img;
return temp2;
}
complex1 operator*(complex1 temp){
complex1 temp2;
temp2.real=(real*(temp.real)-img*(temp.img));
temp2.img=(real*(temp.img)+img*(temp.real));
return temp2;
}
complex1 operator/(complex1 temp){
complex1 temp2;
temp2.real=(real*(temp.real)+img*(temp.img))/(pow(temp.real,2)+pow(temp.img,2));
temp2.img=(img*(temp.real)-real*(temp.img))/(pow(temp.real,2)+pow(temp.img,2));
return temp2;
}
friend istream &operator>>(istream &mycin,complex1 &temp){        //insertion
cout<<"enter real part"<<endl;
mycin>>temp.real;
cout<<"enter img part:"<<endl;
mycin>>temp.img;
return mycin;
}
friend istream &operator<<(ostream &mycout,complex1 &temp){      //exertion
cout<<"enter real part";
mycout<<temp.real;
cout<<endl;
cout<<"enter img part:";
mycout<<temp.img;
cout<<endl;
//return mycout;
}

};

int main(){
complex1 a(3,2);
complex1 b(4,7);
complex1 c,d,e,f,c1;
c=a+b;
d=b-a;
e=a*b;
f=b/a;
cout<<"additon is:";
c.display();

cout<<"subtraction is:";
d.display();

cout<<"multiplication is:";
e.display();

cout<<"divide is:";
f.display();
cin>>c1;
cout<<c1;
return 0;
}
