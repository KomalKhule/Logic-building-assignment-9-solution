#include<stdio.h> 
int RangeSumEven(int iStart , int iEnd)
{ 
 int iCnt,iSum=0;
	if(iStart>iEnd)
	{
		printf("Invalid range\n");
		
	}
	if(iStart<0 || iEnd<0)
	{
		printf("Invalid range\n");
	}
	else
	{
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		if(iCnt%2==0)
		{
		iSum=iSum+iCnt;
		}
	}
	}
 return iSum;
} 
int main()
{
 int iValue1 = 0, iValue2 = 0, iRet =0;
 printf("Enter starting point\n");
 scanf("%d",&iValue1);
 printf("Enter ending point\n");
 scanf("%d",&iValue2);
 iRet = RangeSumEven(iValue1, iValue2);
 printf("Addition is %d\n",iRet);
 return 0;
} 