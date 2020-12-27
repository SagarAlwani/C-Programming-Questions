#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int truck=0,car=0,bike=0,tprice=0,cprice=0,bprice=0;
	char park,choicep,choice  ;
	printf("Do you really want to park a Vehicle\n");
	printf("Press Y to Enter the Menu or N to go Home\n");
	scanf("%c",&park);
	while(1)
	{
	
	if(park=='Y'||park=='y')
	{
		printf("Which Vehicle do you want to park\n");
		printf("Press T to park a Truck\n");
		printf("Press C to park a Car\n");
		printf("Press B to park a Bike\n");
		another_park:
		printf("Please Enter a Choice\n");
		scanf("%c",&choicep);
		switch(choicep)
		{
			case 't':
					printf("Your Truck is Parked..\n");
					truck++;
					tprice=tprice+50;
					printf("Do you want to know total collection Done?? Press Y to check or N continue\n");// Stop
					if(choice=='Y'||choice=='y')
					goto tcollection;
					printf("Do you want to Park another Vehicle Press Y to check or N continue\n");
					if(choice=='Y'||choice=='y')
					goto another_park;
					printf("Do you want to know total no of Vehicles Parked? Press Y to Enter or N to Exit\n");
					if(choice=='Y'||choice=='y')
					printf("Total no of Trucks Parked are : %d",truck);
					printf("Total no of Cars Parked are : %d",car);
					printf("Total no of Bikes Parked are : %d",bike);
					printf("Done with all the Stuff!!Now Go Out");
					goto g_out;
					break;
			case 'T':
					printf("Your Truck is Parked..\n");
					truck++;
					tprice=tprice+50;
					printf("Do you want to know total collection Done?? Press Y to check or N continue\n");
					if(choice=='Y'||choice=='y')
					goto tcollection;
					printf("Do you want to Park another Vehicle Press Y to check or N continue\n");
					if(choice=='Y'||choice=='y')
					goto another_park;
					printf("Do you want to know total no of Vehicles Parked? Press Y to Enter or N to Exit\n");
					if(choice=='Y'||choice=='y')
					printf("Total no of Trucks Parked are : %d",truck);
					printf("Total no of Cars Parked are : %d",car);
					printf("Total no of Bikes Parked are : %d",bike);
					printf("Done with all the Stuff!!Now Go Out");
					goto g_out;
					break;
			case 'c':
					printf("Your car is Parked..\n");
					car++;
					cprice=cprice+30;
					printf("Do you want to know total collection Done?? Press Y to check or N continue\n");
					if(choice=='Y'||choice=='y')
					goto tcollection;
					printf("Do you want to Park another Vehicle Press Y to check or N continue\n");
					if(choice=='Y'||choice=='y')
					goto another_park;
					printf("Do you want to know total no of Vehicles Parked? Press Y to Enter or N to Exit\n");
					if(choice=='Y'||choice=='y')
					printf("Total no of Trucks Parked are : %d",truck);
					printf("Total no of Cars Parked are : %d",car);
					printf("Total no of Bikes Parked are : %d",bike);
					printf("Done with all the Stuff!!Now Go Out");
					goto g_out;
					break;
			case 'C':
					printf("Your car is Parked..\n");
					car++;
					cprice=cprice+30;
					printf("Do you want to know total collection Done?? Press Y to check or N continue\n");
					if(choice=='Y'||choice=='y')
					goto tcollection;
					printf("Do you want to Park another Vehicle Press Y to check or N continue\n");
					if(choice=='Y'||choice=='y')
					goto another_park;
					printf("Do you want to know total no of Vehicles Parked? Press Y to Enter or N to Exit\n");
					if(choice=='Y'||choice=='y')
					printf("Total no of Trucks Parked are : %d",truck);
					printf("Total no of Cars Parked are : %d",car);
					printf("Total no of Bikes Parked are : %d",bike);
					printf("Done with all the Stuff!!Now Go Out");
					goto g_out;
					break;
			case 'b':
					printf("Your Bike is Parked..\n");
					bike++;
					bprice=bprice+50;
					printf("Do you want to know total collection Done?? Press Y to check or N continue\n");
					if(choice=='Y'||choice=='y')
					goto tcollection;
					printf("Do you want to Park another Vehicle Press Y to check or N continue\n");
					if(choice=='Y'||choice=='y')
					goto another_park;
					printf("Do you want to know total no of Vehicles Parked? Press Y to Enter or N to Exit\n");
					if(choice=='Y'||choice=='y')
					printf("Total no of Trucks Parked are : %d",truck);
					printf("Total no of Cars Parked are : %d",car);
					printf("Total no of Bikes Parked are : %d",bike);
					printf("Done with all the Stuff!!Now Go Out");
					goto g_out;
					break;
		case 'B':
					printf("Your Bike is Parked..\n");
					bike++;
					bprice=bprice+10;
					printf("Do you want to know total collection Done?? Press Y to check or N continue\n");
					if(choice=='Y'||choice=='y')
					goto tcollection;
					printf("Do you want to Park another Vehicle Press Y to check or N continue\n");
					if(choice=='Y'||choice=='y')
					goto another_park;
					printf("Do you want to know total no of Vehicles Parked? Press Y to Enter or N to Exit\n");
					if(choice=='Y'||choice=='y')
					printf("Total no of Trucks Parked are : %d",truck);
					printf("Total no of Cars Parked are : %d",car);
					printf("Total no of Bikes Parked are : %d",bike);
					printf("Done with all the Stuff!!Now Go Out");
					goto g_out;
					break;
		default :
					printf("Wrong Choice Entered Please Try Again\n");
					goto another_park;			
		}
	}
	g_out:
			exit(0);
}
	tcollection:
			printf("Total Collection Done = %d",bprice+tprice+cprice);
}
