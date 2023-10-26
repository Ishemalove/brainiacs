int main() {
    int a = 5, b = 3, c = 7;

    int result1 = (a > b) && (b < c);
    int result2 = (a > b) || (b > c);
    int result3 = !(a == b);

    printf("Result 1: (a > b) && (b < c) = %d\n", result1);//1
    printf("Result 2: (a > b) || (b > c) = %d\n", result2);//1
    printf("Result 3: !(a == b) = %d\n", result3);//1

    return 0;
}
