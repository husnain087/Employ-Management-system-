#include <iostream>
#include <windows.h>
#include <fstream>
#include <conio.h>
#include <iomanip>
using namespace std;
void mainmenu();

const int MAX_GUARDS = 50;
const int MAX_WEEPERS = 50;

// Attributes for Guards
char guardNames[MAX_GUARDS][50];
int guardAges[MAX_GUARDS];
char guardDutyShifts[MAX_GUARDS];
int guardCount = 0;

// Attributes for Weepers
char weeperNames[MAX_WEEPERS][50];
int weeperAges[MAX_WEEPERS];
char weeperAssignedAreas[MAX_WEEPERS][50];
int weeperCount = 0;

	string name[100];
	string  ids[100];
	string  address[100];
	string department[100];
	int salary[100];
	 string contact[100] ;
	 const int MAX_TEACHERS = 100;
const int MAX_NAME_LENGTH = 50;
const int MAX_SUBJECT_LENGTH = 50;
		string names[MAX_TEACHERS];
    int ages[MAX_TEACHERS];
    string subjects[MAX_TEACHERS];
    int numTeachers = 0;


int total= 0 ; // global variable
void displayteacherMenu() {
    cout << "\nTeacher Management System\n";
    cout << "1. Add Teacher\n";
    cout << "2. Display Teachers\n";
    cout << "3. Search Teacher\n";
    cout << "4. Update Teacher\n";
    cout << "5. Delete Teacher\n";
    cout << "6. Exit\n"<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"7.For The Entering into cleaning staff managment";
}





void empdata()
{
	char opt ;
	int choice;
	A:
	cout << "\nHow many employees data do you want to enter ??"<<endl;
	cout << "Enter Number of Employes: " ;
	cin >> choice;
	ofstream fout("Employee.txt" ,ios::app);
	for(int i=total ; i<total+choice ; i++)
	{
		cout << "\nEnter data of employee "<< i+1 <<endl;
		cout << "Enter employee name: ";
		cin >> name[i];
		fout << name[i]<< endl;
		cout << "Enter id: ";
		cin >> ids[i];
		fout << ids[i] << endl;
		cout << "Enter address: ";
		cin >> address[i];
		fout << address[i] << endl;
		cout << "Enter contact: ";
		cin >> contact[i];
		fout << contact[i] << endl;
		cout << "Enter salary: ";
		cin >> salary[i];
		fout <<salary[i] << endl;
		cout << "Enter department: ";
		cin >> department[i];
		fout << department[i] << endl;
	}
	fout.close();
	total = total + choice;
	cout << "\n1. To Enter More Employee" << endl;
	cout << "2. To Return main menu" << endl;
	cout << "\nSelect option: " ;
	V:
	cin >> opt;
	if(opt=='1')
	{
		system("cls");
		goto A;	
	}
	else if(opt=='2')
	{
		system("cls");
		mainmenu();
	}
	else
	{
		system ("cls");
		cout << "\nInvalid" << endl;
		cout << "Please select correct option...!!" << endl;
		cout << "\n1. To Return main menu: " ;
		goto V;
	}
}
void show()
{
	char opt;
	if(total!=0)
	{
		for(int i=0;i<total;i++)
		{
			cout << "\nData of employee " << i+1<<endl;
			cout << "Name: "<<name[i] << endl;
			cout << "ID: "<<ids[i] << endl;
			cout << "Address: "<<address[i] << endl;
			cout << "Contact: "<<contact[i] << endl;
			cout << "Salary: "<<salary[i] << endl;
			cout << "department: "<<department[i]<< endl;
		}
    }
    else
	{
    	cout << "\nNo data is entered" << endl;
	}
	A:
	cout << "\n1. To Return main menu: " ;
	cin >> opt;
	switch(opt)
	{
		case '1':
			system("cls");
			mainmenu();
			break;
		default:
			system ("cls");
			cout << "\nInvalid" << endl;
			cout << "Please select correct option...!!" << endl;
			cout << "\n1. To Return main menu: " ;
			goto A;
	}

}
void search()
{
	char opt;
	if(total!=0)
	{
		string id;
		cout << "\nEnter id of employee which you want to search" << endl;
		cout << "Enter ID: " ;
		cin >> id;
	 	for(int i=0;i<total;i++)
		{
		if(ids[i]==id)
			{
				cout << "\nData of employee " << i+1 << endl;
				cout << "Name: " << name[i] << endl;
				cout << "ID: " << ids[i] << endl;
				cout << "Address: "<< address[i] << endl;
				cout << "Contact: "<< contact[i] << endl;
				cout << "Salary: " << salary[i] << endl;
					cout << "department: " << salary[i] << endl;
				break;
			}
			if(i==total-1)
			{
				cout << "\nNo such record found" << endl;
			}
		}
	}
	else
	{
		cout << "\nNo data is entered" << endl;
	}
		B:
		cout << "\n1. To Return main menu: " ;
		cin >> opt;
		switch(opt)
		{
			case '1':
				system("cls");
				mainmenu();
				break;
			default:
				system ("cls");
				cout << "\nInvalid" << endl;
				cout << "Please select correct option...!!" << endl;
				cout << "\n1. To Return main menu: " ;
				goto B;
		}
}
void showsalary()
{
	char opt;
	if(total!=0)
	{
		cout << "\n\t-----------------------------------------------" << endl;
		cout << "\tEmployee ID			Employee Salary        " << endl;
		cout << "\t-----------------------------------------------" << endl;
		for( int i=0 ; i<total ; i++)
		{
			cout <<"\t" <<ids[i] << "				" << salary[i] << endl;
		}
	}
	else
	{
		cout << "\nNo data is entered" << endl;
	}
	C:
	cout << "\n1. To Return main menu: " ;
	cin >> opt;
	switch(opt)
	{
		case '1':
			system("cls");
			mainmenu();
			break;
		default:
			system ("cls");
			cout << "\nInvalid" << endl;
			cout << "Please select correct option...!!" << endl;
			cout << "\n1. To Return main menu: " ;
			goto C;
	}
}

