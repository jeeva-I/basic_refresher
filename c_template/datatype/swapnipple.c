/**************************************************************************
 * Name: Jeeva
 * Date: 15/07/2026
 * Description: Swapping nibbles of byte
 * **********************************************************************/

#include <stdio.h>

int main()
{
    unsigned char byte, swapped;

    scanf("%hhx", &byte);

    swapped = ((byte & 0x0F) << 4) | ((byte & 0xF0) >> 4);

    printf("Original Byte : 0x%02X\n", byte);
    printf("Swapped Byte  : 0x%02X\n", swapped);

    return 0;
}