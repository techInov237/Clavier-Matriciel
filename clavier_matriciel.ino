
#define ligne_0 2
#define ligne_1 3
#define ligne_2 4
#define ligne_3 5

#define colonne_0 8
#define colonne_1 9
#define colonne_2 10
#define colonne_3 11

void setup() {
  // put your setup code here, to run once:

  // Initialise le port série
  Serial.begin(9600);

  // On configure les lignes en sorties
  pinMode(ligne_0, OUTPUT);
  pinMode(ligne_1, OUTPUT);
  pinMode(ligne_2, OUTPUT);
  pinMode(ligne_3, OUTPUT);

  // On configure les colonnes en entrées avec pull-up
  pinMode(colonne_0, INPUT_PULLUP);
  pinMode(colonne_1, INPUT_PULLUP);
  pinMode(colonne_2, INPUT_PULLUP);
  pinMode(colonne_3, INPUT_PULLUP);  

}

void loop() {
  // put your main code here, to run repeatedly:

  int etat_colonne_0 = HIGH;
  int etat_colonne_1 = HIGH;
  int etat_colonne_2 = HIGH;
  int etat_colonne_3 = HIGH;

  // On met la ligne 0 à 0V et les autres au 5V
  digitalWrite(ligne_0, LOW);
  digitalWrite(ligne_1, HIGH);
  digitalWrite(ligne_2, HIGH);
  digitalWrite(ligne_3, HIGH);

  // On recupère l'état des colonnes
  etat_colonne_0 = digitalRead(colonne_0);
  etat_colonne_1 = digitalRead(colonne_1);
  etat_colonne_2 = digitalRead(colonne_2);
  etat_colonne_3 = digitalRead(colonne_3);

  // Si on a la colonne 0 à LOW, c'est que le bouton 1 est pressé
  if(etat_colonne_0 == LOW) {
    envoie_bouton_presse_sur_port_serie('1');
  }

  // Si on a la colonne 1 à LOW, c'est que le bouton 2 est pressé
  if(etat_colonne_1 == LOW) {
    envoie_bouton_presse_sur_port_serie('2');    
  }

    // Si on a la colonne 2 à LOW, c'est que le bouton 3 est pressé
  if(etat_colonne_2 == LOW) {
    envoie_bouton_presse_sur_port_serie('3');    
  }

    // Si on a la colonne 3 à LOW, c'est que le bouton A est pressé
  if(etat_colonne_3 == LOW) {
    envoie_bouton_presse_sur_port_serie('A');    
  }

  // On met la ligne 1 à 0V et les autres au 5V
  digitalWrite(ligne_0, HIGH);
  digitalWrite(ligne_1, LOW);
  digitalWrite(ligne_2, HIGH);
  digitalWrite(ligne_3, HIGH);

  // On recupère l'état des colonnes
  etat_colonne_0 = digitalRead(colonne_0);
  etat_colonne_1 = digitalRead(colonne_1);
  etat_colonne_2 = digitalRead(colonne_2);
  etat_colonne_3 = digitalRead(colonne_3);

  // Si on a la colonne 0 à LOW, c'est que le bouton 4 est pressé
  if(etat_colonne_0 == LOW) {
    envoie_bouton_presse_sur_port_serie('4');
  }

  // Si on a la colonne 1 à LOW, c'est que le bouton 5 est pressé
  if(etat_colonne_1 == LOW) {
    envoie_bouton_presse_sur_port_serie('5');    
  }

    // Si on a la colonne 2 à LOW, c'est que le bouton 6 est pressé
  if(etat_colonne_2 == LOW) {
    envoie_bouton_presse_sur_port_serie('6');    
  }

    // Si on a la colonne 3 à LOW, c'est que le bouton B est pressé
  if(etat_colonne_3 == LOW) {
    envoie_bouton_presse_sur_port_serie('B');    
  }

  // On met la ligne 2 à 0V et les autres au 5V
  digitalWrite(ligne_0, HIGH);
  digitalWrite(ligne_1, HIGH);
  digitalWrite(ligne_2, LOW);
  digitalWrite(ligne_3, HIGH);

  // On recupère l'état des colonnes
  etat_colonne_0 = digitalRead(colonne_0);
  etat_colonne_1 = digitalRead(colonne_1);
  etat_colonne_2 = digitalRead(colonne_2);
  etat_colonne_3 = digitalRead(colonne_3);

  // Si on a la colonne 0 à LOW, c'est que le bouton 7 est pressé
  if(etat_colonne_0 == LOW) {
    envoie_bouton_presse_sur_port_serie('7');
  }

  // Si on a la colonne 1 à LOW, c'est que le bouton 8 est pressé
  if(etat_colonne_1 == LOW) {
    envoie_bouton_presse_sur_port_serie('8');    
  }

    // Si on a la colonne 2 à LOW, c'est que le bouton 9 est pressé
  if(etat_colonne_2 == LOW) {
    envoie_bouton_presse_sur_port_serie('9');    
  }

    // Si on a la colonne 3 à LOW, c'est que le bouton C est pressé
  if(etat_colonne_3 == LOW) {
    envoie_bouton_presse_sur_port_serie('C');    
  }  

  // On met la ligne 3 à 0V et les autres au 5V
  digitalWrite(ligne_0, HIGH);
  digitalWrite(ligne_1, HIGH);
  digitalWrite(ligne_2, HIGH);
  digitalWrite(ligne_3, LOW);

  // On recupère l'état des colonnes
  etat_colonne_0 = digitalRead(colonne_0);
  etat_colonne_1 = digitalRead(colonne_1);
  etat_colonne_2 = digitalRead(colonne_2);
  etat_colonne_3 = digitalRead(colonne_3);

  // Si on a la colonne 0 à LOW, c'est que le bouton * est pressé
  if(etat_colonne_0 == LOW) {
    envoie_bouton_presse_sur_port_serie('*');
  }

  // Si on a la colonne 1 à LOW, c'est que le bouton 0 est pressé
  if(etat_colonne_1 == LOW) {
    envoie_bouton_presse_sur_port_serie('0');    
  }

    // Si on a la colonne 2 à LOW, c'est que le bouton # est pressé
  if(etat_colonne_2 == LOW) {
    envoie_bouton_presse_sur_port_serie('#');    
  }

    // Si on a la colonne 3 à LOW, c'est que le bouton D est pressé
  if(etat_colonne_3 == LOW) {
    envoie_bouton_presse_sur_port_serie('D');    
  }   

}

void envoie_bouton_presse_sur_port_serie(char bouton_caractere) {
  Serial.print("Le bouton ");
  Serial.print(bouton_caractere);
  Serial.println(" est pressé");
  Serial.println("");
}
