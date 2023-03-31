void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  
}
void forward(int val0,int val1,int val2,int val3,int val4){
  digitalWrite(2,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW); 
  analogWrite(5,255);
  analogWrite(6,255); 
  Serial.println(val0);
  Serial.println(val1);
  Serial.println(val2);
  Serial.println(val3);
  Serial.println(val4);
  Serial.println();
  Serial.println();  
  
}
void stop(){
  digitalWrite(2,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW); 
  analogWrite(5,0);
  analogWrite(6,0);
 
}
void loop() {
  // put your main code here, to run repeatedly:
  //white=1; black=0;
  int val0=analogRead(0);
  int val1=analogRead(1);
  int val2=analogRead(2);
  int val3=analogRead(3);
  int val4=analogRead(4);
  int s0,s1,s2,s3,s4;
  if(val0<550){s0=1;}
  if(val0>550){s0=0;}
  if(val1<550){s1=1;}
  if(val1>550){s1=0;}
  if(val2<550){s2=1;}
  if(val2>550){s2=0;}
  if(val3<550){s3=1;}
  if(val3>550){s3=0;}
  if(val4<550){s4=1;}
  if(val4>550){s4=0;}
  //if((s0==1) && (s1==1) && (s2==0) && (s3==1) && (s4==1)){
    //black line follower bot
    //FORWARD
    if((s0==1) && (s1==1) && (s2==0) && (s3==1) && (s4==1)){

    digitalWrite(2,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW); 
    analogWrite(5,150);
    analogWrite(6,150); 

    }
    //RIGHT(ONLY S3 ON BLACK) 
    if((s0==1) && (s1==1) && (s2==1) && (s3==0) && (s4==1)){

    digitalWrite(2,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW); 
    analogWrite(5,200);
    analogWrite(6,50); 

    }
    //RIGHT(ONLY S4 ON BLACK)
    if((s0==1) && (s1==1) && (s2==1) && (s3==1) && (s4==0)){

    digitalWrite(2,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW); 
    analogWrite(5,200);
    analogWrite(6,50); 
    
    }
    //RIGHT(BOTH S3 AND S4 ON BLACK)
    if((s0==1) && (s1==1) && (s2==1) && (s3==0) && (s4==0)){

    digitalWrite(2,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW); 
    analogWrite(5,200);
    analogWrite(6,50); 

    }
    //RIGHT(S2,S3,S4 ON BLACK)
    if((s0==1) && (s1==1) && (s2==0) && (s3==0) && (s4==0)){

    digitalWrite(2,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH); 
    analogWrite(5,200);
    analogWrite(6,200); 

    }
    //LEFT(ONLY S1 ON BLACK)
    if((s0==1) && (s1==0) && (s2==1) && (s3==1) && (s4==1)){

    digitalWrite(2,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW); 
    analogWrite(5,50);
    analogWrite(6,200); 

    }
    //LEFT(ONLY S0 ON BLACK)
    if((s0==0) && (s1==1) && (s2==1) && (s3==1) && (s4==1)){

    digitalWrite(2,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW); 
    analogWrite(5,50);
    analogWrite(6,200); 

    }
    //LEFT(BOTH S0 AND S1 ON BLACK)
    if((s0==0) && (s1==0) && (s2==1) && (s3==1) && (s4==1)){

    digitalWrite(2,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW); 
    analogWrite(5,50);
    analogWrite(6,200); 

    }
    //LEFT(S0,S1,S2 ON BLACK)
    if((s0==0) && (s1==0) && (s2==0) && (s3==1) && (s4==1)){

    digitalWrite(2,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW); 
    analogWrite(5,200);
    analogWrite(6,200); 

    }
    //BRAKE
    if((s0==0) && (s1==0) && (s2==0) && (s3==0) && (s4==0)){

    digitalWrite(2,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW); 
    analogWrite(5,0);
    analogWrite(6,0); 

    }
  //}
  /*else if((s0==0) && (s1==0) && (s2==1) && (s3==0) && (s4==0)){
    //white line follower bot
    //FORWARD
    if((s0==0) && (s1==0) && (s2==1) && (s3==0) && (s4==0)){

    digitalWrite(2,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW); 
    analogWrite(5,150);
    analogWrite(6,150); 

    }
    //RIGHT(ONLY S3 ON WHITE) 
    if((s0==0) && (s1==0) && (s2==0) && (s3==1) && (s4==0)){

    digitalWrite(2,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW); 
    analogWrite(5,200);
    analogWrite(6,50); 

    }
    //RIGHT(ONLY S4 ON WHITE)
    if((s0==0) && (s1==0) && (s2==0) && (s3==0) && (s4==1)){

    digitalWrite(2,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW); 
    analogWrite(5,200);
    analogWrite(6,50); 
    
    }
    //RIGHT(BOTH S3 AND S4 ON WHITE)
    if((s0==0) && (s1==0) && (s2==0) && (s3==1) && (s4==1)){

    digitalWrite(2,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW); 
    analogWrite(5,200);
    analogWrite(6,50); 

    }
    //RIGHT(S2,S3,S4 ON WHITE)
    if((s0==0) && (s1==0) && (s2==1) && (s3==1) && (s4==1)){

    digitalWrite(2,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH); 
    analogWrite(5,200);
    analogWrite(6,200); 

    }
    //LEFT(ONLY S1 ON WHITE)
    if((s0==0) && (s1==1) && (s2==0) && (s3==0) && (s4==0)){

    digitalWrite(2,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW); 
    analogWrite(5,50);
    analogWrite(6,200); 

    }
    //LEFT(ONLY S0 ON WHITE)
    if((s0==1) && (s1==0) && (s2==0) && (s3==0) && (s4==0)){

    digitalWrite(2,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW); 
    analogWrite(5,50);
    analogWrite(6,200); 

    }
    //LEFT(BOTH S0 AND S1 ON WHITE)
    if((s0==1) && (s1==1) && (s2==0) && (s3==0) && (s4==0)){

    digitalWrite(2,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW); 
    analogWrite(5,50);
    analogWrite(6,200); 

    }
    //LEFT(S0,S1,S2 ON WHITE)
    if((s0==1) && (s1==1) && (s2==1) && (s3==0) && (s4==0)){

    digitalWrite(2,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW); 
    analogWrite(5,200);
    analogWrite(6,200); 

    }
    //BRAKE
    if((s0==1) && (s1==1) && (s2==1) && (s3==1) && (s4==1)){

    digitalWrite(2,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW); 
    analogWrite(5,0);
    analogWrite(6,0); 

    }
  }*/
  else{

    digitalWrite(2,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW); 
    analogWrite(5,0);
    analogWrite(6,0); 

  }
  
  
 
  Serial.println(val0);
  Serial.println(val1);
  Serial.println(val2);
  Serial.println(val3);
  Serial.println(val4);
  Serial.println();
  Serial.println();
  Serial.println(s0);
  Serial.println(s1);
  Serial.println(s2);
  Serial.println(s3);
  Serial.println(s4);
  Serial.println();
  Serial.println();  
  
  
   
    
}