void update()
{
	char opt;
	if(total!=0)
	{
		string id;
		cout << "\nEnter id of employee which you want to update" << endl;
		cout << "Enter ID: " ;
		cin >> id;
		for(int i=0;i<total;i++)
		{
			if(ids[i]==id)
			{
				cout << "Old data of employee " << i+1 << endl;
				cout << "Name: " << name[i] << endl;
				cout << "ID: " << ids[i] << endl;
				cout << "Address: " << address[i] << endl;
				cout << "Contact: " <<contact[i] << endl;
				cout << "department: " << salary[i] << endl;
				
				cout << "\nEnter new data" << endl;
				cout << "Enter employee name: ";
				cin >> name[i];
				cout << "Enter id: ";
				cin >>ids[i];
				cout << "Enter address: ";
				cin >> address[i];
				cout << "Enter contact: ";
				cin >> contact[i];
				cout << "Enter salary: ";
				cin >> salary[i];
					cout << "Enter department: ";
				cin >> department[i];
				break;
			}
			if(i==total-1)
			{
				cout << "\nNo such record found" << endl;
			}
		}
	}
	else
	{
		cout << "\nNo data is entered" << endl;
	}
		D:
		cout << "\n1. To Return main menu: " ;
		cin >> opt;
		switch(opt)
		{
			case '1':
				system("cls");
				mainmenu();
				break;
			default:
				system ("cls");
				cout << "\nInvalid" << endl;
				cout << "Please select correct option...!!" << endl;
				cout << "\n1. To Return main menu: " ;
				goto D;
		}
}

