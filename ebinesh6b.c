#include<stdio.h>
#include<string.h>
int main() {
 char str[100],str2[100], result[200];
 printf("enter the first string:");
 gets(str1);
 printf("enter the second string:");
 gets(str2);
 char *ptr1=str1;
 char *ptr2=str2;
 char *resultptr=result;
 while(*ptr1!='\0') {
   *resultptr=*ptr1;
   ptr1++;
   resultptr++;
}
while(*ptr2!='\0') {
  *resultptr=*ptr2;
  ptr2++;
  resultptr++;
}
*resultptr='\0';
printf("concatenated string:%s\n",result);
return 0;
}
