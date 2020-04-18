#include <stdio.h>
#include <stdlib.h>

/*variable name does not start with a number but can end with a number
variable name does not have spaces in name,
can not use any special character like *&^%$# etc,
one can use underscore _,
language keywords can not be used,
neither special functions*/
int main()
{
    int age;//for integer variables
    float pi=3.14;//float for decimal
    char my_char='a';//for character
    double big_pi=3.14234455666;//for large float
    age=20;
    printf("the age is %d\n",age);
    printf("the value of pi is %f\n",pi);
    printf("my character is %c\n",my_char);
    printf("the large float is %lf",big_pi);
    return 0;
}
