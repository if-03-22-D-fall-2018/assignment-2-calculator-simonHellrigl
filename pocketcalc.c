#include <stdio.h>
#include <stdbool.h>

void GetOperands (double* firstOperand, double* secondOperand) {
  printf("Please enter the first operand: ");
  scanf("%lf", firstOperand);
  printf("Please enter the second operand: ");
  scanf("%lf", secondOperand);
}

int  main(int argc, char const *argv[]) {

  int type_Of_Operation;
  bool breakCondition=false;
  double firstOperand;
  double secondOperand;
  double result;

  printf("Pocketcalculator\n");
  printf("================\n");
  printf("Select Add(1), Subtract(2), Multiply(3), Divide(4) or stop(-1): ");
  scanf("%d", &type_Of_Operation);

  GetOperands(&firstOperand, &secondOperand);
  do {
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
    else{
      printf("Input not allowed, please try again\n");
    }
  } while(breakCondition != true);

  return 0;
}
