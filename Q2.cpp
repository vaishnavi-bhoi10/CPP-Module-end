/*Write a program to print the area of two rectangles having sides (4,5)
and (5,8) respectively by creating a class named 'Rectangle' with a 
function named 'Area' which returns the area.Length */
#include<iostream>
using namespace std;
class Rectangle
{
	private:
		float lenght,breadth;
	public:
		
	void set(float l,float b)
		{
			lenght=l;
			breadth=b;
		}
   int Area()
    {
      return lenght *breadth ;	
    }	
};
main()
{
	Rectangle r1,r2;
	r1.set(4,5);
	r2.set(5,8);
	r1.Area();
	r2.Area();
	cout<<"\n---------------AREA OF RECTANGLE-------------\n";
	cout <<"\nArea of Rectangle 4 * 5 = " << r1.Area() ;
    cout <<"\nArea of Rectangle 5 * 8 = " << r2.Area();
}