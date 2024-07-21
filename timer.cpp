#include "include/iostream"
#include "include/chrono"
#include "include/thread"
using namespace std;
using namespace std::chrono;
using ui=unsigned int;
void replacement(int& number) {
    if (number < 0) number = 0;
}
void Timer(int days, int hours, int minutes, int seconds) {
    if (seconds / 60) {
        seconds %= 60;
        ++minutes;
    }
    if (minutes / 60) {
        minutes %= 60;
        ++hours;
    }
    if (hours / 24) {
        hours %= 24;
        ++days;
    }
    long* all_time {new long{days * 86400 + hours * 3600 + minutes * 60 + seconds}};
    while (all_time) {
        if ((!seconds) & (!minutes) & (!hours) & (!days)) break;
        printf("%d дней, %d часов, %d минут, %d секунд", days, hours, minutes, seconds);
        this_thread::sleep_for(1s);
        --seconds;
        system("cls");
    if (seconds == -1) {
        seconds = 59;
        --minutes;
    }
    if (minutes == -1) {
        minutes = 59;
        --hours;
    }
    if (hours == -1) {
        hours = 23;
        --days;
    }
    //printf("%d дней, %d часов, %d минут, %d секунд", days, hours, minutes, seconds);
    }
    delete all_time;
    system("sound.mp3");
    system("exit 0");
}
int main() {
    system("chcp 65001>nul");
    system("title timer");
    int days, hours, minutes, seconds;
    cout<<"Введите количество дней: ";
    cin>>days;
    replacement(days);
    cout<<"Введите количество часов: ";
    cin>>hours;
    replacement(hours);
    cout<<"Введите количество минут: ";
    cin>>minutes;
    replacement(minutes);
    cout<<"Введите количество секунд: ";
    cin>>seconds;
    replacement(seconds);
    system("cls");
    Timer(days, hours, minutes, seconds);
    return 0;
}