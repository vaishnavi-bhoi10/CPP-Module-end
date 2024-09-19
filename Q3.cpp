/*Write a C++ program to create a class Student 
with data members Roll_No, Student_Name, Class. 
Write member functions to accept and display 
Student information also display count of students. 
(Use Static data member and Static member function)
*/
#include<iostream>
using namespace std;
class Student
{
	private:
	int Roll_No;
	string name;
	static int count;
	public:
		void get(int x,string y)
		{
			Roll_No=x;
			name=y;
			count++;
		}
		void show()
		{
			cout<<"\nRoll Number = "<<Roll_No<<endl;
			cout<<"Name of Student= "<<name<<endl;
			
		}
		static void show_value()
		{
		cout<<"\nTotal Count of student ="<<count;
		}
};
int Student::count; 
main()
{
	Student t1,t2,t3;
	Student::show_value(); 
	cout<<"\n";
	t1.get(68,"Vaishnavi");
	t1.show();
	t2.get(69,"Vaibhav");
	t2.show();
	t3.get(70,"Mahavir");
	t3.show();
	Student::show_value(); 

}