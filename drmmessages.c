#include <stdio.h>
#include <string.h>

int main() {
    char message[15000];
    char d_message1[7500], d_message2[7500];
    int d_m1 = 0, d_m2 = 0;
    char r_message1[7500], r_message2[7500];
    char m_message[7500];
    int num1, num2;

    int i, j;

    scanf("%s", message);

    int l_message = strlen(message);
    int l_message_d = l_message / 2;

    // divide
    for (i = 0; i < l_message_d; i++) {
        d_message1[i] = message[i];
    }

    for (j = 0; i < l_message; j++) {
        d_message2[j] = message[i];
        i++;
    }

    // sum
    for (i = 0; i < l_message_d; i++) {
        num1 = (int)d_message1[i] - 65;
        d_m1 += num1;
        num2 = (int)d_message2[i] - 65;
        d_m2 += num2;
    }

    // rotate
    for (i = 0; i < l_message_d; i++) {
        r_message1[i] = (char)(((int)d_message1[i] - 65 + d_m1) % 26) + 65;
        r_message2[i] = (char)(((int)d_message2[i] - 65 + d_m2) % 26) + 65;
    }

    // merge & decrypt
    for (i = 0; i < l_message_d; i++) {
        m_message[i] = ((((int)r_message1[i] - 65) + ((int)r_message2[i] - 65)) % 26) + 65;
    }

    printf("%s", m_message);

    return 0;
}