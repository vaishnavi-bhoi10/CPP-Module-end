#include <iostream>
#include <fstream>
using namespace std;
class Student 
{
public:
    int id;
    string name;
    void addRecord()
	 {
        ofstream file("students.txt", ios::app);
        cout<<"\nEnter the Student ID :- ";
        cin>>id;
		cout<<"\nEnter the Student Name :- ";
        cin>>name;
        file<<id<<" "<<name<<endl;
        file.close();
    }
    void listRecords() 
	{
        ifstream file("students.txt");
        while (file>>id>>name)
		 {
            cout<<id<<" "<<name<<endl;
        }
        file.close();
    }
};
int main() 
{
    Student student;
    int choice, id;

    while (true) 
	{
        cout << "\n1. Add Record\n2. List Records\n3. Exit ";
        cout<<"\nChoose an option:- ";
        cin >> choice;

        switch (choice)
		 {
            case 1: 
			student.addRecord();
			break;
			
            case 2: 
			student.listRecords();
			break;
			
            case 3:
			 return 0;
			 
            default:
			 cout << "Invalid choice \n";
         }
    }
}