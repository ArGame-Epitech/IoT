#include <unity.h>
#include <App.h>

void setUp(void) {
  // set stuff up here
}

void tearDown(void) {
  // clean stuff up here
}

void test_function_should_doBlahAndBlah(void) {
  App *app = new App();
  app->setup();
}

void test_function_should_doAlsoDoBlah(void) {
  // more test stuff
}

int runUnityTests(void) {
  UNITY_BEGIN();
  RUN_TEST(test_function_should_doBlahAndBlah);
  RUN_TEST(test_function_should_doAlsoDoBlah);
  return UNITY_END();
}

int main(void) {
  return runUnityTests();
}


void setup() {
  // Wait ~2 seconds before the Unity test runner
  // establishes connection with a board Serial interface
  runUnityTests();
}
void loop() {}

/**
  * For ESP-IDF framework
  */
void app_main() {
  runUnityTests();
}