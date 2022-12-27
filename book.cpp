#include<bits/stdc++.h>
using namespace std;
class pub{
protected:
string title;
float price;
public:
    void putdata(){
cout<<"enter title:";
cin>>title;
cout<<"enter price: ";
cin>>price; 
}
   void getdata(){
cout<<"title is:"<<title<<endl;
cout<<"price is:"<<price<<endl;
}
};
class book:public pub{
private:
int pcount;
public:
   book(){               
title="";
price=0;
pcount=0;
}
   void putdatab(){
putdata();
cout<<"enter pagecount:";
cin>>pcount;
}
   void getdatab(){
getdata();
cout<<"pagecount is: "<<pcount<<endl;
}
};
class tape:public pub{
private:
int ptime;
public:
tape(){
title="";
price=0;
ptime=0;
}
   void putdatat(){
putdata();
cout<<"enter playtime:";
cin>>ptime;
}
  void getdatat(){
getdata();
cout<<"playtime: "<<ptime<<"minutes"<<endl;
}
};
int main(){
book p;
tape t;
p.getdatab();
t.getdatat();

p.putdatab();
t.putdatat();

p.getdatab();
t.getdatat();


return 0;
}
