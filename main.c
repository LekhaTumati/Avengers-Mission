#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, code, mission;
    printf("We are on planet Earth, year 3022. There are six robots, deployed from Stark Industries, to keep the Infinity stones safe.");
    printf("The mind stone is with Vision on Earth, in Germany. ");
    printf("The soul Stone is on planet Vormir, guarded by the red Skull. ");
    printf("The time stone is on Earth in New York, with Doctor Strange. ");
    printf("The space stone was again, stolen by Loki and it is on a ship right outside Asgard. ");
    printf("The power is with Peter Quill in Morag, in the form of an Orb. ");
    printf("The reality stone is with the collector on planet CygnusX-I.\n");
    printf("Your mission is to guide the robots and acquire the Infinity stones. This is your mission should you choose to except it, enter 1\n");

    scanf("%d", &n);
    if(n == 1)
    {
        printf("Please enter the code\n");
        scanf("%d", &code);
        if(code == 130013)
        {
        printf("Enter a number from 1 - 6\n");
        scanf("%d", &mission);

            switch (mission)
            {
            case 1:
                printf("Your mission is to acquire the mind stone from vision. It is located in Germany and he is accompanied by an extremely hostile force named, Wanda. This is your mission should you choose to accept it\n");
                printf("Now that you have accepted the mission, to get the mind stone from vision, you have to solve this question!\n");
                printf("Enter a perfect number\n");
                int num, rem, sum = 0, i;
                printf("Enter a number\n");
                scanf("%d", &num);
                for(i = 1; i < num; i++)
                {
                    rem = num % i;
                    if (rem == 0)
                    {
                        sum = sum + i;
                    }
                }
                if (sum == num)
                      printf(" %d is a Perfect Number", num);
                else
                      printf("\n %d is not a Perfect Number", num);

            break;

            case 2:
                printf("Your mission is to acquire the soul stone guarded by the red skull  . It is located on planet Vormir. This is your mission should you choose to accept it\n");
                printf("Now that you have accepted the mission, to get the soul stone from red skull, you have to solve this question!\n");
                int n, reversedN = 0, remainder, originalN;
                printf("Enter a palindrome number: ");
                scanf("%d", &n);
                originalN = n;
                while (n != 0)
                {
                    remainder = n % 10;
                    reversedN = reversedN * 10 + remainder;
                    n /= 10;
                }

                if (originalN == reversedN)
                    printf("%d is a palindrome.", originalN);
                else
                    printf("%d is not a palindrome.", originalN);

            break;

            case 3:
                printf("Your mission is to acquire the time stone from doctor strange. It is located in New York and he is accompanied by Wong, another sorceror. This is your mission should you choose to accept it\n");
                printf("Now that you have accepted the mission, to get the time stone from doctor strange, you have to solve this question!\n");
                int n2, i5, flag = 0;
                printf("Enter a prime integer: ");
                scanf("%d", &n2);

                for (i5 = 2; i5 <= n2 / 2; ++i5)
                {
                    if (n2 % i5 == 0)
                    {
                        flag = 1;
                        break;
                    }
                }

                if (n2 == 1)
                {
                    printf("1 is neither prime nor composite.");
                }
                else
                {
                    if (flag == 0)
                    printf("%d is a prime number.you Won!", n2);
                else
                    printf("%d is not a prime number.you lost!", n2);
                }
            break;

            case 4:
                printf("Your mission is to acquire the space stone from Loki. It is located in a ship right outside Asgard and he is accompanied by Thor and his fellow Asgardians. This is your mission should you choose to accept it\n");
                printf("Now that you have accepted the mission, to get the space stone from Loki, you have to solve this question!\n");
                int number, tempvariable, remainde, i7, factorial, sum6=0;

     printf("Enter strong number: ");
     scanf("%d",&number);

     tempvariable = number;

     while( number!=0 )
     {
         factorial = 1;
         remainde = number%10;

         for(i7=1; i7<=remainde; i7++)
         {
             factorial *= i7;
         }

         sum6 += factorial;
         number /= 10;
     }

     if( tempvariable == sum6 )
         printf("%d is a strong number.\n",tempvariable);
     else
         printf("%d is not a strong number.\n",tempvariable);

           break;

            case 5:
                printf("Your mission is to acquire the reality stone from the collector. It is located on planet Cygnus X-I. This is your mission should you choose to accept it\n");
                printf("Now that you have accepted the mission, to get the reality stone from the collector, you have to solve this question!\n");
                int nu, originalNum, remaind, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &nu);
    originalNum = nu;

    while (originalNum != 0) {
        remaind = originalNum % 10;

       result += remaind * remaind * remaind;

       originalNum /= 10;
    }

    if (result == nu)
        printf("%d is an Armstrong number.", nu);
    else
        printf("%d is not an Armstrong number.", nu);

            break;

            case 6:
                printf("Your mission is to acquire the power stone from Peter Quill. It is located on planet Morag. This is your mission should you choose to accept it\n");
                printf("Now that you have accepted the mission, to get the power stone from Peter Quill, you have to solve this question!\n");
                int h;
                int *ptr;
                ptr = &h;
                printf("Pick a number 1 or 2\n");
                scanf("%d", *ptr);
                if(ptr == 1)
                {
                    printf("You lost!\n");
                }
                else
                {
                    printf("You won! yay!\n");
                }
            break;

            default:
                printf("invalid number\n");
            }
        }
    }
    else
    {
        printf("exit game");
    }
    printf("Enjoy the Game!\n");
}
