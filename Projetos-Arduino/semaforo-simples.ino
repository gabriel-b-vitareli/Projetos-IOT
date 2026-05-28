// CONFIGURANDO OS PINOS:

void setup() {
  // VERMELHO:
  pinMode(7, OUTPUT);
  
  // AMARELO:
  pinMode(4, OUTPUT);
  
  // VERDE:
  pinMode(2, OUTPUT);
  
  Serial.begin(9600);
}

// DEFININDO A FUNÇÃO "PISCAR":

void semaforo() { 
  
  Serial.println("SEMÁFORO VERDE");
  digitalWrite(4, LOW); // AMARELO DESLIGADO
  digitalWrite(7, LOW); // VERMELHO DESLIGADO
  digitalWrite(2, HIGH); // VERDE LIGADO
  delay(2000);
  
  Serial.println("SEMÁFORO AMARELO");
  digitalWrite(4, HIGH); // AMARELO LIGADO
  digitalWrite(7, LOW); // VERMELHO DESLIGADO
  digitalWrite(2, LOW); // VERDE DESLIGADO
  delay(1000);
  
  Serial.println("SEMÁFORO VERMELHO");
  digitalWrite(4, LOW); // AMARELO DESLIGADO
  digitalWrite(7, HIGH); // VERMELHO LIGADO
  digitalWrite(2, LOW); // VERDE DESLIGADO
  delay(2000);
}

// REPETINDO EM LOOP: 

void loop() {
  semaforo();
}
