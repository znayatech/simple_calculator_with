#include <stdio.h>

int main() {
char operator;
printf("Choose an operator ['+', '-', '/']: ");
scantf("%c", &operator);

double num1, num2;

printf("Enter first number: ");
scantf("%lf", %num1);



printf("Enter second number: ");
scantf("%lf", %num2);

double result;

switch(operator) {
case '+':
 result = num1 + num2;
 break;

case '-':
 result = num1 - num2;
 break;

case '/':
 result = num1 / num2;
 break;

}


return 0;
}
