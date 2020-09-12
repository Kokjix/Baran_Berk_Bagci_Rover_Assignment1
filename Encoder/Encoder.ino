#include <Wire.h>

char Encoder[19] = {'S', '0', '0', '0', '0', '0','0','0','0','0','0','0','0','0','0','0','0', 'F'};

int MotorVel[4];
int MotorRot[4];
int split[12];

char b[4];
char b1[4];
char b2[4];
char b3[4];

char c1[2];
char c2[2];
char c3[2];
char c4[2];

String str;
String str1;
String str2;
String str3;

String atr;
String atr1;
String atr2;
String atr3;

//char Encoder[7] = {'S', '0', '0', '0', '0', 'F'};

void numberGenVel(int motvel[4]){
  for(int i = 0; i < 4; i++){
    motvel[i] = random(0, 256);
    
  }
  
}

void numberGenRot(int rot[4]){
  for(int i = 0; i < 4; i++){
    rot[i] = random(0, 2);
    
  }
  
}


void setup() {
  Serial.begin(9600);

}

void loop() {
  numberGenRot(MotorRot);
  numberGenVel(MotorVel);
  
  int a = MotorVel[0];
  int a1 = MotorVel[1];
  int a2 = MotorVel[2];
  int a3 = MotorVel[3];

  

  //Serial.println(MotorVel[2]);
  str = String(MotorVel[0]);
  str1 = String(MotorVel[1]);
  str2 = String(MotorVel[2]);
  str3 = String(MotorVel[3]);

  atr = String(MotorRot[0]);
  atr1 = String(MotorRot[1]);
  atr2 = String(MotorRot[2]);
  atr3 = String(MotorRot[3]);
  
  str.toCharArray(b, 4);
  str1.toCharArray(b1, 4); 
  str2.toCharArray(b2, 4); 
  str3.toCharArray(b3, 4);

  atr.toCharArray(c1, 2);
  atr1.toCharArray(c2, 2);
  atr2.toCharArray(c3, 2);
  atr3.toCharArray(c4, 2);

  Encoder[1] = c1[0];
  Encoder[5] = c2[0];
  Encoder[9] = c3[0];
  Encoder[13] = c4[0];
    
  

if (a < 100 && a>= 10)
  {
       
  
     Encoder[2] = '0';
     Encoder[3] = b[0];
     Encoder[4] = b[1];

  } 
  if (a < 10)
  {      
  
      Encoder[2] = '0';
      Encoder[3] = '0';
      Encoder[4] = b[0];
  
  }
  if(a >= 100 && a <= 255){
       
       
       Encoder[2] = b[0];
       Encoder[3] = b[1];
       Encoder[4] = b[2];

  }

  delay(10);

  if (a1 < 100 && a1 >= 10)
  {
       
  
     Encoder[6] = '0';
     Encoder[7] = b1[0];
     Encoder[8] = b1[1];

  } 
  if (a1 < 10)
  {      
  
      Encoder[6] = '0';
      Encoder[7] = '0';
      Encoder[8] = b1[0];
  
  }
  if(a1 >= 100 && a1 <= 255){
       
       
       Encoder[6] = b1[0];
       Encoder[7] = b1[1];
       Encoder[8] = b1[2];

  }
  
  delay(10);

  if (a2 < 100 && a2 >= 10)
  {
       
  
     Encoder[10] = '0';
     Encoder[11] = b2[0];
     Encoder[12] = b2[1];

  } 
  if (a2 < 10)
  {      
  
      Encoder[10] = '0';
      Encoder[11] = '0';
      Encoder[12] = b2[0];
  
  }
  if(a2 >= 100 && a2 <= 255){
       
       
       Encoder[10] = b2[0];
       Encoder[11] = b2[1];
       Encoder[12] = b2[2];

  }

  delay(10);

  if (a3 < 100 && a3 >= 10)
  {
       
  
     Encoder[14] = '0';
     Encoder[15] = b3[0];
     Encoder[16] = b3[1];

  } 
  if (a3 < 10)
  {      
  
      Encoder[14] = '0';
      Encoder[15] = '0';
      Encoder[16] = b3[0];
  
  }
  if(a3 >= 100 && a3 <= 255){
       
       
       Encoder[14] = b3[0];
       Encoder[15] = b3[1];
       Encoder[16] = b3[2];

  }
  
  
  
  delay(10);
  
  
  
  switch (sizeof(Encoder))
  {
  case 19:
    Serial.println(Encoder);
    break;
  
  default:
    break;
  } 
  delay(1000);

  
    
    
    
    
    
    
    
    
    /* for (int i = 0; i < 10; i++)
    {
        Serial.print(Encoder[i]);
       
    }
    
       Serial.println();
       delay(1000);
  
  */
 

}