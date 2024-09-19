/*Q.No. 3
Write a program create employee class with members variable as EmpId,Name of Employee and Salary. 
For 10 Employees
Print list of all employees.
Print list of employee who got heights salary.
*/
#include<iostream>
using namespace std;
class Emp
{
	private:
		int id,salary;
		char name[30];
	public:
		void set(int d,char z[],int s)
		{
			id=d;
			strcpy(name,z);
			salary=s;
			
		}
		void check_salary(){
			if(salary>50000){
				cout<<"\nId="<<id<<"\nName="<<name<<"\nSalary="<<salary;
			}
		}
		void show()
		{
			cout<<"\nId="<<id<<"\nName="<<name<<"\nSalary="<<salary;
		}
		int fun()
		{
			return(salary);
		}
};
main()
{
	int size=2,i,salary1;
	
	Emp *obj=new Emp[size];
	Emp *ptr=obj;
	int id,sal;
	char name[50];
	cout<<"\nEnter 10 Employee information";
	for(i=1;i<=size;i++)
	{
		cout<<"\nEnter the ID of "<<i<<" Employee:";
		cin>>id;
		cout<<"\nEnter the Name of "<<i<<" Employee:";
		cin>>name;
		cout<<"\nEnter the Salary of "<<i<<" Employee:";
		cin>>sal;
		obj->set(id,name,sal);
		obj++;	
	}
	cout<<"\nList of All Employee:";
	for(i=1;i<=size;i++)
	{
		ptr->show();
		ptr++;
	}
}

	
