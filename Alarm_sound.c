// #include<stdio.h>
// int main()
// {
//     printf("this is an alarm sound:))))))\a");
//     return 0;
// }


#include<stdio.h>
#include<windows.h>
int main()
{
    
    Beep(750,5000);//frequency ,duration (in millisecond)
    Beep(400,1000);
    return 0;
}