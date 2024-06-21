/* 
   /////////////////////////////////////////////////////////////////////////////////////////////////////
   /////////////////////////////////////////////////////////////////////////////////////////////////////
   /        __________   _________   ___________   __________    _________                             /
   /       /___   ___/  /   _____/  /  _____   /  /  _____   \  /  ______/       \\            //      /
   /          /  /     /  /        /  /    /  /  /  /    /  /  /  /_____        \\             //      /
   /         /  /     /  /        /  /____/  /  /  /___/  /   /  ______/   \\\   \\    []    //   ///  /
   /     ___/  /__   /  /_____   /   ____   /  /   ___   \   /  /_____        \\\\--]]]/\[[[--////     /
   /    /________/  /________/  /__/    /__/  /__/    \__/  /________/         /////--][][--\\\\\      /
   /                                                                         //   //--][][--\\   \\    /
   /   ______________________________________________________________           //    ][][    \\       /
   /                                                                                                   /
   /                                                                                                   /
   /  This program is free software for arduino; you can redistribute it and/or modify.                /
   /  Ce programme pour Arduino est libre et gratuit ; vous pouvez le distribuez et/ou le modifier.    /
   /                                                                                                   /
   / Another codes / Autres codes:                                                                     /
   / https://www.icaremaker.com                                                                        /
   / Mail: ionocraft@hotmail.fr                                                                        /
   /////////////////////////////////////////////////////////////////////////////////////////////////////
   /////////////////////////////////////////////////////////////////////////////////////////////////////
*/


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
