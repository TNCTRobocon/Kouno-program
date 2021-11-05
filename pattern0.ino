int pattern0(void) {
  
  for (i = 0; i < 10; i++) {

    for (j = 0; j < 6; j++) {
      digitalWrite(anode[i], LOW);
      digitalWrite(cathode[i], HIGH);
    }

    delay(100);

    for (j = 0; j < 6; j++) {
      digitalWrite(anode[i], HIGH);
      digitalWrite(cathode[i], LOW);
    }

    delay(100);

  }

  return 0;
  
}
