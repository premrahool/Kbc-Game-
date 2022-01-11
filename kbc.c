#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	printf("---------------Welcome to KBC Quiz Test---------------\n");
	int i,n;
	int result=0,ch,c=0;
printf("press 1 for starting the quiz= ");
scanf("%d",&i);
printf("\n\n");

while(i!=0){
	ch=rand()%21;
	c++;
	switch(ch)
	{
		case 1:printf("%d)Which of the following methods can be used to find the largest and smallest number in a linked list?\n",c);
		printf("1.Recursion\n");
		printf("2.Iteration\n");
		printf("3.Both Recursion and iteration\n");
		printf("4.Impossible to find the largest and smallest numbers\n");
		scanf("%d",&n);
		printf("\n\n");
		if(n==3){
			result++;
		}
		else{
			i=0;
		}
		break;
	case 2:printf("%d)Which of the following lines should be inserted to complete the above code?\n",c);
	printf("1. temp > min_num\n");
	printf("val > min_min\n");
	printf("temp->val < min_num\n");
	printf(" temp->val > min_num\n");
	printf("Select answer from above question=");
	scanf("%d",&n);
	printf("\n\n");
	if(n==3)
	{
		result++;
	}
	else
	{
	i=0;	
	}
	break;
		case  3:printf("%d)Which of the following language is the predecessor to C Programming Language?\n",c);
	printf("1.A\n");
	printf("2.B\n");
	printf("3.BCPL\n");
	printf("4.C++\n");
	printf("Select answer from above question=");
	scanf("%d",&n);
	printf("\n\n");
	if(n==3)
	{
		result++;
	}
	else
	{
	i=0;	
	}
	break;
		case  4:printf("%d) C programming language was developed by\n",c);
	printf("1.Peter Norton\n");
	printf("2. Dennis Ritchie\n");
	printf("3.Ken Thompson\n");
	printf("4.Bill Gates\n");
	printf("Select answer from above question=");
	scanf("%d",&n);
	printf("\n\n");
	if(n==2)
	{
		result++;
	}
	else
	{
	i=0;	
	}
	break;
		case 5:printf("%d) C was developed in the year ___\n",c);
	printf("1. 1970\n");
	printf("2. 1972\n");
	printf("3. 1950\n");
	printf("4. 1845\n");
	printf("Select answer from above question=");
	scanf("%d",&n);
	printf("\n\n");
	if(n==2)
	{ result++;
	}
	else
	{
	i=0;	
	}
	break;
		case 6:printf("%d)If you want to exchange two rows in a two-dimensional array, the fastest way is to:\n",c);
	printf("1. Exchange the elements of the 2rows\n");
	printf("2. Exchange the address of each element in the two-row\n");
	printf("3. Silence the address of the rows in an array of the pointer and exchange the pointer\n");
	printf("4. None of these.\n");
	printf("Select answer from above question=");
	scanf("%d",&n);
	printf("\n\n");
	if(n==3)
	{
		result++;
	}
	else
	{
	i=0;	
	}
	break;
		case 7:printf("%d)If you want to exchange two rows in a two-dimensional array, the fastest way is to:\n",c);
	printf("1. Exchange the elements of the 2rows\n");
	printf("2. Exchange the address of each element in the two-row\n");
	printf("3. Both of above\n");
	printf("4.Silence the address of the rows in an array of the pointer and exchange the pointer\n");
	printf("Select answer from above question=");
	scanf("%d",&n);
	printf("\n\n");
	if(n==4)
	{
		result++;
	}
	else
	{
	i=0;	
	}
	break;
		case 8:printf(". C is a ___ language\n");
	printf("1.Low level\n");
	printf("2.Machine level\n");
	printf("3.High level\n");
	printf("4.Mid level\n");
	printf("Select answer from above question=");
	scanf("%d",&n);
	printf("\n\n");
	if(n==4)
	{
		result++;
	}
	else
	{
	i=0;	
	}
	break;
		case 9:printf("%d)Which of the following is a Scalar Data type\n",c);
	printf("1. Float\n");
	printf("2.Array\n");
	printf("3.Union\n");
	printf("4.Pointer\n");
	printf("Select answer from above question=");
	scanf("%d",&n);
	printf("\n\n");
	if(n==1)
	{
		result++;
	}
	else
	{
	i=0;	
	}
	break;
		case 10:printf("%d) What is the valid range of numbers for int type of data?\n",c);
	printf("1. 0 to 256\n");
	printf("2. -32768 to +32767\n");
	printf("3.-65536 to +65536\n");
	printf("4.No specific range\n");
	printf("Select answer from above question=");
	scanf("%d",&n);
	printf("\n\n");
	if(n==2)
	{
		result++;
	}
	else
	{
	i=0;	
	}
	break;
		case 11:printf("%d)The associativity of ! operator is\n",c);
	printf("1.Right to Left\n");
	printf("2.Left to Right\n");
	printf("3.for Arithmetic and (b) for Relational\n");
	printf("4.(a) for Relational and (b) for Arithmetic\n");
	printf("Select answer from above question=");
	scanf("%d",&n);
	printf("\n\n");
	if(n==1)
	{
		result++;
	}
	else
	{
	i=0;	
	}
	break;
		case 12:printf("%d)Operators have precedence. Precedence determines which operator is\n",c);
	printf("1. faster\n");
	printf("2. takes less memory\n");
	printf("3. evaluated first\n");
	printf("4. takes no arguments\n");
	printf("Select answer from above question=");
	scanf("%d",&n);
	if(n==3)
	{
		result++;
	}
	else
	{
	i=0;	
	}
	break;
		case 13:printf("%d)Which of the following statements is true?\n",c);
	printf("1. C Library functions provide I/O facilities\n");
	printf("2. C inherent I/O facilities\n");
	printf("3. C doesn’t have I/O facilities\n");
	printf("4. Both (a) and (c)\n");
	printf("Select answer from above question=");
	scanf("%d",&n);
	printf("\n\n");
	if(n==1)
	{
		result++;
	}
	else
	{
	i=0;	
	}
	break;
		case 14:printf("%d) Which pair of functions below are used for single character I/O.\n",c);
	printf("1. Getchar() and putchar()\n");
	printf("2. Scanf() and printf()\n");
	printf("3. Input() and output()\n");
	printf("4. None of these\n");
	printf("Select answer from above question=");
	scanf("%d",&n);
	printf("\n\n");
	if(n==1)
	{
		result++;
	}
	else
	{
	i=0;	
	}
	break;
		case 15:printf("%d). Which of the following is charecter oriented console I/O function?\n",c);
	printf("1. getchar() and putchar()\n");
	printf("2. gets() and puts()\n");
	printf("3. scanf() and printf()\n");
	printf("4. fgets() and fputs()\n");
	printf("Select answer from above question=");
	scanf("%d",&n);
	printf("\n\n");
	if(n==1)
	{
		result++;
	}
	else
	{
	i=0;	
	}
	break;
		case 16:printf("%d)The output of printf(“%u”, -1) is\n",c);
	printf("1. -1\n");
	printf("2. minimum int value\n");
	printf("3. maxium int value\n");
	printf("4. Eror message\n");
	printf("Select answer from above question=");
	scanf("%d",&n);
	printf("\n\n");
	if(n==3)
	{
		result++;
	}
	else
	{
	i=0;	
	}
	break;
		case 17:printf("%d)malloc() function used in dynamic allocation is available in which header file?\n",c);
	printf("1. stdio.h\n");
	printf("2. math.h\n");
	printf("3. conio.h\n");
	printf("4. stdlib.h\n");
	printf("Select answer from above question=");
	scanf("%d",&n);
	printf("\n\n");
	if(n==4)
	{
		result++;
	}
	else
	{
	i=0;	
	}
	break;
		case 18:printf("%d)File manipulation functions in C are available in which header file?\n",c);
	printf("1. streams.h\n");
	printf("2. conio.h\n");
	printf("3. files.h\n");
	printf("4. stdlib.h\n");
	printf("Select answer from above question=");
	scanf("%d",&n);
	if(n==3)
	{
		result++;
	}
	else
	{
	i=0;	
	}
	break;
		case 19:printf("%d)The conversion characters for data input means that the data item is\n",c);
	printf("1. An unsigned decimal integer\n");
	printf("2. A short integer\n");
	printf("3. A hexadecimal integer\n");
	printf("4. A string followed by white space\n");
	printf("Select answer from above question=");
	scanf("%d",&n);
	printf("\n\n");
	if(n==2)
	{
		result++;
	}
	else
	{
	i=0;	
	}
	break;
		case 20:printf("%d)If the size of the array is less than the number of initializers then,\n",c);
	printf("1. Extra values are being ignored\n");
	printf("2. Generates an error message\n");
	printf("3. Size of Array is increased\n");
	printf("4. Size is neglected when values are given\n");
	printf("Select answer from above question=");
	scanf("%d",&n);
	printf("\n\n");
	if(n==1)
	{
		result++;
	}
	else
	{
	i=0;	
	}
	break;
default :printf("case is %d is not exist",ch);
break;
		
	}
}
printf("\nThe result is=%d",result);
return 0;
}
