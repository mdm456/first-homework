#include <stdio.h>
#include <memory.h>
#define MAXSTACK 100
unsigned int string[MAXSTACK] = { 0 };
unsigned int pos = 1;//NEXT POSITION
unsigned int number;
void divide(int n)
{
if (n <= 1){
return;
}
int i = 1;
for (i=n/2; i>=string[pos-1]&&i>=1; i--)
{
unsigned int j;
printf("%d=", number);
for (j = 1; j < pos; j++)
printf("%d+", string[j]);
printf("%d+%d\n", i, n - i);
if (n - i >= string[pos-1])
{
string[pos] = n - i;
pos++;
divide(i);
if (i == 1)pos--;
}
if (i >= string[pos-1])
{
string[pos] = i;
pos++;
divide(n - i);
if (n - i == 1)pos--;
}
}
if (n != number)pos--;

}
int main()
{
scanf("%d", &number);
while (number != 0){
pos = 1;
divide(number);
scanf("%d", &number);
memset(string, 0, sizeof(unsigned int)* MAXSTACK);
}
}
