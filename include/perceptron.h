#include <vector>

class Perceptron {
public:
    Perceptron(const std::vector<std::vector<double>> &trainData);
    void TrainModel();
    int JudgeData(const std::vector<double> &single);
private:
    int dimension;
    int dataNumber;
    std::vector<std::vector<double>> data;
    std::vector<double> weight;
};
