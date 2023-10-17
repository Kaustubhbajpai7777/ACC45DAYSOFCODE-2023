#include <stdio.h>
void display();
int main()
{
    int a;
    printf("Initializing display function\n");              //Function Protottype
    display();                                              //Function Call
    printf("Display function finished its work\n");
    return 0;
}
void display(){                                            //Function Definition
    printf("This is display\n");
}
