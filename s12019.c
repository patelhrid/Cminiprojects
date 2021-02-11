#include <string.h>
#include <stdio.h>

void horizontalFlip(int *a, int *b);
void verticalFlip(int *a, int *b);

int first = 1;
int second = 2;
int third = 3;
int fourth = 4;

int main(void)
{
    char str[1000000]; 
    scanf("%[^\n]%*c", str);  
    for (int i = 0; i <= strlen(str)+1; i++)
        {
            if (str[i] == 'H') {
                 horizontalFlip(&first, &third);
                 horizontalFlip(&second, &fourth);
            }
            else if (str[i] == 'V'){
                 verticalFlip(&first, &second);
                 verticalFlip(&third, &fourth);
            }
        }
        printf("%i %i\n", first, second);
        printf("%i %i\n", third, fourth);
}

void horizontalFlip(int *a, int *b){
   int j = *a;
   *a = *b;
   *b = j;
}

void verticalFlip(int *a, int *b){
   int k = *a;
   *a = *b;
   *b = k;
}
