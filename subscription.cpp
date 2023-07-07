#include <iostream>
#include <vector>
#include <string>

// Structure to hold newspaper subscription details
struct Newspaper {
    std::string name;
    std::vector<double> prices;
};

// Function to calculate possible combinations within the budget
void calculateCombinations(double budget, const std::vector<Newspaper>& newspapers, std::vector<std::vector<std::string>>& combinations) {
    std::vector<int> indices(newspapers.size(), 0);
    int totalNewspapers = newspapers.size();

    while (true) {
        double totalCost = 0;
        std::vector<std::string> currentCombination;

        // Calculate the cost for the current combination
        for (int i = 0; i < totalNewspapers; i++) {
            totalCost += newspapers[i].prices[indices[i]];
            currentCombination.push_back(newspapers[i].name);
        }

        // If the total cost is within the budget, add the combination to the output
        if (totalCost <= budget) {
            combinations.push_back(currentCombination);
        }

        // Move to the next combination
        int next = totalNewspapers - 1;
        while (next >= 0 && (indices[next] + 1 >= newspapers[next].prices.size())) {
            next--;
        }

        // If all indices have been exhausted, exit the loop
        if (next < 0) {
            break;
        }

        indices[next]++;
        for (int i = next + 1; i < totalNewspapers; i++) {
            indices[i] = 0;
        }
    }
}

int main() {
    // Define the newspaper subscription details
    std::vector<Newspaper> newspapers = {
        {"TOI", {3, 3, 3, 3, 3, 5, 6}},
        {"Hindu", {2.5, 2.5, 2.5, 2.5, 2.5, 4, 4}},
        {"ET", {4, 4, 4, 4, 4, 4, 10}},
        {"BM", {1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5}},
        {"HT", {2, 2, 2, 2, 2, 4, 4}}
    };

    double budget;
    std::cout << "Enter the weekly budget: ";
    std::cin >> budget;

    std::vector<std::vector<std::string>> combinations;
    calculateCombinations(budget, newspapers, combinations);

    // Display the output combinations
    std::cout << "Possible combinations within the budget:" << std::endl;
    for (const auto& combination : combinations) {
        for (int i = 0; i < combination.size(); i++) {
            std::cout << combination[i];
            if (i != combination.size() - 1) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
