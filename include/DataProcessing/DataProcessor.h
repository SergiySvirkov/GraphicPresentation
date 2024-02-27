// DataProcessing/DataProcessor.h

#pragma once

#include <vector>

class DataProcessor {
public:
    DataProcessor();
    ~DataProcessor();

    // Process data and return the result
    std::vector<double> process(const std::vector<double>& inputData);

private:
    // Add private members or helper methods as needed
};


