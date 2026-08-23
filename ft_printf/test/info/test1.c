#include <stdio.h>
#include <stdarg.h>

// Variadic function to print given arguments
void print(int n, ...) {
    va_list args;
    va_start(args, n);  
    for (int i = 0; i < 3; i++) 
        printf("%f ", va_arg(args, double));
    printf("\n");
    va_end(args);
}
int main() {
  
	// Calling function print() with different number
	// of arguments
	print(3,4.3,2.1);
	//print(3, 1, 2, 3);
	//print(5, 1, 2, 3, 4, 5);
  
    return 0;
}

