#include <iostream>
using namespace std;

class Recommender {
public:
    virtual double generateRecommendation(
        int userRating, int popularity) {
        return 0;
    }

    virtual ~Recommender() {}
};

class PersonalizedRecommender : public Recommender {
public:
    double generateRecommendation(
        int userRating, int popularity) override {
        return 0.7 * userRating + 0.3 * popularity;
    }
};

class TrendingRecommender : public Recommender {
public:
    double generateRecommendation(
        int userRating, int popularity) override {
        return 0.3 * userRating + 0.7 * popularity;
    }
};

int main() {
    int rating, popularity;

    cout << "Enter user rating (0-100): ";
    cin >> rating;

    cout << "Enter popularity (0-100): ";
    cin >> popularity;

    if (rating < 0 || rating > 100 ||
        popularity < 0 || popularity > 100) {
        cout << "Invalid input!" << endl;
        return 0;
    }

    PersonalizedRecommender personalized;
    TrendingRecommender trending;

    Recommender *ptr;

    ptr = &personalized;
    cout << "Personalized Score: "
         << ptr->generateRecommendation(rating, popularity)
         << endl;

    ptr = &trending;
    cout << "Trending Score: "
         << ptr->generateRecommendation(rating, popularity)
         << endl;

    return 0;
}