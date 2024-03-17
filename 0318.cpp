#include<cstdio>
#include<cstdlib>
#include<iostream>

int main(){
    printf("sizeof(char) = %d Byte\n", sizeof(char));
    printf("sizeof(short) = %d Byte\n", sizeof(short));
    printf("sizeof(int) = %d Byte\n", sizeof(int));
    printf("sizeof(long) = %d Byte\n", sizeof(long));
    printf("sizeof(long long) = %d Byte\n", sizeof(long long));
    printf("sizeof(float) = %d Byte\n", sizeof(float));
    printf("sizeof(double) = %d Byte\n", sizeof(double));
    printf("sizeof(long double) = %d Byte\n", sizeof(long double));
    printf("sizeof(wchar_t) = %d Byte\n", sizeof(wchar_t));
    printf("sizeof(char16_t) = %d Byte\n", sizeof(char16_t));
    printf("sizeof(char32_t) = %d Byte\n", sizeof(char32_t));
    system("pause");
    return 0;
}