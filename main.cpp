#include <iostream>
/*
 Lubna Khalid
 HW#1 
 CISC 3142
*/


using namespace std;
  
  //method returns the number of days in the month corresponding with the user input
  void partOne(){
    int x;
    cout << "Enter a number that corresponds with a month.\n";

   cin >> x;

      switch(x){
        //use similar cases to combine with a common output
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
         cout << "31\n";
         break;

       case 4:
       case 6:
       case 9:
       case 11:
          cout<< "30\n";
        break;

       case 2:
        cout << "28\n";
         break;
      //default case is if the user inputs an invalid number
      default:
         cout << "Invalid Month Number\n";
         
  } 
  }
  //find max number in the array
  void partTwo(){
     int arr[10] = {} ;
     int count = 0;
     int max;

     //populates the array with the users input
     for (int i = 0; i< 10; i++){
     cout << "Enter a digit\n";
     cin >> count;
     arr[i] = count;
     }
     
     //displays the array
     for(int x: arr){
       cout << x ;
       cout << " "; 
     }
     //finds the max number in array
     for (int i=0; i<9; i++){
       if(arr[i] < arr[i+1]){
         max = arr[i+1];
        }
       }
      cout << "\nThe max in the array is " << max << "\n";
       
  }
  //user defined 2D array
  void partThree(){
    

  }
int main(){
  partOne(); 
  partTwo();
  partThree();

}