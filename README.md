Let's talk C++

History

  C++ is an object oriented programming developed by a Danish computer scientist known as Bjarne Stroucstrup. 
This program was developed by making certain changes and improvements on C. As can be assumed by the type of program, 
it adds object-oriented features to C. C++ is mainly used for game programming, software engineering, data structures, 
developing, operating systems, and applications. Some interesting examples of C++ in action are games such as World of 
Warcraft and even gaming consoles such as Playstation, Nintendo Switch and Xbox. This language plays an essential role 
in game developing as it allows developers to build the most high-performance games they can develop. 
  Originally c++ was named "C with classes" but was changed in 1983 to its current name, demonstrating the incrementation 
from C to C++. It is designed to have qualities of C such as its speed but comes with its own high-level properties. The 
downside to this language is that it's a little harder to learn for beginners in coding and the code itself takes up more
time then code in languages such as python take. With the updates developed for C++, came multiple compilers proven to be
useful such as Turbo C++ compiler. The first C++ compiler however, was Cfront, but as the name suggests, it was only a 
front-end compiler. The language itself though, has been modified multipletimes with C++20 being the most updated version
and C++23 being in the works. An interesting feature of C++ is its multiple inheritance feature that allows classes to 
inherit from more than one class. 

Installation
  To learn C++ you’ll need to install important software. It is essential to install a text editor and a compiler. Examples 
of text editors are Visual Studio code or Atom. However, such editors require the compiler. A compiler convenient for multiple 
operating systems is GCC. 
  Installing the required text editors and compilers can get a little tricky if your technology requires steps such as setting 
up paths in order to actually be able to compile the code when running a program. A convenient solution to this is to install 
jGrasp, an IDE with everything included that will make learning a new language a much easier process. jGrasp edits, compiles, 
runs and debugs programs all in one and luckily enough, it’s not only useful for learning C++ but a variety of other programming
languages as well.

Learning C++
How to start learning C++ (Guide) https://www.usnews.com/education/learn-c++-guide

Easy to learn modules Code Academy	https://www.codecademy.com/catalog/language/c-plus-plus?g_network=g&g_device=c&g_adid=518718840234&g_keyword=learn%20c%2B%2B&g_acctid=243-039-7011&g_adtype=search&g_adgroupid=102526215018&g_keywordid=kwd-23862186&g_campaign=US+Language%3A+Basic+-+Exact&g_campaignid=10030170703&utm_term=learn%20c%2B%2B&utm_campaign=&utm_content=518718840234&utm_id=t_kwd-23862186:ag_102526215018:cp_10030170703:n_g:d_c&utm_source=google&utm_medium=paid-search&utm_term=learn%20c%2B%2B&utm_campaign=&utm_content=518718840234&gclid=CjwKCAjw7eSZBhB8EiwA60kCW4vwf2TZ25pryRpMEafeYWbXFuGbHjrY9bi4apyt2YzhuwtVUe3_MxoCIc0QAvD_BwE

C++ Tutorial for beginners Full course 4 hrs	https://www.youtube.com/watch?v=vLnPwxZdW4Y	(Includes table of contents with time stamps)

Learn C++: Everything you need to know!	https://careerkarma.com/blog/learn-c-plus-plus/

Sources:	
https://www.geeksforgeeks.org/history-of-c/#:~:text=C%2B%2B20%20is%20the,C%2C%20by%20knocking%20out%20Python.
https://careerkarma.com/blog/learn-c-plus-plus/

 In C++, classes are essential when coding. Most importantly, the names utilized for classes must follow the right rules
and criteria, just as the conventional naming of variables is important as well. For classes specifically, the name should 
be a noun and the name should be camelcase to separate the words from each other while the first letter of the class must
be upper case. However, something to remember is that underscores are NOT allowed in class names.


While underscores are not allowed in class names, they are allowed in variable names as long as the rest of the variable
name is valid in following their own rules. C++ asks that variable names begin with an alphabet and numbers are allowed, 
but only after the first letter is strictly an alphabet. Additionally, keywords are not allowed as variable names and any
special characters, including whitespaces, are also not allowed as this language is case sensitive so the smallest details 
are important.  


To furthermore break down the naming conventions, classes, structs and typedefs start with a capital letter while others such 
as functions and variables start with a lowercase letter. Pointer Variables  require the keyword be followed by an asterisk (*) 
and the asterisk is followed by the variable name. Interfaces, which are functions an object must have to be classified as 
that object, are named with an Interface suffix, abstract base classes with an Abstract prefix, member variables with a trailing
underscore. Global variables have a prefix of g_ while global constants typically are named with the prefix c_ . Static class 
variables are named with a prefix, s_ . 


