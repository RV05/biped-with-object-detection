
#include <Servo.h> 
Servo rf;
Servo rt;
Servo lf;
Servo lt;
 int pos;
void setup() 
{ 
rf.attach();
rt.attach();
lf.attach();
lt.attach();

} 
 
 
void loop() 
{int pos=120;
rf.write(90);
rt.write(90);
lf.write(90);
lt.write(90);delay(500);
lf.write(55);delay(400);
 for(int i=90;i<=115;i++)
 {rf.write(i);delay(12);}

lf.write(120);delay(100);
lt.write(120);delay(100);
delay(500);
 for(int i=90;i<=120;i++)
{rt.write(i);delay(12);
lt.write(i);delay(12);}

 lf.write(90);delay(300);
 for(int i=115;i>=90;i--)
 {rf.write(i);delay(12);}

delay(500);

 rf.write(120);delay(300);
lf.write(65);
rt.write(60);
for(pos=120;pos>=60;pos--)
{lt.write(pos);delay(7);}
 rf.write(60);

 delay(500);
  rf.write(90);delay(300);
lf.write(90);delay(300);
lt.write(60);delay(300);

rt.write(60);delay(300);
 delay(500);
} 
