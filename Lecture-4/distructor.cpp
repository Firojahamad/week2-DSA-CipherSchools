#include<iostream>
using namespace std;
class A{
	private:
		int a,b;
		int sum;
	public:
		A():a(0),b(0){}
		A(int a,int b):a(a),b(b){}
		void show()
		{
			sum=a+b;
			cout<<sum<<endl;
		}
		~A()
		{
			cout<<"hello i am distructor"<<endl;
		}
};
int main()
{
	A ob(4,5);
	ob.show();
}
