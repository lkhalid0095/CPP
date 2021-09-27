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
         cout << "This month has 31 days.\n";
         break;

       case 4:
       case 6:
       case 9:
       case 11:
          cout<< "This month has 30 days.\n";
        break;

       case 2:
        cout << "This month has 28 days.\n";
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
     max = arr[0];
     for (int i=0; i<10; i++){
       if(max < arr[i]){
         max = arr[i];
        }
       }
      cout << "\nThe max in the array is " << max << "\n";
       
  }
  //user defined 2D array using for loop
  void partThree(){
    //ask user to input size for 2D array
    int rows;
    int col;
    cout<< "Enter # of rows\n";
    cin>> rows;
    cout<< "Enter # of columns\n";
    cin>> col;
    int arr[rows][col];
    //take input from user
    for(int i =0; i<rows;i++){
      for(int j=0; j<col;j++){
      cout<< "Enter input for row "<< i << ", column " << j << ": ";
      int num;
      cin >> num;
    //initalize the 2D array
      arr[i][j] = num;
    }
    }
    //display 2D array
        for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "[" << i
                 << "][" << j << "]: ";
            cout << arr[i][j]<<endl;
        }
    }
}

  
int main(){
  //partOne(); 
  partTwo();
  //partThree();

}