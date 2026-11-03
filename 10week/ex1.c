#include <stdio.h>
#include <ctype.h>
int main() {
    char ch = 'M';
    printf("문자: %c\n", ch);

    printf("알파벳 여부: %s\n", isalpha(ch) ? "예" : "아니요");
    // isalpha() 함수는 문자가 알파벳인지 확인한다.
    printf("대문자 여부: %s\n", isupper(ch) ? "예" : "아니요");
    // isupper() 함수는 문자가 대문자인지 확인한다.
    printf("소문자 여부: %s\n", islower(ch) ? "예" : "아니요");
    // islower() 함수는 문자가 소문자인지 확인한다.
    printf("숫자 여부: %s\n", isdigit(ch) ? "예" : "아니요");
    // isdigit() 함수는 문자가 숫자인지 확인한다.
    printf("알파벳 또는 숫자 여부: %s\n", isalnum(ch) ? "예" : "아니요");
    // isalnum() 함수는 문자가 알파벳 또는 숫자인지 확인한다.
    printf("16진수 숫자 여부: %s\n", isxdigit(ch) ? "예" : "아니요");
    // isxdigit() 함수는 문자가 16진수 숫자인지 확인한다.
    printf("구두점 문자 여부 : %s\n", ispunct(ch) ? "예" : "아니요");
    // ispunct() 함수는 문자가 구두점인지 확인한다.
    printf("인쇄 가능 문자 여부: %s\n", isprint(ch) ? "예" : "아니요");
    // isprint() 함수는 문자가 인쇄 가능한지 확인한다.
    printf("제어 문자 여부: %s\n", iscntrl(ch) ? "예" : "아니요");
    // iscntrl() 함수는 문자가 제어 문자인지 확인한다.
    printf("아스키 문자 여부: %s\n", isascii(ch) ? "예" : "아니요");
    // isascii() 함수는 문자가 아스키 문자 범위에 속하는지 확인한다.
}