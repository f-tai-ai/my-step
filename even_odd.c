#include<stdio.h>
int main(){
  int a;
  printf("数字の入力：");
  scanf("%d",&a);
  if(a%2==0){
    printf("偶数\n");
  }
    else{
      printf("奇数\n");
    }
}

