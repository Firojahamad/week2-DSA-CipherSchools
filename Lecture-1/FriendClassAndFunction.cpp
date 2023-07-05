//friend class :-A friend class can access the private and protected data member of the class outside the class.
#include<iostream>
using namespace std;
class Organization{
	private:
		int password;
	protected:	
		int id;
	public:
		string name;
		int age;
	void setPrivate(int pass,int d)
	{
		password=pass;
		id=d;
			}
	void setPublic(string n,int a){
		name=n;
		age=a;
	}	
	void showPublic()
	{
		cout<<name<<endl;
		cout<<age<<endl;
	}
	friend class Admin;
	friend void hacker(Organization p);
};
void hacker(Organization p)
{
	cout<<p.password<<endl;
}
class Admin{
	public:
		showAll(Organization o)
		{
			cout<<"Name: "<<o.name<<endl;
			cout<<"Age: "<<o.age<<endl;
			cout<<"Password: "<<o.password<<endl;
			cout<<"Id: "<<o.id<<endl;
		}	
};
int main()
{
	Organization m;
	m.setPrivate(12345,32);
	m.setPublic("Ramesh",21);
	Admin am;
	cout<<"Called by admin"<<endl;
	am.showAll(m);
	cout<<"Called by organization"<<endl;
	m.showPublic();
	hacker(m);
}
