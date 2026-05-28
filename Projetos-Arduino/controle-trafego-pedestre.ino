// CONFIGURANDO OS PINOS:
void setup() {
  // SEMÁFORO 1:
  pinMode(7, OUTPUT); // Vermelho 1
  pinMode(4, OUTPUT); // Amarelo 1
  pinMode(2, OUTPUT); // Verde 1

  // SEMÁFORO 2:
  pinMode(13, OUTPUT); // Vermelho 2
  pinMode(12, OUTPUT); // Amarelo 2
  pinMode(8, OUTPUT);  // Verde 2

  // SEMÁFORO DE PEDESTRES 1:
  pinMode(5, OUTPUT); // Verde Pedestre 1
  pinMode(6, OUTPUT); // Vermelho Pedestre 1

  // SEMÁFORO DE PEDESTRES 2:
  pinMode(10, OUTPUT); // Verde Pedestre 2
  pinMode(11, OUTPUT); // Vermelho Pedestre 2
  
  Serial.begin(9600);
}

// DEFININDO A FUNÇÃO DO CICLO:
void semaforo() {
  
  // CONDIÇÃO 1: SEMÁFORO 1 VERDE / SEMÁFORO 2 VERMELHO / PEDESTRE 1 VERMELHO / PEDESTRE 2 VERDE
  Serial.println("S1 Verde, S2 Vermelho | Pedestre 1 Vermelho, Pedestre 2 Verde");
  // Carros 1 e 2
  digitalWrite(2, HIGH); digitalWrite(4, LOW);  digitalWrite(7, LOW);
  digitalWrite(8, LOW);  digitalWrite(12, LOW); digitalWrite(13, HIGH);
  // Pedestres 1 e 2
  digitalWrite(5, LOW);  digitalWrite(6, HIGH); // Pedestre 1: Vermelho
  digitalWrite(10, HIGH); digitalWrite(11, LOW); // Pedestre 2: Verde
  delay(4000);

  // CONDIÇÃO 2: SEMÁFORO 1 AMARELO / SEMÁFORO 2 VERMELHO / PEDESTRE 1 VERMELHO / PEDESTRE 2 VERMELHO (Segurança)
  Serial.println("S1 Amarelo, S2 Vermelho | Pedestres Vermelhos");
  // Carros 1 e 2
  digitalWrite(2, LOW);  digitalWrite(4, HIGH); digitalWrite(7, LOW);
  digitalWrite(8, LOW);  digitalWrite(12, LOW); digitalWrite(13, HIGH);
  // Pedestres 1 e 2
  digitalWrite(5, LOW);  digitalWrite(6, HIGH); // Pedestre 1: Vermelho
  digitalWrite(10, LOW); digitalWrite(11, HIGH); // Pedestre 2: Vermelho (fecha antes do S2 abrir)
  delay(2000);

  // CONDIÇÃO 3: SEMÁFORO 1 VERMELHO / SEMÁFORO 2 VERDE / PEDESTRE 1 VERDE / PEDESTRE 2 VERMELHO
  Serial.println("S1 Vermelho, S2 Verde | Pedestre 1 Verde, Pedestre 2 Vermelho");
  // Carros 1 e 2
  digitalWrite(2, LOW);  digitalWrite(4, LOW);  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH); digitalWrite(12, LOW); digitalWrite(13, LOW);
  // Pedestres 1 e 2
  digitalWrite(5, HIGH); digitalWrite(6, LOW);  // Pedestre 1: Verde
  digitalWrite(10, LOW); digitalWrite(11, HIGH); // Pedestre 2: Vermelho
  delay(4000);

  // CONDIÇÃO 4: SEMÁFORO 1 VERMELHO / SEMÁFORO 2 AMARELO / PEDESTRE 1 VERMELHO / PEDESTRE 2 VERMELHO (Segurança)
  Serial.println("S1 Vermelho, S2 Amarelo | Pedestres Vermelhos");
  // Carros 1 e 2
  digitalWrite(2, LOW);  digitalWrite(4, LOW);  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);  digitalWrite(12, HIGH); digitalWrite(13, LOW);
  // Pedestres 1 e 2
  digitalWrite(5, LOW);  digitalWrite(6, HIGH); // Pedestre 1: Vermelho (fecha antes do S1 abrir)
  digitalWrite(10, LOW); digitalWrite(11, HIGH); // Pedestre 2: Vermelho
  delay(2000);
}

// REPETINDO EM LOOP:
void loop() {
  semaforo();
}
