#include <stdio.h>
#include <stdbool.h> //bool 

int main(){
    int int_ = 10;
    float float_ = 10.0f;
    double double_ = 10.1;
    char char_ = 'a';
    char name[] = "frank";
    bool bool_ = true;

    printf("int:    %d    \n",  int_);
    printf("float:  %.1f  \n",  float_);
    printf("double: %.1lf \n",  double_);
    printf("char:   %c    \n",  char_);
    printf("hello,  %s    \n",  name);
    printf("bool:   %d    \n",  bool_);
}