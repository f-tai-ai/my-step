#include<stdio.h>
struct student{
  char name[30];
  int score;
};
int main(){
  struct student class[2];
  for(int i=0;i<2;i++){
    printf("%d人目の名前：",i+1);
    scanf("%s",class[i].name);
    printf("点数：");
    scanf("%d",&class[i].score);
  }
    printf("\n〜成績一覧〜\n");
    for(int i=0;i<2;i++){
      printf("名前：%sさん、点数%d点\n",class[i].name,class[i].score);
    }
      return 0;
  }
