int Liquid_level=0;
void setup ( )
pinMode (5, INPUT);
pinMode (6, OUTPUT) ;
void loop () {
Liquid level=digitalRead (5) ;
if (Liquid_level == 1) {
digitalWrite (6, HIGH) ;
if (Liquid_level == 0) {
digitalWrite (6, LOW) ;
delay (100) ;

