#include <iostream>
#include <chrono>
#include <thread>


using namespace std;

 void mainMenu();
 void adminPanel();
 void adminLogin();
 void studentPanel();
 void studentInfo(string studentName, int age, string gender);
 void studentScore();
 void studentGrade();
 void confirmChoice();
 void displayResult();
 void loadingBar();
 void sleep_for(int ms);

 int main () {
     
     system ("cls");
     system ("color 9");
     mainMenu();

    return 0;
 }

 void mainMenu () {
    
          int menu;

    do {
      cout << " >>> SCORE STREAM <<< " << endl;
      cout << "=------------------=" << endl;
      cout << "| 1. Admin Panel   |" << endl;
      cout << "| 2. Student Panel |" << endl;
      cout << "| 3. Exit          |" << endl;
      cout << "=------------------=" << endl;
         
      cout << "  >>  ";
      cin >> menu;

       switch (menu) {

        case 1:

        system ("cls");
         adminLogin();
         break;

        case 2:

        system ("cls");
         studentPanel();
         break;

        case 3:
        
        system ("cls");
         cout << "Exiting..." << endl;
         break;

        default:
        
        system ("cls");
         cout << "Invalid Option." << endl;
         cout << "Try again." << endl;
         sleep(1500);
        system ("cls");
         break;
       }
    }while (menu < 1 || menu > 3); 
 }

 void adminLogin () {

    const int passCode = 02003;
          int userPasscode = 0;

   do {
      cout << " ADMIN LOGIN " << endl;
      cout << "  Enter The Passcode " << endl;
      cout << "  >>  ";

      cin >> userPasscode;

       if (userPasscode == passCode) {
         
        system ("cls"); 
         cout << "Login Successfully!" << endl;
         cout << "Please wait..." << endl;
         sleep(1500);
        system ("cls");

          adminPanel ();
       }
       else {
        
        system ("cls");
         cout << "Passcode not recognized." << endl;
         cout << "Try again." << endl;
         sleep(1500);
        system ("cls");
       }
   }while(userPasscode != 02003);
 }

 void adminPanel () {

          int adminMenu;

   do {
      cout << " >>> ADMIN PANEL <<< " << endl;
      cout << "=---------------------=" << endl;
      cout << "| 1. Teacher Data     |" << endl;
      cout << "| 2. Add Teacher Data |" << endl;
      cout << "| 3. Student Data     |" << endl;
      cout << "| 4. Add Student Data |" << endl;
      cout << "| 5. Back             |" << endl;
      cout << "=---------------------=" << endl;

      cout << "  >>  ";
      cin >> adminMenu;

       switch (adminMenu) {

        case 1: 
        
        system ("cls");
         cout << " 1. Teacher Data " << endl;
         break;

        case 2:
        
        system ("cls");
         cout << " 2. Add Teacher Data" << endl;
         break;

        case 3:
        
        system ("cls");
         cout << " 3. Student Data" << endl;
         break;

        case 4:
        
        system ("cls");
         cout << " 4. Add Student Data" << endl;
         break;

        case 5:
         
        system ("cls");
         mainMenu();
         break;

        default:
        
        system ("cls");
         cout << "Invalid Option." << endl;
         cout << "Try again." << endl;
         sleep(1500);
        system ("cls");
         break;
       }
   }while(adminMenu < 1 || adminMenu > 6);
 }

  void studentPanel () {

          int studentMenu;

   do {
      cout << " >>> STUDENT PANEL <<< " << endl;
      cout << "=------------------------=" << endl;
      cout << "| 1. Checking The Result |" << endl;
      cout << "| 2. School Update       |" << endl;
      cout << "| 3. Back                |" << endl;
      cout << "=------------------------=" << endl;
          
      cout << "  >>  ";
      cin >> studentMenu;

       switch (studentMenu) {

        case 1: 

        system ("cls");  
         cout << " 1. Teacher Data" << endl;
         break;

        case 2:
        
        system ("cls");
         cout << " 2. Add Teacher Data" << endl;
         break;

        case 3:
         
        system ("cls"); 
         mainMenu();
         break;

        default:

        system ("cls");
         cout << "Invalid Option." << endl;
         cout << "Try again." << endl;
         sleep(1500);
        system ("cls");
         break;
       }
   }while(studentMenu < 1 || studentMenu > 4);
  }

 void studentInfo (string studentName, int age, string gender) {
       
       cout << " >>> Student Info <<< " << endl;
       cout << " Student Name : ";
       cin >> studentName; cout << endl;
       cout << "Student Age : ";
       cin >> age; cout << endl;
       cout << "Student Gender : ";
       cin >> gender; cout << gender;
 }

 void studentScore (int math, int physic, int chemistry, int attendance) {

       cout << " >>> Student Result <<< " << endl;
       cout << " Math : ";
       cin >> math; cout << endl;
       cout << " Physic : ";
       cin >> physic; cout << endl;
       cout << " Chemistry : " << endl;
       cin >> chemistry; cout << endl;
       cout << " Attendance: " << endl;
       cin >> attendance; cout << endl;
 }

    void sleep_for (int ms ){
        std::this_thread::sleep for(millionseconda(ms));
    }