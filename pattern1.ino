int pattern1(void) {
  for (i = 0; i < 20; i++) {
    for (j = 0; j < 3; j++) {
      digitalWrite(anode[j * 2 - 1], LOW);
      digitalWrite(cathode[j * 2 - 1], HIGH);
      digitalWrite(anode[j * 2], HIGH);
      digitalWrite(cathode[j * 2], LOW);
    }

    delay(100);

    for (j = 0; j < 3; j++) {
      digitalWrite(anode[j * 2 - 1], HIGH);
      digitalWrite(cathode[j * 2 - 1], LOW);
      digitalWrite(anode[j * 2], LOW);
      digitalWrite(cathode[j * 2], HIGH);
    }

    delay(100);
    
  }
}
