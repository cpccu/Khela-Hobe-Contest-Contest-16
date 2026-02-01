#include <iostream>
#include <iomanip>

int main()
{
    int T;
    std::cin >> T;

    double arr[T];

    for (int t = 1; t <= T; ++t)
    {
        int N;
        std::cin >> N;

        double sum = 0.0;

        for (int i = 0; i < N; ++i)
        {
            double p;
            std::cin >> p;
            sum += p;
        }

        double GPA = sum / N;

        arr[t] = GPA;
    }

    for (int t = 1; t <= T; ++t)
    {
        std::cout << "Case " << t << ": " << std::fixed << std::setprecision(3) << arr[t] << std::endl;
    }

    return 0;
}
