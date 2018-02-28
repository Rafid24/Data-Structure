#include<bits/stdc++.h>
using namespace std;

void towerofhanoi(int d, char from_rod, char to_rod, char aux_rod)
{
  if(d==1)
  {
      printf("Move disk 1 from %c to %c",from_rod,to_rod);
      return;
  }
  else
  {
      towerofhanoi(d-1,from_rod,aux_rod,to_rod);
      printf("\nMove disk %d from %c to %c\n",d,from_rod,to_rod);
      towerofhanoi(d-1,aux_rod,to_rod,from_rod);
  }
}

int main()
{
    int d;
    printf("Enter No of Disks:");
    scanf("%d",&d);
    towerofhanoi(d,'A','B','C');
    return 0;
}
