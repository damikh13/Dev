#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

bool my_cmp(int a, int b) {
    return a > b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ifstream F;
    string path = "C:\\Users\\damikh13\\Desktop\\26data\\26-57.txt";
    F.open(path);

    int n, sz; F >> n >> sz;
    int su = 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        F >> a[i];
        su += a[i];
    }
    set<int> taken;
    
    int curr_len = a[0];
    taken.insert(0);
    int welds = 1;
    int prelast_taken = 0;
    // for (int i = 1; i < a.size(); ++i) {
    int i = 1;
    while (su >= sz) {
        // если элемент не зачёркнут
        if (taken.find(i) == taken.end()) {
            curr_len += a[i]; // добавляем его в цепь
            taken.insert(i); // и вычёркиваем из основного списка

            // если с добавленным элементом всё ещё не хватает
            if (curr_len < sz) {
                ++welds; // оставляем доп. сварку: [] + [] +
            }

            if (curr_len >= sz) { // если получился нужный кусок
                // пытаемся заменить

                // выкидываем последний взятый
                taken.erase(i);
                curr_len -= a[i];

                // пытаемся взять меньший с конца
                for (int j = n - 1; j >= 0; --j) {
                    // если можем взять
                    if (curr_len + a[j] >= sz) {
                        // добавляем во "взятые"
                        taken.insert(j);
                        curr_len += a[j];

                        // закидываем остаток обратно в массив,
                        // если он остался
                        int ost = curr_len - sz;
                        if (ost > 0) {
                            a.push_back(curr_len - sz);
                            sort(a.begin(), a.end(), my_cmp);
                        }

                        // убираем текущий сплавленный кабель (без остатка) из суммы
                        su -= sz;

                        // начинаем новый кусок
                        curr_len = 0;

                        // ставим указатель на предпоследний взятый + 1
                        i = prelast_taken;

                        break;
                    }
                }
            }
            // если новый кусок не получился
            else {
                // тогда перед нами предпоследний взятый
                prelast_taken = i;
            }
        }
        ++i;
    }

    cout << welds << ' ' << a.size() - taken.size() << '\n';
}