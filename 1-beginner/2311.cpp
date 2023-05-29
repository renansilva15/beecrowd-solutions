#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    char name[20]={""};
    float D;
    vector<float> score(7);

    cin >> N;

    for (int i=0; i < N; i++)
    {
        vector<float> score(7);
        cin >> name >> D;

        for (int j = 0; j < 7; j++)
        {
            cin >> score[j];
        }

        score.erase(min_element(score.begin(), score.end()));
        score.erase(max_element(score.begin(), score.end()));

        for (int j = 1; j < 5; j++)
        {
            score[0] += score[j];
        }

        printf("%s %.2f\n", name, score[0] * D);
    }

    return 0;
}