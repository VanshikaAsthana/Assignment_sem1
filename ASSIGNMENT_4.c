//Rock Paper Scissor
#include<stdio.h>
int main()
{
    char ch1,ch2;
    int num_ch1,num_ch2;
    printf("Lets play Rock Paper Scissor\n");
    printf("Here\ns stands for scissprs\nr stands for rock\np stands for paper\n");
    printf("*If the number is between 0-33 then the choice will be Rock.\n*If the number is between 34-66 then the choice will be Paper.\n*If the number is between 67-100 then the choice will be Scissors.\n");
    printf("User 1 enter your choice:\n");
    scanf("%d",&num_ch1);
    switch(num_ch1)
    {
        case 0 ... 33:
        ch1='r';
        break;
        case 34 ... 66:
        ch1='p';
        break;
        case 67 ... 100:
        ch1='s';
        break;
        default:printf("Enter correct value\n");
        break;
    }
    printf("User 2 enter your choice:\n");
    scanf("%d",&num_ch2);
    switch(num_ch2)
    {
        case 0 ... 33:
        ch2='r';
        break;
        case 34 ... 66:
        ch2='p';
        break;
        case 67 ... 100:
        ch2='s';
        break;
        default:printf("Enter correct value\n");

    }
    if(ch1=='r'&&ch2=='p')
    {
        printf("Its rock vs paper and PAPER(User 2)wins");
    }
    else if(ch1=='p'&&ch2=='r')
    {
        printf("Its paper vs rock and PAPER(User 1)wins");
    }
    else if(ch1=='s'&&ch2=='p')
    {
        printf("Its scissors vs paper and SCISSORS(User 1)wins");
    }
    else if(ch1=='p'&&ch2=='s')
    {
        printf("Its paper vs scissors and SCISSORS(User 2) wins");
    }
    else if(ch1=='r'&&ch2=='s')
    {
        printf("Its rock vs scissors and ROCK(User 1)wins");
    }
    else if(ch1=='s'&&ch2=='r')
    {
        printf("Its scissors vs rock and ROCK(User 2) wins");
    }
    else if(ch1==ch2)
    {
        printf("Its a tie");
    }
    return 0;
}