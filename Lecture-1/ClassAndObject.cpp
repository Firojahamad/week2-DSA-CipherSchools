#include<iostream>
using namespace std;
class student{
	public:
		
		string name;
		int id;
		void show()
		{
			cout<<"My name is "<<name<<endl;
			cout<<"my id is "<<id<<endl;
		}
		void set(string s)
		{
			cout<<"Location is "<<s<<endl;
		}
};
int main()
{
	student st;
	st.name="Cipher school";
	st.id=2;
	st.show();
	st.set("Jalandhar");
	return 0;
}
