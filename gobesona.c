#include <stdio.h>
#include <windows.h>

int main()
{
char a;
printf("hellow do you want to see the feature then please press \"Y\" or \"N\" \n");
scanf("%c", &a);
if (a="Y"){
{
    char message[] = "Hello MR. Walid Alam\n, how are you \nif you made so far then you are searching for something. Relax u will get everything \n\n\nnow dont you think its awsam???  ";
    int i;


    for (i = 0; message[i] != '\0'; i++) {
        printf("%c", message[i]);
        fflush(stdout);

        Sleep(70);
    }
}
    printf("\n");
}
else
{
    printf("thank you you can go now ");
}

    return 0;
}
