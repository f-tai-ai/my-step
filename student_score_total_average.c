#include<stdio.h>
struct student{
  char name[30];
  int score;
};

struct student input_data(int number){
  struct student s;
  printf("%d人目の名前：",number);
  scanf("%s",s.name);
  printf("%sさんの点数：",s.name);
  scanf("%d",&s.score);
    return s;
}

double get_average(int total){
  double average=total/3.0;
  return average;
}

int main(){
  struct student class[3];
  int total=0;
  for(int i=0;i<3;i++){
    class[i]=input_data(i+1);
    total +=class[i].score;
  }
  double average=get_average(total);
  printf("〜統計結果〜\n");
  printf("クラスの合計点：%d点\n",total);
  printf("クラスの平均点：%.1f点\n",average);
  return 0;
}
