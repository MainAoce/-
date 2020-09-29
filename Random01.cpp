#include<iostream>
#include<ctime>

using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    srand((unsigned)time(NULL)); //利用系统时钟产生的随机种子
    for(int i = 0; i < 10; i++)
    {
        cout << rand()%10+11 << endl;
    }
    return 0;
}

/*
* 取得(0,x)的随机数：rand()%x
* 取得(a,b)的随机数：rand()%(b-a)+a
* 取得(a,b)的随机整数：rand()%(b-a+1)+a
* 取得(a,b)的随机整数：rand()%(b-a)+a+1
* 取得0-1之间的浮点数：rand()/double(RAND_MAX)
*/
