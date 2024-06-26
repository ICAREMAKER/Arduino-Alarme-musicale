# Arduino-Alarme-musicale ![arduinoThumb](https://github.com/ICAREMAKER/Arduino-Alarme-musicale/assets/107696317/45832b4d-c90f-4455-ad96-710079e34900) ![C++-Logo wine](https://github.com/ICAREMAKER/Arduino-Alarme-musicale/assets/107696317/98d2bd4e-3c29-4749-9578-050955936e71)

## Preview
![buzzer-wire](https://github.com/ICAREMAKER/Arduino-Alarme-musicale/assets/107696317/75eb0d8d-3699-4509-ac09-5254a28b1817)

## Code
```C

// Définition des fréquences des notes de musiques de la 4ème octave
#define DO 523
#define RE 587
#define MI 659
#define FA 698
#define SOL 784
#define LA 880
#define SI 988

// Définition de la durée d'un temps en millisecondes 
#define DUREE_TEMPS 300


// Fonction de démarrage, s'exécute une seule fois:
void setup()
{
	pinMode(A0, INPUT); // Entrée analogique du capteur gauche sur A0
  Serial.begin(9600);
}

// Fonction principale du programme, s'exécute en boucle:
void loop()
{
  
	int CAPTEUR_IR = digitalRead(A0);
	
	Serial.println(CAPTEUR_IR); // Verification du signal IR
	
	if(CAPTEUR_IR==0) {

    // Jeu des 11 premières notes de "Au clair de la lune"
    JouerNote(DO, 1);
    JouerNote(DO, 1);
    JouerNote(DO, 1);
    JouerNote(RE, 1);
    JouerNote(MI, 2);
    JouerNote(RE, 2);
    JouerNote(DO, 1);
    JouerNote(MI, 1);
    JouerNote(RE, 1);
    JouerNote(RE, 1);
    JouerNote(DO, 4);
}

}
/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////
void JouerNote(unsigned int Note_P, unsigned int NombreTemps_P)
{
    // Lance l'émission de la note
	// Tone (n°pin,frequence,durée)
    tone(8, Note_P, NombreTemps_P * DUREE_TEMPS);
    // Attend que la note soit terminée de jouée
    delay(NombreTemps_P * DUREE_TEMPS);
}
/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////


```
## Note
![TableP118](https://github.com/ICAREMAKER/Arduino-Alarme-musicale/assets/107696317/1a996ce9-6f43-4575-b278-df51c16ecb61)

