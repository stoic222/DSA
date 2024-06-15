## Pointers

Pointer is a address varible, it is meant to store address of a data
it is used for indirectly accessing data

![](https://github.com/harshalmore31/DSA/blob/main/Essential%20C%20&%20C++%20Concpets/.sources/pointer_diag.jpg?raw=true)

Pointers are used :
- For Accessing Heap memory
- For Accessing Resources
- For Parameter passing

```cpp

    int a = 10;       // data variable
    int *p;           // address variable
    p = &a            // it will store address of a and it also occupies memory ( Initialization )
                      // here p -> a ( it is pointing to address of a )
    cout<<a<<endl;    // - 10   
    cout<<*p<<endl;   // 
    return 0;

```

How to access Heap memory using Pointer

```cpp
#include<stdlib.h>
int main(){
    int *p;

    // How to get store in heap memory

    p = (int *)malloc(5*sizeof(int));     // It is a keyword use to store in Heap Memory  [ In C ]
    p = new int[5];

    return 0;
}

```
 /*  changes start */ ------------------------------------------------------------------------------

 how access value from pointer and address from pointer 

 # include <stdlib.h>
 int main () {
 
 int a=4;
 int z;
 
  // now pointer storing address

  int *p = &a;

  z = *p;            
  printf("your z=%d  ",z);
  
  ![image](https://github.com/harshalmore31/DSA/assets/156791357/3f06342e-61f5-4f84-be8b-d8d3be88e560)

  z = p;                    
  printf("your z=%d  ",z);

  // you will get warning but code give output as its address
  
  ![image](https://github.com/harshalmore31/DSA/assets/156791357/c55f8d19-f448-44c9-b037-6a0db59b8934)

  // now pointer not storing address

  int *p1 = a;        
  
  // this will give warning as we initialization of 'int *' from 'int' makes pointer from integer without a cast.
  
  z = *p1;                
  printf("your z=%d  ",z);
  
  // gave segment fault error 
  
  ![image](https://github.com/harshalmore31/DSA/assets/156791357/e1e893cd-1888-42a1-8368-317844df8596)

   z = p1;                
  printf("your z=%d  ",z);
  
// gave two warning but still excuted the code and gave correct value 

![image](https://github.com/harshalmore31/DSA/assets/156791357/4eab59f3-1b32-4868-885d-62bb63aa1628)


/* end  */ --------------------------------------------


  

  

  


