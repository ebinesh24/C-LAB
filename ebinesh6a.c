#include<stdio.h>
int main() {
   char str[100];
   printf("enter a string:");
   gets(str);
   char*ptr=str;
   int length=0;
   while(*ptr!='\0'){
       length++;
       ptr++;
   }
   printf("length of the string:%d\n",length);
   return 0;
}
