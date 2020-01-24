#include <stdio.h>
#include <stdlib.h>

#include <AQApplication.h>
#include "DevStudio.h"

extern "C" int main(int argc, char **argv)
{
   AQApplication app;

   DevStudio *devStudio = new DevStudio;
   devStudio->show();

   app.exec();

   delete devStudio;
}



