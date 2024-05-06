#include<iostream>
using namespace std;

class Father
{
	public:
		string property="House";
};

class son1:Father
{
	string name="Jyoti";
	public:
	void show()
	{
		cout<<name<<""<<property<<endl;
	}
};
class son2:Father
{
	string name="Rutuja";
	public:
	void disp()
	{
		cout<<name<<""<<property<<endl;
    }
};
int main()
{
	son1 s1;
	s1.show();
	
	son2 s2;
	s2.disp();
	
	return 0;
}
    
