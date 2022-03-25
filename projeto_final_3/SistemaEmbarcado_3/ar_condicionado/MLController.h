
   
#ifndef MLController_H_
#define MLController_H_

#include <CircularBuffer.h>
#include <TensorFlowLite_ESP32.h>

#include "tensorflow/lite/experimental/micro/kernels/all_ops_resolver.h"
#include "tensorflow/lite/experimental/micro/micro_error_reporter.h"
#include "tensorflow/lite/experimental/micro/micro_interpreter.h"
#include "tensorflow/lite/schema/schema_generated.h"
#include "tensorflow/lite/version.h"

// Globals, used for compatibility with Arduino-style sketches.
namespace {
tflite::ErrorReporter* error_reporter = nullptr;
const tflite::Model* model = nullptr;
tflite::MicroInterpreter* interpreter = nullptr;
TfLiteTensor* input = nullptr;
 TfLiteTensor* output_type = nullptr;
 TfLiteTensor* output_precip = nullptr;
int inference_count = 0;

// Create an area of memory to use for input, output, and intermediate arrays.
// Finding the minimum value for your model may require some trial and error.
constexpr int kTensorArenaSize = 10 * 1024;
uint8_t tensor_arena[kTensorArenaSize];

int begin_index = 0;
unsigned long previousMillis = 0;
const long interval = 1000*60*60; //1 hour

int freeMemory() {
  char top;
  return &top - reinterpret_cast<char*>(sbrk(0));
}
  
}  // namespace

extern CircularBuffer<float, 72> stack;

#endif
