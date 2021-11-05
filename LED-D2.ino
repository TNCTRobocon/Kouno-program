int i;
int j;
int h;
int g;
int e;
int d;

int anode[6] {19, 5, 6, 7, 10, 11}; //アノード側ピン設定
int cathode[6] {18, 3, 4, 9, 8, 10}; //カソード側ピン設定


void setup() {

  for (i = 0; 1 < 20; i++) {
    digitalWrite(i, OUTPUT);
  }
}

int pattern0(void);
int pattern1(void);

void loop() {
  int p;
  p = random(0, 2);
  switch (p) {
    case 0:
      pattern0();
      break;

    case 1:
      pattern1();
      break;

  }
}
