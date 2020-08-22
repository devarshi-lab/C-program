#include<stdio.h>

void reverse(int);

int main()
{
  printf("Enter number :\t");
  int iNo = 0;

  scanf("%d",&iNo);

  reverse(iNo);

  return 0;
}

void reverse(int num)
{
    int iDigit = 0,iRet = 0;
    if(num != 0)
    {
      iDigit = num % 10;
      num = num /10;
      reverse(num);

      switch(iDigit)
      {
        case 1 : printf("one\t");
                break;
        case 2: printf("two\t");
                break;
        case 3 : printf("three\t");
                break;
        case 4 : printf("four\t");
                break;
        case 5 : printf("five\t");
                break;
        }
    }

    return;
}
