#include <stdio.h>
#include <string.h>
#define N 80
void rightAlignment(char*);
int main()
{
    char s[] = "After school,Kamal took the girls to the old house.It was very " 
        "old and very dirty too.There was rubbish everywhere. The windows "
        "were broken and the walls were damp. It was scary. Amy did not like it."
        "There were paintings of zombies and skeletons on the walls."
        "We are going to take photos for the school art competition,said Kamal." 
        "Amy did not like it but she did not say anything.Where is Grant?asked Tara." 
        "Er, he’s buying more paint.Kamal looked away quickly.Tara" 
        "thought he looked suspicious. Getting dark, can we go now?"
        " said Amy. She did not like zombies.";
    rightAlignment(s);
    return 0;
}
void rightAlignment(char* str)
{
    char* first, * last, * end;
    char delim[] = ",.; :!?";
    int i = 0, flag = 0, count = 0, finish = 0;
    end = &str[strlen(str)];
    last = first = str;
    while (!finish) {
        last += N;
        if (last >= end) 
        {
            last = end - 1;
            finish = 1;
        }
        flag = 0;
        while (!flag && !finish) {
            for (i = 0; delim[i]; i++)
                if (*last == delim[i]) 
                {
                    flag = 1;
                    break;
                }
            if (!flag)
                last--;
        }
        char* last1 = last, * first1 = first;
        int x = 0, y = 0, z = 0, q = 0, flag2 = 0;
        x = N - (last - first);
        count = 0;
        if (x > 2) {
            while (first1 <= last1) {
                for (i = 0; delim[i]; i++) {
                    if (*first1 == delim[i]) {
                        y++;
                        break;
                    }
                }
                first1++;
            }
            if (x > y) {
                z = x / y;
                q = x % y;
                for (int j = z; j; j--) {
                    putchar(' ');
                }
            }
            else {
                q = x;
                if (q-- > 0)
                    putchar(' ');
            }
            while (first <= last) {
                flag2 = 0;
                while (!flag2) {
                    for (i = 0; delim[i]; i++)
                        if (*first == delim[i])
                            flag2 = 1;
                    putchar(*first++);
                }
                if (z && first < last) {
                    for (int j = z; j; j--)
                        putchar(' ');
                }
                if (q-- > 0)
                    putchar(' ');
            }
        }
        else {
            while (last - first + count++ < N)
                putchar(' ');
            while (first <= last)
                putchar(*first++);
        }
        putchar('\n');
    }
}