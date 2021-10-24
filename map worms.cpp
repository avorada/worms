//*
/*
#include <iostream>

using namespace std;

bool getBit(int a, int pos) {
  return (a >> pos) & 1;
}

int to2(int a) {
  int it2 = 0;
  int k = 0;
  while (a) {
    it2 += pow(10, k) * (a & 1);
    a = a >> 1;
    k += 1;
  }
  return it2;
}


void setBit(int &a, int pos, bool b) {
  if (b) {
    a |= (1 << pos);
  }
  else {
        a &= !(1 << pos);
  }
}

int field_line(int x, int y) {
  //cout << int(y <= pow(x, 2) / 25.0 + x * 17.0 / 16.0 - 14) << endl;
  return int(y >= x);
}

int main() {

  const int width = 160;
  const int height = 90;

  int b[height][width / 32];
  for (int i = 0; i < height; i++)
    for (int j = 0; j < width / 32; j++)
      for (int k = 0; k < 32; k++) {
        setBit(b[i][j], k, field_line(i, 32 * j + k));
      }
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width / 32; j++) {
      cout << b[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}
*/
#include <iostream>
#include <string>
#include <cmath>
#include<fstream>

using namespace std;
int cosarray(int x, float a, float b) {

    float y = a * cos(b * x) + 15;

    return y;
}
int main()
{

    ofstream fout;
    fout.open("cppstudio.txt");
    int y, k;
    k = 0;
    float a, b;

    const int w = 400;
    const int h = 40;

    int arr[h][w];
    for (int x = 0; x < w; x++) {

        if (x >= 2 * 3.1415 * k) {
            a = rand() % 20 - 10;
            b = 0.25;
            k++;

        }
        {
            y = cosarray(x, a, b);
            for (int i = 0; i < h; i++) {
                if (i <= y) {
                    arr[i][x] = 1;
                }
                else {
                    arr[i][x] = 0;
                }
            }
        }


    }
    for (int y = h - 1; y != 0; y--) {

        for (int x = 0; x < w; x++) {
            if (arr[y][x]) {
                fout << "88";
            }
            else {
                fout << "_";
            }
            //fout << arr[y][x];

        }
        fout << "\n";
    }

    return 0;
}