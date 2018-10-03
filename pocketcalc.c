#include <stdio.h>
#include <stdbool.h>

void GetOperationType(int* type_Of_Operation);
void GetOperands(double* firstOperand, double* secondOperand);
void CalculateResults(double firstOperand, double secondOperand, int type_Of_Operation, bool breakCondition);


int  main(int argc, char const *argv[]) {

  int type_Of_Operation;
  bool breakCondition=false;
  double firstOperand;
  double secondOperand;


  printf("Pocketcalculator\n");
  printf("=================\n");
  while (breakCondition == false) {

    GetOperationType(&type_Of_Operation);

    if (type_Of_Operation == -1) {
      breakCondition = true;
    }
    else if(type_Of_Operation <=4 && type_Of_Operation > 0){
      GetOperands(&firstOperand, &secondOperand);
      if (type_Of_Operation == 4 && secondOperand == 0) {
        printf("Divided by 0\n");
      }
      else{
        CalculateResults(firstOperand, secondOperand, type_Of_Operation, breakCondition);
      }
    }

    else {
      printf("Input not allowed, please try again\n");
    }
  }

  return 0;
}
void GetOperationType(int* type_Of_Operation) {
  printf("Add(1)\n");
  printf("Subtract(2)\n");
  printf("Multiply(3)\n");
  printf("Divide(4)\n");
  printf("Stop Program(-1)\n");
  printf("Enter your choice: ");
  scanf("%d", type_Of_Operation);

}

void GetOperands (double* firstOperand, double* secondOperand) {
  printf("Please enter the first operand: ");
  scanf("%lf", firstOperand);
  printf("Please enter the second operand: ");
  scanf("%lf", secondOperand);
}

void CalculateResults(double firstOperand, double secondOperand, int type_Of_Operation, bool breakCondition){

  double result;
  if (type_Of_Operation == 1) {

    result = firstOperand + secondOperand;
  }
  else if (type_Of_Operation ==  2) {
    result = firstOperand - secondOperand;
  }
  else if (type_Of_Operation == 3) {
    result = firstOperand * secondOperand;
  }
  else if (type_Of_Operation == 4) {
    result = firstOperand / secondOperand;
  }

  printf("\nResult: %lf\n\n", result);


}
