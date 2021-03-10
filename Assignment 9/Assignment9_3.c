#include<stdio.h>
int RangeSum(int iStart , int iEnd)
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
		iSum=iSum+iCnt;
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
 iRet = RangeSum(iValue1, iValue2);
 printf("Addition is %d\n",iRet);
 return 0;
} 