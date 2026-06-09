//Declarando os pinos
const int trig = 9; //Constante do tipo primitivo int, recebe o nome trig 
const int echo = 10;

//void que inicializa os pinos e demais componentes
void setup () {
  pinMode (trig, OUTPUT); //envia o sinal
  pinMode (echo, INPUT); //recebe o sinal
  Serial.begin(9600); //inicializa o monitor serial
}

//Void repete infinitamente
void loop () {
  digitalWrite(trig,LOW) ; //low: pino desligado
  delayMicroseconds(10);
               
  digitalWrite(trig,HIGH); //nesse momento o sensor emite o sinal
  delayMicroseconds(10); //Passam-se 10 microsegundos
  digitalWrite(trig,LOW); //Sensor para de enviar o sinal
  
  int tempo = pulseIn(echo,HIGH); //Descobre a variação de tempo (delta t)
  long distancia = (0.0343 * tempo) /2;
  Serial.println(distancia);
  
  delay(500);
}
