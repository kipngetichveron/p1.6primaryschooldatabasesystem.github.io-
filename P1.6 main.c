//Necessary header files
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


//Variable to store student data
int i = 0;


//Structure to hold students data
struct studentdata
{
char fname[25];
char sname[25];
long int rnumber;
int grade;
}
data[500];


//Function to add students details
void addstudent()
{
{
printf("\nEnter students first name:");
scanf("%s", data[i].fname);
printf("Enter students second name:");
scanf("%s", data[i].sname);
printf("Enter students registration number:");
scanf("%ld", &data[i].rnumber);
printf("Enter students grade:");
scanf("%d", &data[i].grade);
printf("Student details added successfully");
}
i = i + 1;
}


//Function to update student details
void updatestudent()
{
int RNUMBER;
printf("\nEnter students registration number:");
scanf("%ld", &RNUMBER);

if(RNUMBER == data[i].rnumber)
{
printf("Enter students new first name:");
scanf("%s", data[i].fname);
printf("Enter students new second name:");
scanf("%s", data[i].sname);
printf("Enter students new registration number:");
scanf("%ld", &data[i].rnumber);
printf("Enter students new grade:");
scanf("%d", &data[i].grade);

printf("Students details updated successfully");
}
}


//Function to delete the student by registration number
void deletestudent()
{
int RNUMBER;
printf("\nEnter students registration number:");
scanf("%ld", &RNUMBER);
int j;
for(j = 1; j <= i; j++)
{
if(RNUMBER == data[i].rnumber)
{
int k;
for(k = 1; k <= 5; k++)
data[k] = data[k + 1];
i--;
printf("Student deleted successfully");
}
}
}


//Function to find a student by registration number
void findstudent()
{
int RNUMBER;
printf("\nEnter students registration number:");
scanf("%ld", &RNUMBER);
int j;
for(j = 0; j < i; j++)
{
if(RNUMBER == data[i].rnumber)
{
printf("First name:%s\n", data[i].fname);
printf("Second name:%s\n", data[i].sname);
printf("Grade:%d", data[i].grade);
}
}
}


//Function to print the total number of students
void totalstudents()
{
printf("\nTotal number of students is:%d\n", i);
printf("You can have a maximum of 500 students");
}


//Driver code
void main()

{
int choice, count;
while(i = 1)
{
printf("\n\n1. Add students details\n");
printf("2. Update the student details\n");
printf("3. Delete a student by registration number\n");
printf("4. Find the student by registration number\n");
printf("5. Print the total number of students\n");
printf("6. Exit\n");
printf("Choose the task you want to perform:");
scanf("%d", &choice);
switch (choice)
{
case 1:
addstudent();
break;
case 2:
updatestudent();
break;
case  3:
deletestudent();
break;
case 4:
findstudent();
break;
case 5:
totalstudents();
break;
case 6:
exit(0);
break;
}
}

}