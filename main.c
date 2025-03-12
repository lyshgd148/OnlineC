#include <stdarg.h>
#include <stdio.h>
#include <string.h>

// double average(int num, ...) {
//     va_list args;
//     va_start(args, num);
//     double sum = 0;
//     for (int i = 0; i < num; i++) {
//         sum += va_arg(args, double);
//     }
//     va_end(args);
//     return sum / num;
// }

int main(void) {
    // printf("Sum:%f\n", average(3, (double)1, (double)2, (double)3));

    char str[] = "apple,banana,grape,orange";  // 需要拆分的字符串
    char *token = strtok(str, ",");  // 以 ',' 作为分隔符
    printf("%s\n",token);
    token=strtok(NULL, ",");
    printf("%s\n",token);
    return 0;
}