C++, a strongly typed programming language, is a statically-typed language meaning that data types are associated with variables
rather than values. The variable types are determined at compile time so the naming conventions mentioned above are enforced by 
the compiler. It is both explicitly and implicitly typed. The difference between the two is that explicitly typed languages have
variables declared by the users while the implicit type has the program inferring what the variable data types are. As for 
mutability, c++ objects are mutable by default but can use keywords such as const or constexpr to declare an object immutable. What
these keywords do is prevent objects, methods() and variables from being modified. 
https://www.codeproject.com/Articles/5315601/Python-vs-Cplusplus-Series-Mutable-Immutable-and-C#:~:text=C%2B%2B%20supports%20two%20notions%20of,objects%20are%20mutable%20by%20default
https://en.wikipedia.org/wiki/Immutable_object#C++

Binding is defined as converting identifiers into addresses. Identifier names and operator symbols are bound during their 
binding time in C++. This binding time occurs at the moment of its creation or declaration. The binding in C++ is static by
default. It is known as early binding as the programmer is the one to explicitly make the call in the program.


Naming Convention examples:


int myAge = 22;
Char name[5] = “Aang”; → the string variable is a char data type. It is an array known as C-strings that end with null characters
so the length is the number of characters + 1

Floating-point number → float decimal = 2.5;
Boolean → bool  real = true;
        Outputting a boolean returns either 1 or 0 depending whether a statement is true or false. 
Array/list: → int score [5] = {10, 20, 15, 10, 30}; → Arrays must contain elements of one data type, you can not replace an int 
element with a string element in an array of ints.

Dictionary(map): map<int, string> colors= {{1, “Purple”,},
      {2, “Black”, },
      {3, “Orange”,}} 
https://www.udacity.com/blog/2020/03/c-maps-explained.html


 
Mixed Type Arithmetic
int/int = int → 9/2 = 4
float/int = float → 9.0/2 = 4.5
int/float = float → 9/2.0 = 4.5
float/float = float → 9.0/2.0 = 4.5


Arithmetic operators:
For performing arithmetic operations on variables and data
+Addition
- Subtraction
* Multiplication
/Division
%Modulo Operation(Remainder after division)
++Increment
–Decrement


Assignment Operators
=   → a = b;
+= → a = a + b;
-=  → a = a - b;
*=  → a = a * b;
/=   → a = a / b;
%= → a = a % b;


Relational Operators 
== Is Equal To
!= Not Equal To
> Greater Than
< Less Than
>= Greater Than or Equal To
<= Less Than or Equal To
Logical Operators
&& → Logical AND → True only if all expressions are true
  ||   → Logical OR   → True if at least one expression is true
  !    → Logical NOT  → True only if operand is false 


Bitwise Operators
Used to perform operations on individual bits but can only be used alongside char and int data types.


&  Binary AND
|    Binary OR
^   Binary XOR
~   Binary One’s Complement
<< Binary Shift Left
>> Binary Shift Right


https://www.programiz.com/cpp-programming/operators


        Concatenating an integer to a string object can be done by calling the std:: to_string function. For example if 
we have an int x = 10 and call the to_string function, that line of code will look like → std::string y = “Number” + 
std::to_string(x); The code would thus compile and run to output Number 10. However, expressions with strings and ints can 
also be outputted. An example is std::cout << “Half of “ << 12 << “ is “ << (12/2) << “\n”; This would execute Half of 12 is 6. 
These examples apply to floating point numbers as well, just switch the examples from ints to floats and you’ll be able to 
concatenate strings with floats and output floats with strings in expressions.
https://www.techiedelight.com/concatenate-integer-string-object-cpp/
https://www.oreilly.com/library/view/practical-c-programming/0596004192/ch04.html        
        However something such as declaring an integer as a string plus a number for example int x = “5” + 6; will not output. 
Instead an error is received stating “invalid conversion from ‘const char’ to ‘int’. 
Stacks and Heaps


When it comes to memory in c++, memory can be allocated and de-allocated using either stack or heap. There are a couple of 
advantages and disadvantages based on which is used. In stack, allocations are done by the compiler but with a heap, the allocations
must be done by the programmer. Accessing data with stack memory is a lot faster than with heap memory. This is the result of their
data structure. A concern with stack is memory shortage while with heap memory, a concern is fragmentation of allocated memory being 
repetitively released. While stack is automatically managed by the computer, heaps are more free range, not controlled neither by the 
user or the CPU. A big advantage to stack memory is that data is automatically cleared after function calls whereas heap memory requires
the programmer to do the clearing by freeing data when required. Stack memory is associated with allowing access only to local variables
and data methods, but heap is convenient to access global data and data present anywhere in the program. Overall, both stack memory and 
heap memory are utilized in the C++ language. Stack memory is responsible for local variables, arguments that are passed through a function 
and their return addresses, using LIFO(Last In First Out). Heap memory is responsible for storing data such as all the global variables, 
accessed through pointers that can reach anywhere in the memory. It is important to note that pointers are allocated in the stack but are 
utilized to access memory on the heap.


https://www.educba.com/c-stack-vs-heap/

This is a code reference
https://github.com/JohanapGuillen/ComputerScienceMajor/blob/54728ee9e1a6d162e77aa0d3e1f1a83cfa8e3fe0/plp2Testing.cpp
