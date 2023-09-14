#include <unity.h>
#include "test.h"

void setUp(void) {
  // set stuff up here
}

void tearDown(void) {
  // clean stuff up here
}

int runUnityTests(void) {
  UNITY_BEGIN();
  RUN_TEST(test_construct_basic_state);
  RUN_TEST(test_destroy_basic_state);
  return UNITY_END();
}

int main(void) {
  return runUnityTests();
}

// For Arduino framework
void setup() {
  // Wait ~2 seconds before the Unity test runner
  // establishes connection with a board Serial interface
  runUnityTests();
}

// For Arduino framework
void loop() {}

// For ESP-IDF framework
void app_main() {
  runUnityTests();
}