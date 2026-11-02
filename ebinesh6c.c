#include<stdio.h>
#include<string.h>
int main() {
  char str[100];
  printf("enter a string:");
  gets(str);
  char *start=str;
  char *end=str+strlen(str)-1;
  int isPalindrome=0;
  while(start<end) {
    if(*start!=*end) {
    isPalindrome=0;
    break;
  }
  start++;
  end--;
 }
 if(isPalindrome) {
   printf("the string is a palindrome.\n");
 } else {
   printf("the string is not a palindrome.\n");
   }
   return 0;
}
  
