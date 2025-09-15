#include <stdio.h>    //input and output
#include <stdbool.h>  //bool 

int main(){
    int int_ = 10;
    float float_ = 10.0f;
    double double_ = 10.1;
    char char_ = 'a';
    char name[] = "frank";
    bool bool_ = false;

    printf("int:    %d    \n",  int_);
    printf("float:  %.1f  \n",  float_);
    printf("double: %.1lf \n",  double_);
    printf("char:   %c    \n",  char_);
    printf("hello,  %s    \n",  name);
    printf("bool:   %d    \n",  bool_); //bool return 1 or 0

    //bool return true or false
    printf("bool:   %s    \n", bool_ ? "true" : "false");
}