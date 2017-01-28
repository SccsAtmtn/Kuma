#include "perceptron.h"
using namespace std;

Perceptron::Perceptron(const vector<vector<double>> &trainData):data(trainData) {
    dataNumber = data.size();
    if (dataNumber==0) {
        // todo: throw the exception "No data!"
    }

    dimension = data[0].size();
    if (dimension==0) {
        // todo: throw the exception "Data is nil!"
    }

    for (int i=1; i<dataNumber; ++i)
        if (data[i].size()!=dimension) {
            // todo: throw the exception "Data's dimensions are not equal!"
        }
}

void Perceptron::TrainModel() {

}

int Perceptron::JudgeData(const vector<double> &single) {

}
