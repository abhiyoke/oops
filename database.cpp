#include<bits/stdc++.h>
using namespace std;
class student{    
string name;
int roll;
string clas;
char div;
string tele;
static int count;
public:
 student(){                 //default constructor
name='\0';
this->roll=0;               //this pointer
clas="";
div='\0';
tele="";
count++;
}
student(string name,int roll,string clas){   //parametrized constructor
cout<<"name"<<name<<endl;
cout<<"roll no.:"<<roll<<endl;
cout<<"class is:"<<clas<<endl;}
void accept(){
cout<<"name:";
cin>>name;
cout<<"roll:";
cin>>roll;
cout<<"class:";
cin>>clas;
cout<<"div";
cin>>div;
cout<<"telephoneno.";
cin>>tele;

}
void inline display(){               //inline function
cout<<"name is:"<<name<<endl;
cout<<"roll is:"<<roll<<endl;
cout<<"class is:"<<clas<<endl;
cout<<"division is:"<<div<<endl;
cout<<"telephone no. is:"<<tele<<endl;
}
int retro(){
int k=roll;
return k;
}
static int getcount(){      //static member function
return count;}
friend class lib;           //friend class
};
int student::count;
class lib{
public:
void inline accept(student &t){
cout<<"roll no. is:";
cin>>t.roll;
cout<<"telephone no. is:";
cin>>t.tele;
}
void inline display(student &t){              //copy constructor
cout<<"roll no. is:"<<t.roll;
cout<<"telephone no. is:"<<t.tele;
}
};

int main(){
int n; cin>>n;
student s4;
s4.display();  
cout<<endl;
student s;
lib l;
cout<<"students in libraray:";
l.accept(s);
l.display(s);
cout<<endl;
student s1;
s1.display();
student s2[n];
cout<<"data of students:";
for(int i=0;i<n;i++){
s2[i].accept();                //accept
}
for(int i=0;i<n;i++){
s2[i].display();             //display
}
cout<<endl
cout<<"roll no. to be found:";
int r; cin>>r;
int flag=1;
for(int i=0;i<n;i++){
int a=s2[i].retro();             //search
if(a==r){
flag=0;
}
}
if(flag==0) cout<<"roll no. found";
else cout<<"roll no. not found";
cout<<endl;
student x("abhi",3,"compb");
cout<<"total students:"<<student::getcount()<<endl;
return 0;
}
