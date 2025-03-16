#include <stdio.h>
#include <stdlib.h>
#define MIN 1
#define MAX 6

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);
    int arr[100] = {0};
    int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0;
    int sum = 0;

    for (int i = 0; i < 100;i++) {
    
        int random_val = rand() % (MAX - MIN + 1) + MIN;
        arr[i] = random_val;
        
        if (arr[i] == 1) one++;
        if (arr[i] == 2) two++;
        if (arr[i] == 3) three++;
        if (arr[i] == 4) four++;
        if (arr[i] == 5) five++;
        if (arr[i] == 6) six++;

        sum = sum + random_val;
    }
    float avg = (float)sum/100;
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%.1f\n", one, two, three, four, five, six, sum, avg);



   
    // Your code goes here

    return 0;
}
