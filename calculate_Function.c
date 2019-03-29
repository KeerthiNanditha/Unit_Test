#include "calculator.h"

float calculate(float num1,char op,float num2){
float result=o.of;
switch(op){
  case '+': 
    result=add(num1,num2);
    break;
  case '-':
    result=sub(num1,num2);
    break;
  case '*':
    result=mul(num1,num2);
    break;
  case '/':
    if(num2==0){
      printf(""Not supported);
      return 0;
    }
    result=div(num1,num2);
    break;
    deafult:
    printf("Enter invalid operator");
}
  return result;
}
float add(float num1,float num2){
return num1+num2;
}
float sub(num1,num2){
  return num1-num2;
}
float mul(num1,num2){
  return num1*num2;
}
float div(num1,num2){
return num1/num2;
}

  
