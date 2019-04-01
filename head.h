
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 #define AnzahlFahrzeuge 4

 //struktur fuer die Fahrzeugdaten
   typedef struct {
    char * hersteller;
    char * modell;
    char * seriennummer;
    int leerGewicht;
    int leistung;
    int anzReifen;
   }fahrzeug;
