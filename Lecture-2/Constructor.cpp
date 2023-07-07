#include<iostream>
using namespace std;
class student{
	private:
		int roll;
		int age;
		string name;
		int marks;
	public:
		string address;
		student()
		{
			age=0;
			marks=0;
			}	
		student(int roll,string name)
		{
			this->roll=roll;
			this->name=name;
			age=25;
			marks=499;
			address="Manipur";
			}	
		void show()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Roll:"<<roll<<endl;
			cout<<"Age:"<<age<<endl;
			cout<<"marks:"<<marks<<endl;
				}		
};
int main()
{
	student obj;
	student ob(1,"Rajesh");
	ob.show();
	int a=10;
	student *ptr=&ob;
	int *pt=&a;
	if(sizeof(ptr)==sizeof(pt))
	cout<<"ture"<<endl;
	else
	cout<<"false"<<endl;
	cout<<ptr->address<<endl;
	cout<<(*ptr).address<<endl;
	student o;
	o=ob;
	o.show();
	
}
