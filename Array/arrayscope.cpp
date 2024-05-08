

#include <iostream>
using namespace std; 

 void update(int arr[],int n)
 {
     // update the firsrt value of array 
     
     arr[0]=120 ; 
     cout<<"inside the update function"<<endl;
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
         
     }
     cout<<endl;
 }


int main()
{
    int n=3;
    
    int arr[n]={1,2,3};
    
    update(arr,n);
    
    cout<<"inside the main function "<<endl;
    for(int i=0;i<n ;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}

// theory :

// When you pass an array as a parameter to a function in C++, you're actually passing a pointer to the first element of the array. 
// This means that you're passing the memory address where the array starts in memory.




// OUTPUT : 


// inside the update function
// 120 2 3 
// inside the main function 
// 120 2 3 
