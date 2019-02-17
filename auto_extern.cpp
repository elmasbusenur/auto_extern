#include<stdio.h>
extern int a = 1, b = 2, c = 3;

int f(void);

int main(void)
 {
 printf("%3d\n", f());//12
 printf("%3d%3d%3d\n", a, b, c); //a neden 1 degil(auto icine a alinca 1 oluyor)
 return 0;
 }
 int f(void) 
 {
 auto int b, c; //b ve c nin fonk kapsaminda kullanilacagini soyluyorum
 a = b = c = 4;
 return(a + b + c);
}
