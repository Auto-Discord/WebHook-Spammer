<<<<<<< HEAD
#include <stdio.h>
#include <iostream>
#include <thread>
#include <chrono>
#include <curl/curl.h>
#include "config.h"

using namespace std;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;

int perform();

int main() {
    while (true) {
        perform();
        sleep_for(milliseconds(interval));
    }
    return 0;
}

int perform() {
    CURL* curl;
    CURLcode res;
    curl = curl_easy_init();
    if (curl) {
        struct curl_slist* headers = nullptr;
        headers = curl_slist_append(headers, "Content-Type: application/json");
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
        curl_easy_setopt(curl, CURLOPT_POST, 1L);
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, json.c_str());
        res = curl_easy_perform(curl);
        if (res == CURLE_OK) {
            long status;
            curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &status);
            return (int) status;
        } else {
            cout << curl_easy_strerror(res) << endl;
            return -1;
        }
    }
    return -2;
}
