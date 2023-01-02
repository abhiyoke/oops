//Program for Hierarchical Inheritance with exception Handling.
#include <bits/stdc++.h>
using namespace std;
class Publication
{
	private:
		string title;
		float price;
	public:
		Publication()
		{
			title="";
			price=0.0;
		}
		Publication(string title, float price)
		{
			this->title = title;
			this->price = price;
		}
		void getData()
		{
			cout<<"\nEnter title and price\n";
			cin>>title>>price;
		}
		void putData()
		{
			try
			{
				if(title.length()<3)
					throw title;
				cout<<"\nTitle is :"<<title;
				if(price<=0.0)
					throw price;
				cout<<"\nPrice is :"<<price;
			}
			catch(float f)
			{
				cout<<"\nError: Price not valid: \t"<<f;
				price=0.0;
			}
			catch(string s)
			{
				cout<<"\nError: Title below 3 characters is not allowed";
				title="";
			}
		}
	
};
class Book: public Publication
{
	private:
		int pages;
	public:
		Book():Publication()
		{
			pages=0;
		}
		Book(string title, float price, int pages):Publication(title,price)
		{
			this->pages=pages;
		}
		void getData()
		{
			Publication::getData();
			cout<<"\nEnter no. of pages in book\n";
			cin>>pages;
		}
		void putData()
		{
			Publication::putData();
			try
			{
				if(pages<0)
					throw pages;
				cout<<"\nPages are :"<<pages;
			}
			catch(int f)
			{
				cout<<"\nError: Pages not valid: \t"<<f;
				pages=0;
			}			
		}
	
};
class Tape_Cassette: public Publication
{
	private:
		float playtime;
	public:
		Tape_Cassette():Publication()
		{
			playtime=0.0;
		}
		Tape_Cassette(string title, float price, float playtime):Publication(title,price)
		{
			this->playtime=playtime;
		}
		void getData()
		{
			Publication::getData();
			cout<<"\nEnter play time of cassette\n";
			cin>>playtime;
		}
		void putData()
		{
			Publication::putData();
			try
			{
				if(playtime<0.0)
					throw playtime;
				cout<<"\nPlaytime is :"<<playtime;
			}
			catch(float f)
			{
				cout<<"\nError: Playtime not valid: \t"<<f;
				playtime=0.0;
			}
		}
	
};
int main()
{
	Book book;
	cout<<"\n******BOOK*****\n";
	book.getData();
	cout<<"\n******CASSETTE*****\n";
	Tape_Cassette cassette;
	cassette.getData();
	cout<<"\n******BOOK*****\n";
	book.putData();
	cout<<"\n******CASSETTE*****\n";
	cassette.putData();
	return 0;
}
