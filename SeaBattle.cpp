﻿#include <iostream>
#include<vector>
#include <stdlib.h> 
#include <time.h> 
#include<Windows.h>
#include<vector>

using namespace std;

int GetRandomNumber(int min, int max)
{
    // Установить генератор случайных чисел

    // Получить случайное число - формула
    int num = min + rand() % (max - min + 1);

    return num;
}

using namespace std;
#define underline "\033[4m"
#define nderline "\033[0m"
#define online "\0x207B"
#define offline "\0x207B"

class Field {
public:
    char** field;
    char** SHfie;
    string SHIPS[10][4];
    Field() {
        field = new char* [10];
        SHfie = new char* [10];
        for (int i = 0; i < 10; i++) {
            field[i] = new char[10];
            SHfie[i] = new char[10];
            for (int j = 0; j < 10; j++) {
                field[i][j] = '.';
                SHfie[i][j] = '.';
            }
            for(int j = 0; j < 4; j++)
                SHIPS[i][j] = "as";
        }
    }
    ~Field() {
        for (int i = 0; i < 10; i++) {
            delete[] field[i];
            delete[] SHfie[i];

        }
        delete[] field;
        delete[] SHfie;
    }
    void printField() {
        cout << "  ";
        for (char i = 0; i < 10; i++) {
            cout << underline << (char)('a' + i);
        }
        cout << nderline << endl;
        for (int i = 0; i < 10; i++) {
            cout << (char)('0' + i) << "|";
            for (int j = 0; j < 10; j++) {
                cout << field[j][i];
            }
            cout << "|" << endl;
        }
        for (char i = 0; i < 10; i++) {
            cout << " ";
        }
        cout << endl;
    }
    void printFieldBv() {
        cout << "  ";
        for (char i = 0; i < 10; i++) {
            cout << underline << (char)('a' + i);
        }
        cout << nderline << endl;
        for (int i = 0; i < 10; i++) {
            cout << (char)('0' + i) << "|";
            for (int j = 0; j < 10; j++) {
                if (field[j][i] == '!')
                    cout << ".";
                else cout << field[j][i];
            }
            cout << "|" << endl;
        }
        for (char i = 0; i < 10; i++) {
            cout << " ";
        }
        cout << endl;
    }
    void printSHfie() {
        cout << "  ";
        for (char i = 0; i < 10; i++) {
            cout << underline << (char)('a' + i);
        }
        cout << nderline << endl;
        for (int i = 0; i < 10; i++) {
            cout << (char)('0' + i) << "|";
            for (int j = 0; j < 10; j++) {
                if (SHfie[j][i] == '!')
                    cout << ".";
                else cout << SHfie[j][i];
            }
            cout << "|" << endl;
        }
        for (char i = 0; i < 10; i++) {
            cout << " ";
        }
        cout << endl;
    }
    void printTFbv() {
        cout << "  ";
        for (char i = 0; i < 10; i++) {
            cout << underline << (char)('a' + i);
        }
        cout << nderline << "    ";
        for (char i = 0; i < 10; i++) {
            cout << underline << (char)('a' + i);
        }
        cout << nderline << endl;
        for (int i = 0; i < 10; i++) {
            cout << (char)('0' + i) << "|";
            for (int j = 0; j < 10; j++) {
                if (field[j][i] == '!')
                    cout << ".";
                else cout << field[j][i];
            }
            cout << "|";
            cout << "  |";
            for (int j = 0; j < 10; j++) {
                if (SHfie[j][i] == '!')
                    cout << ".";
                else cout << SHfie[j][i];
            }
            cout << "|" << endl;
        }

    }
    void fillTheFieldHand() {
        string top, back;
        //4-x палубный
        while (true) {
            cout << "Поставьте начало 4-х палубного крейсера: ";
            cin >> top;
            cout << "Поставьте конец  4-х палубного крейсера: ";
            cin >> back;
            if (!ok(top, back, 4, true))
                cout << "Вы ввели не подходящие данные" << endl;
            else  break;
        }
        //3-x палубный
        while (true) {
            cout << "Поставьте начало 3-х палубного крейсера: ";
            cin >> top;
            cout << "Поставьте конец  3-х палубного крейсера: ";
            cin >> back;
            if (!ok(top, back, 3, true))
                cout << "Вы ввели не подходящие данные" << endl;
            else  break;
        }
        //3-x палубный
        while (true) {
            cout << "Поставьте начало 3-х палубного крейсера: ";
            cin >> top;
            cout << "Поставьте конец  3-х палубного крейсера: ";
            cin >> back;
            if (!ok(top, back, 3, true))
                cout << "Вы ввели не подходящие данные" << endl;
            else  break;
        }
        //2-x палубный
        while (true) {
            cout << "Поставьте начало 2-х палубного крейсера: ";
            cin >> top;
            cout << "Поставьте конец  2-х палубного крейсера: ";
            cin >> back;
            if (!ok(top, back, 2, true))
                cout << "Вы ввели не подходящие данные" << endl;
            else  break;
        }
        //2-x палубный
        while (true) {
            cout << "Поставьте начало 2-х палубного крейсера: ";
            cin >> top;
            cout << "Поставьте конец  2-х палубного крейсера: ";
            cin >> back;
            if (!ok(top, back, 2, true))
                cout << "Вы ввели не подходящие данные" << endl;
            else  break;
        }
        //2-x палубный
        while (true) {
            cout << "Поставьте начало 2-х палубного крейсера: ";
            cin >> top;
            cout << "Поставьте конец  2-х палубного крейсера: ";
            cin >> back;
            if (!ok(top, back, 2, true))
                cout << "Вы ввели не подходящие данные" << endl;
            else  break;
        }
        //1-x палубный
        while (true) {
            cout << "Поставьте координату 1 палубного крейсера: ";
            cin >> top;
            back = top;
            if (!ok(top, back, 1, true))
                cout << "Вы ввели не подходящие данные" << endl;
            else  break;
        }
        //1-x палубный
        while (true) {
            cout << "Поставьте координату 1 палубного крейсера: ";
            cin >> top;
            back = top;
            if (!ok(top, back, 1, true))
                cout << "Вы ввели не подходящие данные" << endl;
            else  break;
        }
        //1-x палубный
        while (true) {
            cout << "Поставьте координату 1 палубного крейсера: ";
            cin >> top;
            back = top;
            if (!ok(top, back, 1, true))
                cout << "Вы ввели не подходящие данные" << endl;
            else  break;
        }
        //1-x палубный
        while (true) {
            cout << "Поставьте координату 1 палубного крейсера: ";
            cin >> top;
            back = top;
            if (!ok(top, back, 1, true))
                cout << "Вы ввели не подходящие данные" << endl;
            else  break;
        }
    }
    bool ok(string start, string end, int size, bool okey) {
        string mem1, mem2;
        if (!(start.size() == 2 and end.size() == 2))
            return false;
        char stnum = start[0] - 'a';
        char endnum = start[1] - '0';
        if (stnum > 'j' - 'a' or endnum > 9)
            return false;

        stnum = end[0] - 'a';
        endnum = end[1] - '0';
        if (stnum > 'j' - 'a' or endnum > 9)
            return false;
        if (abs(start[0] - end[0]) == size - 1 and start[1] == end[1]) {
            if (start[0] - 'a' > end[0] - 'a')
                swap(start, end);
            for (int i = 0; i < size; i++)
            {
                if (field[tolower(start[0]) - 'a' + i][start[1] - '0'] == '#' or field[tolower(start[0]) - 'a' + i][start[1] - '0'] == '!')
                    return false;
            }
            for (int i = 0; i < size; i++)
            {
                field[tolower(start[0]) - 'a' + i][start[1] - '0'] = '#';
                if (start[1] - '0' - 1 >= 0)
                    field[tolower(start[0]) - 'a' + i][start[1] - '0' - 1] = '!';
                if (start[1] - '0' + 1 <= 9 and start[1] - '0' + 1 >= 0 and tolower(start[0]) - 'a' + i <= 9 and tolower(start[0]) - 'a' + i >= 0)
                    field[tolower(start[0]) - 'a' + i][start[1] - '0' + 1] = '!';
            }
            if (tolower(start[0]) - 'a' == 0) {

            }

            if (start[0] - 'a' - 1 >= 0) {
                field[start[0] - 'a' - 1][start[1] - '0'] = '!';
                if (start[1] - '0' - 1 >= 0) {
                    field[start[0] - 'a' - 1][start[1] - '0' - 1] = '!';
                }
                if (start[1] - '0' + 1 <= 9) {
                    field[start[0] - 'a' - 1][start[1] - '0' + 1] = '!';
                }
            }
            if (end[0] - 'a' + 1 <= 9) {
                field[end[0] - 'a' + 1][end[1] - '0'] = '!';
                if (end[1] - '0' - 1 >= 0)
                    field[end[0] - 'a' + 1][end[1] - '0' - 1] = '!';
                if (end[1] - '0' + 1 <= 9)
                    field[end[0] - 'a' + 1][end[1] - '0' + 1] = '!';
            }

            if (okey) {
                system("cls");
                printField();
            }
            return true;

        }
        if (start[0] == end[0] and abs(start[1] - end[1]) == size - 1) {
            if (start[1] - '0' > end[1] - '0')
                swap(start, end);
            for (int i = 0; i < size; i++)
            {
                if (field[tolower(start[0]) - 'a'][start[1] - '0' + i] == '#' or field[tolower(start[0]) - 'a'][start[1] - '0' + i] == '!')
                    return false;
            }
            for (int i = 0; i < size; i++)
            {
                field[tolower(start[0]) - 'a'][start[1] - '0' + i] = '#';
                if ((tolower(start[0]) - 'a' - 1 <= 9 and tolower(start[0]) - 'a' - 1 >= 0) and (tolower(start[1]) - '0' + i <= 9 and tolower(start[1]) - '0' + i >= 0))
                    field[tolower(start[0]) - 'a' - 1][start[1] - '0' + i] = '!';
                if ((tolower(start[0]) - 'a' + 1 <= 9 and tolower(start[0]) - 'a' + 1 >= 0) and (tolower(start[1]) - '0' + i <= 9 and tolower(start[1]) - '0' + i >= 0))
                    field[tolower(start[0]) - 'a' + 1][start[1] - '0' + i] = '!';
            }
            if (start[1] - '0' - 1 >= 0) {
                field[start[0] - 'a'][start[1] - '0' - 1] = '!';
                if (start[0] - 'a' - 1 >= 0)
                    field[start[0] - 'a' - 1][start[1] - '0' - 1] = '!';
                if (start[0] - 'a' + 1 <= 9)
                    field[start[0] - 'a' + 1][start[1] - '0' - 1] = '!';
            }
            if (end[1] - '0' + 1 <= 9) {// здесь ошибка
                field[end[0] - 'a'][end[1] - '0' + 1] = '!';
                if (end[0] - 'a' + 1 <= 9 and end[0] - 'a' - 1 >= 0)
                    field[end[0] - 'a' - 1][end[1] - '0' + 1] = '!';
                if (end[0] - 'a' - 1 >= 0 and end[0] - 'a' + 1 <= 9)
                    field[end[0] - 'a' + 1][end[1] - '0' + 1] = '!';

            }
            if (okey) {
                system("cls");
                printField();
            }
            return true;

        }
        return false;
    }
    void whileTrue(int n, bool okey) {
        while (true) {
            int num0 = GetRandomNumber(0, 9 - n);
            int num1 = GetRandomNumber(0, 9 - n);
            int vert = GetRandomNumber(0, 1);
            char numm0[2];
            numm0[0] = num0 + 'a';
            numm0[1] = num1 + '0';
            string co1(numm0);
            //cout << co1;
            co1 = co1.substr(0, 2);
            //cout << co1 << endl;
            if (vert == 1)
                numm0[0] += n - 1;
            else numm0[1] += n - 1;
            string co2(numm0);
            co2 = co2.substr(0, 2);
            //string a;
            //cout << co1 <<" " << co2;
            //cin >> a;
            //cout << co2 << endl;
            if (ok(co1, co2, n, okey)) {
                //cout << "OOOOOOOOOOOOOOOOOOOOOk" << endl;//printField();
                break;
            }

        }
    }
    void fiShi() {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 4; j++) {
                //cout << SHIPS[i][j] << " " << i << " ";
                cout << SHIPS[i][j] << " ";
            }
            cout << endl;
        }
    }
    void fbot(bool okey) {
        for (int i = 4; i > 0; i--) {
            for (int j = 0; j < 5 - i; j++)
                whileTrue(i, okey);
                
        }

    }
    string strGen(int a, int b) {
        char numm0[2];
        numm0[0] = a + 'a';
        numm0[1] = b + '0';
        string co1(numm0);
        co1 = co1.substr(0, 2);
        return co1;
    }
    bool shooting(string a1, Field& ff) {
        int num0 = a1[0] - 'a';
        int num1 = a1[1] - '0';
        //cout << (int)num0 << " " << (int)num1;
        if (field[num0][num1] == '#') {
            SHfie[num0][num1] = 'X';
            field[num0][num1] = 'X';
            //if (checkShip(a1)) {
              //  cout << "Корабль сбит" << endl;
                //Sleep(2500);
            //}
        }
        else if (field[(int)num0][(int)num1] != 'X') {
            SHfie[(int)num0][(int)num1] = '*';
            field[(int)num0][(int)num1] = '*';
        }
        if (field[(int)num0][(int)num1] == '#') return true;
        return false;
    }
    string RandKordPlay() {
        while (true) {
            int num0 = GetRandomNumber(0, 9);
            int num1 = GetRandomNumber(0, 9);
            char numm0[2];
            numm0[0] = num0 + 'a';
            numm0[1] = num1 + '0';
            string co1(numm0);
            co1 = co1.substr(0, 2);
            if (field[num0][num1] != 'X')
                return co1;
        }
    }
    string RandKordBot(Field& f1) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (f1.SHfie[i][j] == 'X') {
                    if (i - 1 >= 0 and f1.SHfie[i - 1][j] == '.') {
                        return strGen(i - 1, j);
                    }
                    if (i + 1 >= 0 and f1.SHfie[i + 1][j] == '.') {
                        return strGen(i + 1, j);
                    }
                    if (j - 1 >= 0 and f1.SHfie[i][j - 1] == '.') {
                        return strGen(i, j - 1);
                    }
                    if (j + 1 >= 0 and f1.SHfie[i][j + 1] == '.') {
                        return strGen(i, j + 1);
                    }
                }
            }
        }
        while (true) {
            int num0 = GetRandomNumber(0, 9);
            int num1 = GetRandomNumber(0, 9);
            string co1;
            co1 = strGen(num0, num1);

            if (f1.SHfie[num0][num1] != 'X' and f1.SHfie[num0][num1] != '*')
                return co1;
        }
    }
    bool CheckWin() {
        int score = 0;
        for (int i = 0; i <= 9; i++) {
            for (int j = 0; j <= 9; j++) {
                if (field[i][j] == '#')
                    return false;
            }
        }
        return true;
    }
    bool checkShip1(string co) {
        int co1 = co[0] - 'a';
        int co2 = co[1] - '0';
        cout << co1 << " " << co2 << endl;

        if (field[co1][co2] != 'X') return false;
        if (field[co1][co2] == 'X') {
            for (int i = 0; true; i++) {
                //cout << co1 << " " << co2 + i << endl;
                if (!(co1 <= 9 and co2 + i >= 0 and co1 >= 0 and co2 + i <= 9)) break;
                if (field[co1][co2 + i] == '!') break;
                if (field[co1][co2 + i] == '#') return false;
            }
            for (int i = 0; true; i++) {
                //cout << co1 + i << " " << co2 << endl;
                if (!(co1 + i <= 9 and co2 >= 0 and co1 + i >= 0 and co2 <= 9)) break;
                if (field[co1 + i][co2] == '!') break;
                if (field[co1 + i][co2] == '#') return false;
            }
            for (int i = 0; true; i--) {
                //cout << co1 << " " << co2 + i << endl;
                if (!(co1 <= 9 and co2 + i >= 0 and co1 >= 0 and co2 + i <= 9)) break;
                if (field[co1][co2 + i] == '!') break;
                if (field[co1][co2 + i] == '#') return false;
            }
            for (int i = 0; true; i--) {
                //cout << co1 + i << " " << co2 << endl;
                if (!(co1 + i <= 9 and co2 >= 0 and co1 + i >= 0 and co2 <= 9)) break;
                if (field[co1 + i][co2] == '!') break;
                if (field[co1 + i][co2] == '#') return false;
            }
            return true;
        }
    }
    bool checkCoords(int x, int y) {
        return x >= 0 and x <= 9 and y >= 0 and y <= 9;
    }
    bool checkShip(string co) {
        int letZ = co[0] - 'a';
        int letO = co[1] - '0';
        int x = letZ;
        int y = letO;
        if (field[x][y] != '#' and field[x][y] != 'X') {
            return false;
        }

        while (checkCoords(x, y)) {
            if (field[x][y] == '#') {
                return false;
            }
            if (checkCoords(x - 1, y) and (field[x - 1][y] == 'X' or field[x - 1][y] == '#')) {
                x = x - 1;
                continue;
            }
            if (checkCoords(x, y - 1) and (field[x][y - 1] == 'X' or field[x][y - 1] == '#')) {
                y = y - 1;
                continue;
            }
            break;
        }

        x = letZ;
        y = letO;

        while (checkCoords(x, y)) {
            if (field[x][y] == '#') {
                return false;
            }
            if (checkCoords(x + 1, y) and (field[x + 1][y] == 'X' or field[x + 1][y] == '#')) {
                x = x + 1;
                continue;
            }
            if (checkCoords(x, y + 1) and (field[x][y + 1] == 'X' or field[x][y + 1] == '#')) {
                y = y + 1;
                continue;
            }
            break;
        }
        return true;
    }
    void fillShips() {

    }
};
void printTFbv(char** field, char** SHfie) {
    cout << "  ";
    for (char i = 0; i < 10; i++) {
        cout << underline << (char)('a' + i);
    }
    cout << nderline << "    ";
    for (char i = 0; i < 10; i++) {
        cout << underline << (char)('a' + i);
    }
    cout << nderline << endl;
    for (int i = 0; i < 10; i++) {
        cout << (char)('0' + i) << "|";
        for (int j = 0; j < 10; j++) {
            if (field[j][i] == '!')
                cout << ".";
            else cout << field[j][i];
        }
        cout << "|";
        cout << " " << (char)('0' + i) << "|";
        for (int j = 0; j < 10; j++) {
            if (SHfie[j][i] == '!')
                cout << ".";
            else cout << SHfie[j][i];
        }
        cout << "|" << endl;
    }

}
void printRules() {
    cout << "<===========Как начать игру в Морской Бой===========>" << endl;
    cout << "1. Изучите правила" << endl;
    cout << "2. Далее вам предлагается ввести поле в ручную или ввести поле с помощью бота. При вводе в ручную вводите координаты по очереди через enter в формате а1" << endl;
    cout << "3. Далее при нажати клавиши Enter начнется игра" << endl;
    cout << "4. Вводит выстрел в формате а1.(внчале буква потом цифра)" << endl;
    cout << "<===================Правила=========================>" << endl;
    cout << "Вы ходите по очереди с ботом" << endl;
    cout << "Выйграет тот кто собьет все корабли первым.(1-4палуб., 2-3палуб.,3-2палуб.,4-1палуб.)";
    cout << endl <<"Нажмите Enter что бы продолжить";
    char a = getchar();
}

