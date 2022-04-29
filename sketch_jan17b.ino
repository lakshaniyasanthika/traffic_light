int signal1[] = {0,1,2};     //Green , Yellow , Red 
int signal2[] = {5,4,3};     //Green , Yellow , Red 
int signal3[] = {6,7,8};     //Green , Yellow , Red 
int signal4[] = {11,10,9}; //Green , Yellow , Red 
 
int redDelay = 2000; 
int yellowDelay= 2000; 
 
void setup() 
{ 
  for (int i = 0; i < 3; i++) 
{ 
  pinMode(signal1[i], OUTPUT); 
  pinMode(signal2[i], OUTPUT); 
  pinMode(signal3[i], OUTPUT); 
  pinMode(signal4[i], OUTPUT); 
   
} 
for (int i = 0; i < 3; i++) 
{ 
digitalWrite(signal1[i], LOW); 
digitalWrite(signal2[i], LOW); 
digitalWrite(signal3[i], LOW); 
digitalWrite(signal4[i], LOW); 
} 
} 
void loop() 
{ 
 
 digitalWrite(signal1[0], HIGH); 
 digitalWrite(signal1[2], LOW); 
 digitalWrite(signal2[2], HIGH); 
 digitalWrite(signal3[2], HIGH); 
 digitalWrite(signal4[2], HIGH); 
 digitalWrite(signal4[1], LOW); 
 delay(redDelay); 
 
 digitalWrite(signal1[0], LOW); 
 digitalWrite(signal1[1], HIGH); 
 delay(yellowDelay); 
 
 digitalWrite(signal1[1], LOW); 
 digitalWrite(signal1[0], LOW); 

 
 digitalWrite(signal1[2], HIGH); 
 delay(redDelay); 
  
 digitalWrite(signal1[2], HIGH); 
 digitalWrite(signal1[1], LOW); 
 digitalWrite(signal2[0], HIGH); 
 digitalWrite(signal2[2], LOW); 
 delay(redDelay); 
 
 digitalWrite(signal2[0], LOW); 
 digitalWrite(signal2[1], HIGH); 
 delay(yellowDelay); 
 
 digitalWrite(signal2[2], HIGH); 
 digitalWrite(signal2[1], LOW); 
 digitalWrite(signal3[0], HIGH); 
 digitalWrite(signal3[2], LOW); 
 delay(redDelay); 
 
 digitalWrite(signal3[0], LOW); 
 digitalWrite(signal3[1], HIGH); 
 delay(yellowDelay); 
 
 digitalWrite(signal3[1], LOW); 
 digitalWrite(signal3[2], HIGH); 
 digitalWrite(signal4[2], LOW); 
 digitalWrite(signal4[0], HIGH); 
 delay(redDelay); 
   
 digitalWrite(signal4[0], LOW); 
 digitalWrite(signal4[1], HIGH); 
 delay(yellowDelay); 
 
} 
