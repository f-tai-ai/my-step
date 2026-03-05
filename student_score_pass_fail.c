#include<stdio.h>
struct student{
  char name[30];
  int score;
};
int main(){
  struct student class[3];
  for(int i=0;i<3;i++){
  printf("%d人目の名前：",i+1);
  scanf("%s",class[i].name);
  printf("%sさんの点数：",class[i].name);
  scanf("%d",&class[i].score);
  }
  printf("〜判定結果〜\n");
  for(int i=0;i<3;i++){
  if(class[i].score>=60){
    printf("%sさんは%d点で合格\n",class[i].name,class[i].score);
  }
    else{
      printf("%sさんは%d点で不合格\n",class[i].name,class[i].score);
    }
}
  return 0;\
}
