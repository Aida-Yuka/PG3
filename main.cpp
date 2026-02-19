#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

// コールバック関数のプロトタイプ宣言
typedef void (*Callback)(int roll,int userGuess);

// サイコロの出目を決定する関数
int roll_dice()
{
    return rand() % 6 + 1;/*ランダム関数で1～6のどれかを返す*/;
}

//遅延実行関数
void DelayReveal(Callback fn, unsigned int delayMs, int roll, int userGuess)
{
    printf("判定中...\n");
    Sleep(delayMs);
    fn(roll, userGuess);
}

//判定関数
void ShowResult(int roll, int userGuess)
{
    if ((roll % 2 == 1 && userGuess == 1) || (roll % 2 == 0 && userGuess == 2)) {
        printf("正解\n");
    }
    else {
        printf("不正解\n");
    }

    printf("サイコロの目は%d\n", roll);
}

// メイン関数
int main()
{
    int userGuess = 0;//プレイヤーの入力した関数
    int roll = 0;//サイコロの目

    //ユーザーからの入力
    printf("サイコロの出目が奇数(1)か偶数(2)か入力:");
    scanf_s("%d", &userGuess);

    srand((unsigned)time(NULL));
    roll = roll_dice();

    Callback callback = ShowResult;

    //三秒後に結果表示
    DelayReveal(callback, 3000, roll, userGuess);

    return 0;
}