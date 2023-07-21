#include <stdio.h>

int main() {
    int n;
    double sum = 0;
    double average = 0;

    printf("amount of number : ");
    scanf("%d", &n);

    int count = 0; 
    while (count < n) {
        double num;
        printf("insert number ");
        scanf("%lf", &num);

        if (num <= 0) {
            break; 
        }
    
        sum += num;
        count++;
    }

    if (count > 0) {
        average = sum / count; 
        printf("total average is ", average);
    } else {
        printf("Program end");
    }

    printf("total sum is : \n", sum);
    
    return 0;
}



