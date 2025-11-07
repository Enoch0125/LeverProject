#ifndef LEVER_MODEL_H
#define LEVER_MODEL_H

#include <vector>
#include <string>

const double ROTATION_COEFFICIENT = 0.3; // distance per rotation, adjust as needed

void train();
void saveModel();
bool loadModel();
double predict(double rotations);

#endif