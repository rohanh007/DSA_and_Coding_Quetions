
#include <iostream>
using namespace std ;

void printarray(int arr[], int n)
{
    for(int i=0;i<n ;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n = 15 ;    //length of the array
    int arr[n] ;   // declaration of the array 
        
    
    cout<<"value at 14 position : "<<arr[12]<<endl;
    cout<<"value at 8 position : "<<arr[8]<<endl;
    cout<<"value at 2 position : "<<arr[2]<<endl;
    
    
// In C++, accessing elements beyond the bounds of an array results in undefined behavior. This means that the 
// behavior of the program is unpredictable and can vary depending on the compiler and runtime environment.

    cout<<"value at 20 position : "<<arr[20]<<endl;   // output : random or grabage value 
  
  int arr1[15]={0};     // assign the value in first position and other position default 0 are set
  printarray(arr1 ,n);
  
  
  int arr2[15]={1};    // here also default value 0 are auto assign 
  printarray(arr2 ,n);
  
  
  int arr3[15]={4,3,6};    // three values are assign and other postion are filled with zero default value
  printarray(arr3 ,n);
  
  cout<<sizeof(arr3)/sizeof(int)<<endl;  // it will give the actual length of array 
  
  
  // different type of array  
  
  char chararr[14]={'a','b','c','s'};
  bool boolarr[14] ;
  float floatarr[14];
  double doublearr[14];
  
  
  
    return 0;
}


// OUTPUT :

// value at 14 position : 0
// value at 8 position : 0
// value at 2 position : 0
// value at 20 position : 14
// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
// 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
// 4 3 6 0 0 0 0 0 0 0 0 0 0 0 0 
// 15

