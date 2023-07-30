// Arduino SineBench - easiest MCU benchmark ever imaginable.
// Just calculates a lot of random angle sines.
// That's all.
// Compatible with any existing MCU you can use in ArduinoIDE

#define SIN_ITER 25000
#define BENCH_ITER 30

unsigned long benchStart;
unsigned long start;
unsigned long finish;
short counter = 0;
void bench();

void setup() {
  //pinMode(13, OUTPUT);
  Serial.begin(115200);

  Serial.print("Benchmark starting for ");
  Serial.print(BENCH_ITER);
  Serial.println(" times.");
  delay(2000);
  start = micros();

  while (counter < BENCH_ITER) {
    Serial.print("Iteration ");
    Serial.println(counter + 1);
    counter++;
    benchStart = micros();
    bench();
    Serial.print(micros() - benchStart);
    Serial.print(" microseconds /");
    Serial.print((micros() - benchStart) / 1000);
    Serial.print(" milliseconds /");
    Serial.print((micros() - benchStart) / 1000000);
    Serial.println(" seconds");
  }
  finish = micros() - start;
  Serial.print("Bench stopped after ");
  Serial.print(finish);
  Serial.print(" microseconds /");
  Serial.print(finish / 1000);
  Serial.print(" milliseconds /");
  Serial.print(finish / 1000000);
  Serial.println(" seconds.");
}

void bench() {
  int i = 0;                        // what the actual hell
  while (i <= SIN_ITER) {           //it just wont work properly with for() cycle!
    sin(random(0, 359));            //so yeah. thats bullshit.
    i++;
  }
}

  void loop() {
  }
