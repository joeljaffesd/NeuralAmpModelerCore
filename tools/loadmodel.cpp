#include <stdlib.h>
#include "NAM/dsp.h"
#include "example_models/MarshallModel.h"

int main()
{

  fprintf(stderr, "Loading model...\n");

  auto model = nam::get_dsp(MarshallModel);

  if (model != nullptr)
  {
    fprintf(stderr, "Model loaded successfully\n");
  }
  else
  {
    fprintf(stderr, "Failed to load model\n");

    exit(1);
  }

  exit(0);
}