void del()
{
	char opt;
	if(total!=0)
	{
		int press;
		cout << "\nPress 1 to delete specific record" << endl;
		cout << "Press 2 to delete full record" << endl;
		cout << "Select Option: " ;	
		cin >> press;
		if(press==1)
		{
			string id;
			cout << "\nEnter id of employee which you want to delete" << endl;
			cout << "Enter ID: " ;
			cin >> id;
			for(int i=0;i<total;i++)
			{
				if(ids[i]==id)
				{
					for(int j=0 ; j < total ; j++)
					{
						name[j] = name[j=1+1];
						ids[j] = ids[j=1+1];
					address[j] = address[j=1+1];
					contact[j] = contact[j=1+1];
						salary[j] = salary[j=1+1];
						department[j] = department[j=1+1];
						total--;
						cout << "\nYour required record is deleted" << endl;
						break;
					}
				}
				if(i==total-1)
				{
					cout << "\nNo such record found" << endl;
				}
			}
		}
		else if(press==2)
		{
			total=0;
			cout << "\nAll record is deleted" << endl;
		}
		else
		{
			cout << "\nInvalid Input" << endl;
		}
	}
	else
	{
		cout << "\nNo data is entered" << endl;
	}
		D:
		cout << "\n1. To Return main menu: ";
		cin >> opt;
		switch(opt)
		{
			case '1':
				system("cls");
				mainmenu();
				break;
			default:
				system ("cls");
				cout << "\nInvalid" << endl;
				cout << "Please select correct option...!!" << endl;
				cout << "\n1. To Return main menu: " ;
				goto D;
		}	
}
void addGuard() {
    if (guardCount < MAX_GUARDS) {
        std::cout << "Enter guard details:\n";
        std::cout << "Name: ";
        std::cin.ignore();
        std::cin.getline(guardNames[guardCount], 50);
        std::cout << "Age: ";
        std::cin >> guardAges[guardCount];
        std::cout << "Duty Shift (M or E): ";
        std::cin >> guardDutyShifts[guardCount];

        guardCount++;
        std::cout << "Guard added successfully!\n";
    } else {
        std::cout << "Maximum number of guards reached!\n";
    }
}

void addWeeper() {
    if (weeperCount < MAX_WEEPERS) {
        std::cout << "Enter weeper details:\n";
        std::cout << "Name: ";
        std::cin.ignore();
        std::cin.getline(weeperNames[weeperCount], 50);
        std::cout << "Age: ";
        std::cin >> weeperAges[weeperCount];
        std::cout << "Assigned Area: ";
        std::cin.ignore();
        std::cin.getline(weeperAssignedAreas[weeperCount], 50);

        weeperCount++;
        std::cout << "Weeper added successfully!\n";
    } else {
        std::cout << "Maximum number of weepers reached!\n";
    }
}

void displayGuards() {
    std::cout << "\nList of Guards:\n";
    std::cout << std::setw(20) << "Name" << std::setw(10) << "Age" << std::setw(15) << "Duty Shift\n";
    for (int i = 0; i < guardCount; ++i) {
        std::cout << std::setw(20) << guardNames[i] << std::setw(10) << guardAges[i] << std::setw(15) << guardDutyShifts[i] << "\n";
    }
}

void displayWeepers() {
    std::cout << "\nList of Weepers:\n";
    std::cout << std::setw(20) << "Name" << std::setw(10) << "Age" << std::setw(20) << "Assigned Area\n";
    for (int i = 0; i < weeperCount; ++i) {
        std::cout << std::setw(20) << weeperNames[i] << std::setw(10) << weeperAges[i] << std::setw(20) << weeperAssignedAreas[i] << "\n";
    }
}
void addTeacher(string names[], int ages[], string subjects[], int &numTeachers) {
    if (numTeachers < MAX_TEACHERS) {
        cout << " teacher namespace is not allowed : ";
        cin >> names[numTeachers];

        cout << "  age only integer: ";
        cin >> ages[numTeachers];

        cout << " subject inly alphabetical order: ";
        cin >> subjects[numTeachers];

        numTeachers++;
        cout << " added successfully.\n";
    } else {
        cout << "Cannot add more teachers. Maximum limit reached.\n";
    }
}

