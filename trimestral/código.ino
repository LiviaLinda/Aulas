
// C++ code
//

//int verdee = 3;
//int verded = 6;
//int amarelod = 5;
//int amareloe = 2;
//int vermelhoe = 1;
//int vermelhod = 4;

void setup()
{
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
pinMode(4, OUTPUT);
pinMode(3, OUTPUT);
pinMode(2, OUTPUT);
pinMode(1, OUTPUT);
}

void loop()

{
digitalWrite(1, HIGH);//vermelhinho do laDO ESQUERDO on
digitalwrite(6, HIGH); //verdinha do laDO direito on
delay(10000) ;
digitalWrite(6, LOW); //verdinha do laDO direito off
delay(1000) ;
digitalWrite(5, HIGH); //amarelhinho do laDO direito on
delay(3000) ;
digitalwrite(5, LOW); //amarelhinho do laDO direito off
delay(1000) ;
digitalWrite(1, LOW);//vermelhinho do laDO ESQUERDO Off

digitalWrite(3, HIGH); //verdinha do laDO ESQUERDO oN
digitalWrite(4, HIGH);//vermelhinho do laDO direito on
delay(10000) ;
digitalWrite(3, LOW);//verdinha do laDO ESQUERDO Off
delay(1000) ;
digitalWrite(2, HIGH); //amarelhinho do laDO ESQUERDO on
delay(3000) ;
digitalWrite(2, LOW) ;//amarelhinho do laDO ESQUERDO off
delay(1000) ;
digitalWrite(4, LOW);//vermelhinho do laDO direito off
}
