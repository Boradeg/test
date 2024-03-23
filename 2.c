#include <stdio.h>
#include <string.h>

int fu(int *marks,int n,char gender);
int fu(int *marks,int n,char gender)
{ int sum=0;

  for (int i =(gender=='b'?0:1); i < n; i=i+2)
  {
    sum=sum+(marks[i]);
  }
  return sum;

}
int main()
{
  int n, sum = 0;
  char gender;
  printf("enter how many STUDENT:");
  scanf("%d", &n);
  int marks[1000];
  printf("enter marks ::");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &marks[i]);
  }
  printf("enter gender");
  scanf("%c ", &gender);
  
  int res=fu(marks,n,gender);
  printf("%d",res);
}
  // printf("genser");
