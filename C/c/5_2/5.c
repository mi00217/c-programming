#include<stdio.h>
int main(){
    int score;
    //scoreが８０以上なら「合格」と表示しよう;
    printf ("点数を入力してください\n"); 
    scanf("%d",&score);
    if(score>=80){
printf("合格\n");
    }
    else{
        printf("不合格\n");
    }
return 0;
}