//From Arduino to Processing to Txt or cvs etc.
//import
import processing.serial.*;
import java.util.Date;
//declare
PrintWriter output;
Serial udSerial;

int y = 0;
int x = 0;
int etat = 0;
float temps = 0;
int date = 1;

void setup() {
  size(2030,1035);
  udSerial = new Serial(this, Serial.list()[0], 9600); //Initialisation de la carte Arduino
  output = createWriter ("Battements.csv"); //Création du fichier .csv
  frameRate(24);
}



void draw() {

   if (frameCount % 24 == 0) {
     if(date == 1){
       output.println(new Date()); 
       date = 0;
     } else {
       
     temps = temps + 1;
   if (udSerial.available() > 0) { //si la valeur récupérée par l'Arduino est supérieur à 0
  String SenVal = udSerial.readString();//On créé une valeur string qu'on assigne à la valeur récupérée par l'Arduino
  
   if (SenVal != null) { //Si la valeur String n'est pas vide
   
   
    

    output.println(SenVal + ";" +temps);//On sauvegarde cette valeur dans le fichier Battements.csv
   
   
  /* Ceci est mon code pour afficher les valeurs en temps réel sur la fenêtre */

fill(0);
    text("" + SenVal, x, y = y + 20);
  if(y>980){
    if(x == 1980){
      noLoop();
        output.flush();
        output.close();
      }
      y=0;
      x= x+45;
    }
    
   }
  }
 
   }
   }
}

void keyPressed(){ // Si on appuie sur une touche, le fichier se ferme et le programme s'arrête
  if(key == ENTER){
    output.flush();
    output.close();
    exit();
  }
  if(key == TAB){
    if(etat == 1){
       loop();
       etat = 0;
    } else {
      noLoop();
      etat = 1;
    }
  }
}

void serialEvent(Serial myPort) {
  
  String inString = myPort.readStringUntil('\n');
 
  if (inString != null) {
    // trim off any whitespace:
    inString = trim(inString);
    // split the string on the commas and convert the
    // resulting substrings into an integer array:
    int[] sensors = int(split(inString, ","));
    // if the array has at least two elements, you know
    // you got the whole thing.  Put the numbers in the
    // sensor variables:
    if (sensors.length >=2) {
    }
  }
}