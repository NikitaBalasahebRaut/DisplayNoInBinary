/*
    Problem statement :
 Accept number from user and display its binary represenattion.
 */
 
 #include<stdio.h>
 
 void DisplayBinary(int iValue)
 {
   int iDigit = 0;
   
   while(iValue != 0)
   {
     iDigit = iValue % 2;
	 printf("%d",iDigit);
	 iValue = iValue /2;
   }
 }
 
 int main()
 {
  int iNo = 0;
  
  printf("Enter The No \n");
  scanf("%d",&iNo);
  
  DisplayBinary(iNo);
 
 return 0;
 }
 
 /*
 
 output
 
 Enter The No
12
0011

*/