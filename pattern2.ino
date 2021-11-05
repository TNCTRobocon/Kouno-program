int pattern2(void) {

  for (j = 0; j < 6; j++) {
    digitalWrite(cathode[j], HIGH);
  }

  for (e = 0; e < 10; e++) {
    for (i = 0; i < 3; i++) {
      g = i + 3;
      h = i - 1;
      e = g - 1;

      if (h = -1) {
        h = 2;
      }

      if (e = 2) {
        e = 5;
      }


      digitalWrite(anode[i], LOW);
      digitalWrite(anode[g], LOW);
      digitalWrite(anode[h], HIGH);
      digitalWrite(anode[e], HIGH);

      delay(100);

    }
  }

}
