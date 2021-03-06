#define CR 0x0D
#include <LPC214x.H>
void init_serial (void);
int putchar (int ch);
int getchar (void);
unsigned char test;
int main(void)
{
char *Ptr = "*** UART1 Demo ***\n\n\rType Characters to be echoed!\n\n\r";
VPBDIV = 0x02; //i Divide Petk by two
init_serial();
while(1)
{
while (*Ptr)
{
putchar(*Ptr++);
}
putchar(getchar()); // Echo terminal
}
}
void init_serial (void)
{
PINSEL0 = 0x00050000; // Enable RxD0 and TxD0
U1LCR =0x00000083;//#8 bits, no Parity, 1 Stop bit
U1DLL = 0x000000C3;//1/9600 Baud Rate @ 30MHz VPB Clock
U1LCR =0x00000003;
}
int putchar (int ch)
{
if(ch == '\n')
{
while (!(U1LSR & 0x20))
U1THR = CR;
}
while (!(U1LSR & 0x20))
 return(U1THR = ch);
}
int getchar (void)
{
while (!(U1LSR & 0x01))
return (U1RBR);
}