void displayTeachers(const string names[], const int ages[], const string subjects[], int numTeachers) {
    if (numTeachers > 0) {
        cout << "\nList of Teachers:\n";
        for (int i = 0; i < numTeachers; ++i) {
            cout << "Name: " << names[i] << "\n";
            cout << "Age: " << ages[i] << "\n";
            cout << "Subject: " << subjects[i] << "\n\n";
        }
    } else {
        cout << "No teachers to display.\n";
    }
}

void searchTeacher(const string names[], const int ages[], const string subjects[], int numTeachers) {
    if (numTeachers > 0) {
        string searchName;
        cout << "Enter teacher name to search: ";
        cin >> searchName;

        for (int i = 0; i < numTeachers; ++i) {
            if (names[i] == searchName) {
                cout << "Teacher found:\n";
                cout << "Name: " << names[i] << "\n";
                cout << "Age: " << ages[i] << "\n";
                cout << "Subject: " << subjects[i] << "\n";
                return;
            }
        }

        cout << "Teacher not found.\n";
    } else {
        cout << "No teachers to search.\n";
    }
}

void updateTeacher(string names[], int ages[], string subjects[], int numTeachers) {
    if (numTeachers > 0) {
        string updateName;
        cout << "Enter teacher name to update: ";
        cin >> updateName;

        for (int i = 0; i < numTeachers; ++i) {
            if (names[i] == updateName) {
                cout << "Enter new teacher name: ";
                cin >> names[i];

                cout << "Enter new teacher age: ";
                cin >> ages[i];

                cout << "Enter new teacher subject: ";
                cin >> subjects[i];

                cout << "Teacher updated successfully.\n";
                return;
            }
        }

        cout << "Teacher not found.\n";
    } else {
        cout << "No teachers to update.\n";
    }
}

void deleteTeacher(string names[], int ages[], string subjects[], int &numTeachers) {
    if (numTeachers > 0) {
        string deleteName;
        cout << "Enter teacher name to delete: ";
        cin >> deleteName;

        for (int i = 0; i < numTeachers; ++i) {
            if (names[i] == deleteName) {
                // Move the last teacher to the position of the deleted teacher
                names[i] = names[numTeachers - 1];
                ages[i] = ages[numTeachers - 1];
                subjects[i] = subjects[numTeachers - 1];
                numTeachers--;

                cout << "Teacher deleted successfully.\n";
                return;
            }
        }

        cout << "Teacher not found.\n";
    } else {
        cout << "No teachers to delete.\n";
    }
}
 
int main()

