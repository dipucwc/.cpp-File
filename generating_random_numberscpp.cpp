#include <random>

int main()
{
    std::mt19937 mersenne(std::random_device{}());

    std::uniform_int_distribution<std::mt19937::result_type>
        range(1, 20);

    std::normal_distribution<>
        mean_dev(10, 1.2);

    std::map<int, int32_t> combined_results;

    for (int i = 0; i < 100000; ++i)
    {
        combined_results[range(mersenne)]++;
        combined_results[mean_dev(mersenne)]--;
    }
