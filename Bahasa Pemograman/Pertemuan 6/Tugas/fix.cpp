#include <iostream>

int main()
{
    // string contact[] = {"Ami", "Ayu", "Budi", "Agus", "Mila"};
    const char *contact[] = {"Ami", "Ayu", "Budi", "Agus", "Mila"};

    // int length = sizeof(contact) / sizeof(contact[0]);

    int length = sizeof(contact) / sizeof(+contact);
    printf("Byanyaknya isi array nilai: %d\n", length);

    return 0;
}
