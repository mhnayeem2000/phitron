#include<bits/stdc++.h>
using namespace std;

int main() {
    char ch[1000];
    gets(ch);

    int len = 0;
    for (int i = 0; ch[i] != '\0'; i++)
        len++;

    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (ch[i] > ch[j]) {
                int temp = ch[i];
                ch[i] = ch[j];
                ch[j] = temp;
            }
        }
    }

    cout << ch;

    return 0;
}
