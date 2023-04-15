#include <stdio.h>
#include <stdlib.h>
/**
*main - print least cents
*@argc:count parameter
*@argv:count array
*Return: 0
*/

int main(int argc, char *argv[])
{

if (argc != 2)
{
printf("Error\n");
return (1);
}

else
{
int money = atoi(argv[1]);
int i = 0;
int lcents = 0;
int cents [] = {25, 10, 5, 2, 1};

for (i = 0; i < 5; i++)
{
lcents += money / cents[i];
money = money % cents[i];
if (money == 0)
{
break;
}


}

printf("%d\n", lcents);
}

return (0);
}
