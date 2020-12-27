#include<iostream>
#include<conio.h>
using namespace std;
struct employee
{
	char empid[20],fname[20],m[20],l[20],desi[20],salary[20];
	int age;
};
	int main()
	{
		struct employee emp[10];
		int i,n;
		cout<<"Enter Number of Employees\n";
		cin>>n;
		for(i=0;i<n;i++)
		{
			cout<<"\nEnter Data for "<<i+1<<" Employee\n";
			cout<<"Enter Employee id\n";
			cin>>emp[i].empid;
			cout<<"Enter first name of Employee\n";
			cin>>emp[i].fname;
			cout<<"Enter Middle name of Employee\n";
			cin>>emp[i].m;
			cout<<"Enter Last name of Employee\n";
			cin>>emp[i].l;
			cout<<"Enter Age of "<<emp[i].fname<<" "<<emp[i].m<<" "<<emp[i].l<<endl;
			cin>>emp[i].age;
			cout<<"Enter Salary of "<<emp[i].fname<<" "<<emp[i].m<<" "<<emp[i].l<<endl;
			cin>>emp[i].salary;
			cout<<"Enter designation of "<<emp[i].fname<<" "<<emp[i].m<<" "<<emp[i].l<<endl;
			cin>>emp[i].desi;
		}
		cout<<"\n\tDetails of Employee\n";
		cout<<"\tEmp_id\tEmployee_name\tAge\tSalary\tDesignation\n";
		for(i=0;i<n;i++)
		{
			cout<<"\t"<<emp[i].empid<<"\t"<<emp[i].fname<<" "<<emp[i].m<<" "<<emp[i].l<<"\t"<<emp[i].age<<"\t"<<emp[i].salary<<"\t"<<emp[i].desi<<"\n";
		}
		return 0;
	}
