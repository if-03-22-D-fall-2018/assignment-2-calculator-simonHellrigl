#include <stdio.h>
#include <stdbool.h>

void GetOperands(double *firstOperand, double* secondOperand);
void CalculateResults(double firstOperand, double secondOperand, int type_Of_Operation, bool breakCondition);

int  main(int argc, char const *argv[]) {

  int type_Of_Operation;
  bool breakCondition=false;
  double firstOperand;
  double secondOperand;


  printf("Pocketcalculator!\n");
  printf("=================\n");
  while (breakCondition == false) {
    printf("Select Add(1), Subtract(2), Multiply(3), Divide(4) or stop(-1): ");
    scanf("%d", &type_Of_Operation);
    GetOperands(&firstOperand, &secondOperand);
    CalculateResults(firstOperand, secondOperand, type_Of_Operation, breakCondition);

  }


  return 0;
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
  else if (type_Of_Operation == -1) {
     breakCondition = true;
  }
  else {
    printf("Input not allowed, please try again\n");
  }
  printf("\nResult: %lf\n\n", result);


}
