// Visualization/ChartRenderer.h

#pragma once

#include <vector>

class ChartRenderer {
public:
    ChartRenderer();
    ~ChartRenderer();

    // Render the chart based on input data
    void renderChart(const std::vector<double>& data);

private:
    // Add private members or helper methods as needed
};