{
		string names[MAX_TEACHERS];
    int ages[MAX_TEACHERS];
    string subjects[MAX_TEACHERS];
    int numTeachers = 0;	
	        cout << " __          __  _                            " << endl;
        cout << " \\ \\        / / | |                           " << endl;
        cout << "  \\ \\  /\\  / /__| | ___ ___  _ __ ___   ___   " << endl;
        cout << "   \\ \\/  \\/ / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\  " << endl;
        cout << "    \\  /\\  /  __/ | (_| (_) | | | | | |  __/  " << endl;
        cout << "     \\/  \\/ \\___|_|\\___\\___/|_| |_| |_|\\___|  " << endl;
	cout << "\nPRESENTED BY:";
	cout << "\tMuqadas\n\n";
	cout << "\nSUBMITTED TO:";
	cout << "\tMa'am Neha zulfiqar\n\n" << endl;
	char ch;
	string username, password,username1, password1 ;
	cout << "\n\t*Employee Management System by Muqadas*" << endl;
	cout << "\n\t*Sign-in*" <<endl;
	cout << "\tEnter User Name: " ;
	cin >> username ;
	cout << "\tEnter Password: ";
	cin >> password ;
	system("cls");
	cout << "\n\tYour ID is creating" ;
	for(int i=0 ; i<3 ; i++)
	{
		cout << " ." ;
		Sleep(300);
	}
	cout << "\n\tYour ID is created Successfully...." << endl;
	cout << "\t*Employee Management System by Muqadas*" << endl;
	start: 
	cout << "\n\t*Login*" << endl;
	cout << "\tEnter Username: " ;
	cin >> username1;
	cout << "\tEnter Password: " ;
	cin >> password1;
	if(username1==username && password1==password)
	{
		system("cls");
		mainmenu();
	}
	else if(username1!=username)
	{
		cout << "\tIncorrect Username" << endl;
		system("cls");
		cout << "\n\t_Try Again_\n\tEnter Correct Information:" << endl;
		goto start;
	}
	else if(password1!=password)
	{
		cout << "\tIncorrect Password" << endl;
		system("cls");
		cout << "\n\t_Try Again_" << endl;
		goto start;
 	}
}
void mainmenu()
{
	char opt;
	F:
	cout << "\n--------------------Main Menu--------------------" << endl;
	cout << "Select any option to use our Services " << endl;
	cout << "\n1. To enter data" << endl;
	cout << "2. To show data" << endl;
	cout << "3. To search data" << endl;
	cout << "4. To show salary of Employee" << endl;
	cout << "5. To update data" << endl;
	cout << "6. To delete data" << endl;
	cout << "7. To Enter into teacher employ system" << endl;
	cout << "\nSelect option: " ; 
	int ch;
	cin>>ch;

	system("CLS");
		if(ch==1)
		{
		
			empdata();
		
	}
		else if(ch==2)
		{
		
		
			show();
			
		}
		
		else if(ch==3)
		{
	
		
			search();
		
		}
		
		else if(ch==4)
		{
		
			showsalary();
		
		}
		
		else if(ch==5)
		{
		
			update();
			
		}
		
		else if(ch==6)
		{
		
	
			del();
			
		}
		else if( ch== 7)
            {
            	
         
			
    do {
    	
        displayteacherMenu();
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        
             if(choice== 1)
             {
			 
            
            		
                addTeacher(names, ages, subjects, numTeachers);
            }
                
            else if(choice== 2)
            {
			
            	
                displayTeachers(names, ages, subjects, numTeachers);
            }
               
            else if(choice== 3)
            {
			
            
            	
                searchTeacher(names, ages, subjects, numTeachers);
            }
               
            else if(choice== 4)
            {
			
            
            	
                updateTeacher(names, ages, subjects, numTeachers);
            }
               
            else if(choice== 5)
            {
			
            
            	
                deleteTeacher(names, ages, subjects, numTeachers);
            }
                
            else if(choice== 7)
            {
            	system("cls");
			
            	system("cls");
            		cout<<"Enter into Cleaning staff management";
            		
    do {
        std::cout << "\nGuard Management System\n";
        std::cout << "1. Add Guard\n";
        std::cout << "2. Add Weeper\n";
        std::cout << "3. Display Guards\n";
        std::cout << "4. Display Weepers\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addGuard();
                break;
            case 2:
                addWeeper();
                break;
            case 3:
                displayGuards();
                break;
            case 4:
                displayWeepers();
                break;
            case 0:
                std::cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

            	}
            else if(choice==6)
            {
				
            		
                cout << "Exiting program.\n";
            }
                
            else
            {
			
            	system("cls");
            	
                cout << "Invalid choice. Please try again.\n";
            }
        
     
 }
 while(true);
 

                
            
		
		
	}
	
		else if(ch==8)
		{
					cout << "\n\n\nPress Any Key to Exit...!!\n\n\n" ;
		
		}
		else{
		
			system("cls");
			cout << "\nInvalid Input" << endl;
			cout << "Please Choose Correct Option...!!\n" ;
			goto F;
			
		}
	
}