int main()
{
    setlocale(LC_ALL, "Russian");
    printRules();
    srand(time(NULL));
    Field fp1, fb2;
    cout << "Если хотите расставить в ручную введите Y: ";
    char a;
    a = getchar();
    if (a == 'Y') {
        fp1.printField();
        fp1.fillTheFieldHand();
    }
    else fp1.fbot(1);
    fb2.fbot(0);
    //fp1.fiShi();
    cout << endl;
    //fb2.fiShi();
    cout << endl;
    system("cls");
    fp1.printTFbv();
    cout << "Если хотите начать нажмите Enter";
    char b;
    b = getchar();
    string shoot;
    while (true) {
        string shoot;
        while (true) {
            cout << "Введите координату выстрела: ";
            cin >> shoot;// введ выстрела в ручную
            //shoot = fp1.RandKordBot(fb2);
            if (shoot[0] - 'a' >= 0 and shoot[0] - 'a' <= 9 and shoot[1] - '0' >= 0 and shoot[1] - '0' <= 9)
                break;
            cout << "Ведены не корректные данные" << endl;
        }

        fb2.shooting(shoot, fp1);
        if (fb2.CheckWin()) {
            system("cls");
            cout << "Игрок победил. Поздравляем!. Можете испытать удачу снова!";
            return 0;
        }
        string cor = fb2.RandKordBot(fp1);
        fp1.shooting(cor, fb2);
        system("cls");
        printTFbv(fp1.field, fb2.SHfie);
        if (fp1.CheckWin()) {
            system("cls");
            cout << "Бот победил. Можете испытать удачу снова!";
            return 0;
        }
    }
}
