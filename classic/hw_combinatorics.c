#include <stdio.h>

#define NUM 5

const int  weight[5]        = {1, 3, 9, 27, 81};
const int  weight_sum[5]    = {1, 4, 13, 40, 121};
const char operator_char[2] = {'+', '-'};

int func(int num, int index, int* key)
{
    int gap = 0;
    int i;

    if(num > weight[4])
    {
        printf("%d+", weight[4]);
        num -= weight[4];
    }

    for(i = 0; i < index; i++)
    {
        if(num <= weight[i])
        {
            index = i;
            break;
        }
    }

    gap = weight[index] - num;

    /*
     * 用了递归的方法
     * grap > 前几个数的和 num就是前面一个数加 新的num
     * <= 前几个数的和 num 就是weight[index] 减新的num
     */
    if(gap > weight_sum[index-1])
    {
        index -= 1;
        num = num - weight[index];
        printf("%d%c", weight[index], operator_char[0+*key]);
    }
    if(gap <= weight_sum[index])
    {
        num = weight[index] - num;
        printf("%d%c", weight[index], operator_char[1-*key]);

        /*
         *  如果前面出现 - 後面的运算符 要变换如
         *  5 = 9 - (3 + 1) => 5 = 9 - 3 - 1 
         */
        *key=1^*key;
    }
    if(num == 0)  return 0;
    
    return func(num, index, key);
}

int main(int argc, char** argv)
{
    int num, key, index;

    key = 0;
    index = 5;

    scanf("%d", &num);
    if(num < 1 || num > 121)
        printf("invalid number: %d\n", num);

    func(num, index, &key);
    printf("\n");

    return 0;
}
