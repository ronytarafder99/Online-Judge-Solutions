#include <cstdio>

using namespace std;

int main() {
    int number;
    scanf("%d", &number);

    int sum = 0;

    if (number <= 0)
    {
        sum = (number * (1 - number) / 2) + 1;
    }
    else
    {
        sum = (number * (number + 1)) / 2;
    }

    printf("%d\n", sum);

    return 0;
}