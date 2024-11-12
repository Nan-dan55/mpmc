#include <LPC214x.H> 
void delay_led(unsigned long int); 
int main(void)
{
IO0DIR = 0x000007FC; 
while(1) 
{
IO0CLR = 0x00000FFF; 
IO0SET = 0x00000604; //1
delay_led(150000); 
IO0CLR = 0x00000FFF; 
IO0SET = 0x000007E4; //2
delay_led(150000); 
IO0CLR = 0x00000FFF; 
IO0SET = 0x00000648; //3
delay_led(150000); 
IO0CLR = 0x00000FFF; 
IO0SET = 0x00000618; //4
delay_led(150000);
IO0CLR = 0x00000FFF;
IO0SET = 0x00000730; //5
delay_led(150000); 
IO0CLR = 0x00000FFF; 
IO0SET = 0x00000690; //6
delay_led(150000); 
IO0CLR = 0x00000FFF; 
IO0SET = 0x00000680; //7
delay_led(150000); 
IO0CLR = 0x00000FFF; 
IO0SET = 0x0000063C; //8
delay_led(150000);
IO0CLR = 0x00000FFF; 
IO0SET = 0x00000600; //9
delay_led(150000);
IO0CLR = 0x00000FFF;
IO0SET = 0x00000630; //10
delay_led(150000); 
IO0CLR = 0x00000FFF; 
IO0SET = 0x00000620; //11
delay_led(150000); 
IO0CLR = 0x00000FFF; 
IO0SET = 0x00000780; //12
delay_led(150000); 
IO0CLR = 0x00000FFF; 
IO0SET = 0x000006C4; //13
delay_led(150000);
IO0CLR = 0x00000FFF;
IO0SET = 0x00000708; //14
delay_led(150000); 
IO0CLR = 0x00000FFF; 
IO0SET = 0x000006C0; //15
delay_led(150000); 
IO0CLR = 0x00000FFF; 
IO0SET = 0x000006E0; //16
delay_led(150000); 
IO0CLR = 0x00000FFF; 
}
}
void delay_led(unsigned long int count1)
{
while(count1 > 0) {count1--;} 
}
