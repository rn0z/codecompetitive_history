#include <bits/stdc++.h>

using namespace std;

typedef pair<double, char> ichar;

struct Food {
    ichar fat, protein, sugar, starch, alcohol;
    Food(ichar fat_, ichar protein_, ichar sugar_, ichar starch_, ichar alcohol_) {
        fat = fat_;
        protein = protein_;
        sugar = sugar_;
        starch = starch_;
        alcohol = alcohol_;
    }
    void print() {
        cout << fat.first << fat.second << endl;
        cout << protein.first << protein.second << endl;
        cout << sugar.first << sugar.second << endl;
        cout << starch.first << starch.second << endl;
        cout << alcohol.first << alcohol.second << endl;
        cout << endl;
    }
};

void run_case() {
    string str, raw;
    vector<Food> foods;
    double sum{};
    double fat_sum{};
    double deno{};
    while (getline(cin, str)) {
        vector<string> food_itm;
        int p_total{}, p_rest{}, totalC{};
        stringstream ss(str);
        if (str == "-") {
            for (auto& e:foods) {
                if (e.fat.second == 'g')
                    e.fat = {e.fat.first * 9, 'C'};

                if (e.protein.second == 'g')
                    e.protein = {e.protein.first* 4, 'C'};

                if (e.sugar.second == 'g')
                    e.sugar= {e.sugar.first * 4, 'C'};

                if (e.starch.second == 'g')
                    e.starch= {e.starch.first * 4, 'C'};

                if (e.alcohol.second == 'g')
                    e.alcohol= {e.alcohol.first * 7, 'C'};

                p_total = 0;
                p_rest = 0;
                totalC = 0;
                int p_each[5] = {};
                if (e.fat.second == 'C')
                    totalC += e.fat.first;

                if (e.protein.second == 'C')
                    totalC += e.protein.first;

                if (e.sugar.second == 'C')
                    totalC += e.sugar.first;
                    
                if (e.starch.second == 'C')
                    totalC += e.starch.first;

                if (e.alcohol.second == 'C')
                    totalC += e.alcohol.first;

                if (e.fat.second == '%') {
                    int fat = e.fat.first;
                    p_total += fat;
                    p_each[0] = fat;
                }
                if (e.protein.second == '%') {
                    int protein = e.protein.first;
                    p_total += protein;
                    p_each[1] = protein;
                }
                if (e.sugar.second == '%') {
                    int sugar = e.sugar.first;
                    p_total += sugar;
                    p_each[2] = sugar;
                }
                if (e.starch.second == '%') {
                    int s = e.starch.first;
                    p_total += s;
                    p_each[3] = s;
                }
                if (e.alcohol.second == '%') {
                    int al = e.alcohol.first;
                    p_total += al;
                    p_each[4] = al;
                }
                p_rest = 100 - p_total;
                double denominator = 100 * totalC / (double)p_rest;
                for (int i = 0; i < 5; ++i) {
                    if (p_each[i]) {
                        if (i == 0)
                            e.fat = {((double)p_each[i] /100 * denominator), 'C'};
                        if (i == 1)
                            e.protein = {((double)p_each[i] /100 * denominator), 'C'};
                        if (i == 2)
                            e.sugar = {((double)p_each[i] /100 * denominator), 'C'};
                        if (i == 3)
                            e.starch = {((double)p_each[i] /100 * denominator), 'C'};
                        if (i == 4)
                            e.alcohol = {((double)p_each[i] /100 * denominator), 'C'};
                    }
                }
                fat_sum += e.fat.first;
                deno += denominator;
            }

            if (fat_sum && deno)
                cout << round(fat_sum / deno * 100) << '%' << endl;

            foods.clear();
            sum = 0;
            fat_sum = 0;
            deno = 0;
            continue;
        }

        while (ss >> raw)
            food_itm.push_back(raw);

        string fat = food_itm[0],
            protein = food_itm[1],
            sugar = food_itm[2],
            starch = food_itm[3],
            alcohol = food_itm[4];

        char fatu = fat.back();
        fat.pop_back();
        char proteinu = protein.back();
        protein.pop_back();
        char sugaru = sugar.back();
        sugar.pop_back();
        char starchu = starch.back();
        starch.pop_back();
        char alcoholu = alcohol.back();
        alcohol.pop_back();

        foods.push_back(Food({stod(fat), fatu}, {stod(protein), proteinu}, {stod(sugar), sugaru}, {stod(starch), starchu}, {stod(alcohol), alcoholu}));
        // Food F{.fat = {stod(fat), fatu}, .protein = {stod(protein), proteinu}, .sugar = {stod(sugar), sugaru}, .starch = {stod(starch), starchu}, .alcohol = {stod(alcohol), alcoholu}};
        // foods.push_back(F);

    }

    return;
}

int main() {
    run_case();
    return 0;
}