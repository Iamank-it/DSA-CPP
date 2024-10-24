Structure of C++ Program
  The basic structure of a c++ program is divided into 6 parts which is easy to read,modify ,update and understand when we write any c++ program 
  it is divided into 6 section
  1.	Documentation  
  2.	Preprocessor section 
  3.	Definition  
  4.	Global declaration  
  5.	Main function  
  6.	Subprogram 
  
  1. Documentation:  
      This section consists of the description of the program like the name of the program, the logic of the program, and the date of creation with the time of the program.  
      It is generally specified at the beginning of the program in the form of a comment.  
      It can be represented as 
      //single line comment  
      /* multiple line comment */ 
  
  2. Preprocessor section: 
      All the header files of the program will be declared in the preprocessor section of the program. The header file helps us to access the other codes in our code.  
      A copy of these multiple files is inserted into our program before the process of compilation. 
  
      #include <stdio.h>      ----> standard input output 
      #include <conio.h>      ----> console input output getch() 
      #include <math.h>      ----> pow(), sqrt() 
      #include <dos.h>       ----> disk operating system delay(), getdate(), gettime(), sound(), nosound() 
      #include <process.h>   ----> exit() 
      #include <string.h>     ----> to deal with strings strlen(), strcat(), strcpy(), strcmp() 
  
  3. Definition: 
    Preprocessors are the program that processes our source code before the process of compilation. 
    Multiple steps are included in the writing and execution of the program.  
    Preprocessor directives start with the # symbol. 
    The # define preprocessor is used to create a constant throughout the program whenever this name is encountered by the compiler it will be replaced by an actual piece of defined code. 
    
      #define pi 3.14 
      #define square(x) x*x 
  
  4. Global declaration: 
    This section consists of the global variable function which is declared in the scope that can be used anywhere in the program. 
    
  5. Main function: 
    Every C++ program must consist of a main function of the program is written in this section.  
    Operations like declaration, initialization, and execution are performed inside the curly braces of the main program 
    The return type of the main function can be int as well as void.  


Data types 
 
Primitive data type: 
 
1.	Numeric: 
 It is the type of data on which we can perform different mathematical operations. E.g.:- 8, +7, 0.23, -73.32 
 
  a.	Integer: It is the data in which we can store only positive, negative including zero except   fractional. 
  It can be declared by the keyword int 
  Example: int a; // a is the name of a variable having a data type integer 
  Note: there are 32 keywords available in c  
          integer: int --> short (1 byte) 
                          int (2 byte) 
                          long int (4 byte) 
  
          int--> signed int (It stores negative as well as positive value) 
                unsigned int (It stores only positive value) 
  
2.	Fractional:  
  It is the data in which we can calculate both types of values like 
  2.3, 9.28, 6.26  
  Example: float f;  
      float: float (1 byte) 
            double (8 byte) 
            long double (10 byte) 
  
 
//program to use the sizeof function to check the size of the data type 
 
Non-Primitive data type: 
 
  Array: 
  It is a collection of similar primitive data types 
    Example: it may be a collection of int, float, char 
  If the array consists of characters only then it is called a string 
  It is a collection of homogeneous data types 
  Example: int A[5] = {10,0,8,7,9} 
  
  
  Structure: 
  It is the collection of heterogeneous data types 
  It is also called a user-defined data type 
  It is used to store the information of any real-world entity 
  Example: 
  strut employee 
      { 
          int id; 
          char name[20]; 
          float salary; 
          char address[50]; 
          char department[10]; 
      }; 
  int main() 
      { 
          struct employee e1[100];  //array of structure 
          cout<<"\n total memory occupied "<<sizeof (e1);  //86*100 
          return 0; 
      } 
  
  Union: 
  It is a collection of heterogeneous data 
      It is a user-defined data type 
  Remark: it allocates shared memory location 
  Example: 
  union employee 
      { 
          int id;   //2 
          char name[20];   //20 
          float salary;   //4 
          char address[50];   50 
          char department[10];   //10 
      }; 
  int main() 
      { 
          struct employee e1[100];  //array of union 
          cout<<"\n total memory occupied "<<sizeof (e1);    //50*100 
          return 0; 
      } 
 
 
Enumerated data type:   
  It is a user-defined data type (enum). That is used to define a set of constants of the data type int 
  <Constant _name> is the name of a constant that can optionally assign the value  
  of <value> 
  
  Note: <value> must be an integer if <value> is missing it is assumed to be the previous 
  value + 1 
  <prev> +1 
  
  Example:  
      enum modes {a=-1, b=0, c, d, e, f=7};   //c=1, d=2, e=3 
  
      enum cost {apple=100, banana=70, guava=90, kiwi=300}; 
  
Pointers: 
  Pointer is the most important concept of C programming. It is used in dynamic memory allocation as well as in the implementation of non-linear data structures like tree and graph. The concept of the pointer is supported by C programming as well as C++ but it is not supported by Java. 
  
  A pointer is a variable that holds the physical address of another variable. 
  
  Example: 
  
  int main() 
  { 
  int a=5,*a1;          //declaration of pointer variable 
  clrscr(); 
  a1=&a;                  //to store the physical address of a in a1 
  cout<<"Value of a=”<<a; 
  cout<<"The reference of a = ”<<&a; 
  cout<<"The value of a1= ”<<a1; 
  return 0; 
  } 

Q3.WAP to show size of variables 

Typecasting:
it is a mechanism in which one datatype is converted into other as per requirement 
it can be implicit or explicit 

type of typecasting :
  1. Widening : to convert lower datatype to higher datatype    

  eg: char (1 byte) --> int (4 byte)

  there is no data loss

  2. Narrowing : to convert higher datatype to lower datatype

  eg: double(8 byte )--> int(4 byte)

  there is loss of data

Take input in c++:
  --> cin & cin.get()
