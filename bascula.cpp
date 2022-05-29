float t_act=0;
float t_ob=20;
float hyst=2;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
} 

void loop() {
  // put your main code here, to run repeatedly:
  t_act=analogRead(A0)/1023.0*45;
  Serial.print(t_ob-hyst);
  Serial.print(" ");
  Serial.print(t_ob+hyst);
  Serial.print(" ");
  Serial.print(t_act);
  Serial.print(" ");
  Serial.println(bascula(t_act,t_ob,hyst));
  
}

bool bascula(float t_actual,float t_objetivo,float hyst){
  if(t_actual<=t_objetivo-hyst){
    return true;
  }else if(t_actual>=t_objetivo+hyst){
    return false;
  }
}
