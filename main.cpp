///This program illustrates the use of c-string.

///strcmp() compares if the two strings given are not equal.
///If not equal it returns true and if equal it returns false.


#include <iostream>
#include <cstring>///To use string predefined functions.

using namespace std;

int main()
{
   char c_string1[]="Hello";
   char c_string2[]="Hell";
   if(strcmp(c_string1,c_string2))///This predefined function returns false(0) if the strings are equal.
   {
       cout << "The strings are not equal\n";
   }
   else
   {
       cout << "The strings are equal\n";
   }
   int p=strlen(c_string1);///calculates the length of the string and returns an integer.
   cout << p << endl;
   string r=strcat(c_string1," guys");
   cout << r;


   return 0;

}
