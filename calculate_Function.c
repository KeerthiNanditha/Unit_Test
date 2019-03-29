#include "Calculator.h"

float calculator(float num1,char op,float num2)
{
float result=0.0f;
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
  case '!':
    if(num2==0){
      printf("Not supported");
      return 0;
    }
    else{
      
    result=div(num1,num2);
    }
    break;
    deafult:
    printf("Enter invalid operator");
}
  return result;
}
float add(float num1,float num2){
return num1+num2;
}
float sub(float num1,float num2){
  return num1-num2;
}
float mul(float num1,float num2){
  return num1*num2;
}
float div(float num1,float num2){
return num1/num2;
}

  
