#include <stdio.h>
#include <curl/curl.h>

int main(){

    CURL *curl;
    CURLcode response;

    curl_global_init(CURL_GLOBAL_ALL);
    
    curl = curl_easy_init();
    if(curl){
        curl_easy_setopt(curl, CURLOPT_URL, "http://0.0.0.0:8000/test");
        response = curl_easy_perform(curl);

        if(response != CURLE_OK){
            fprintf(stderr, "Request failed: %s\n", curl_easy_strerror(response));
        }else{
            char *d = response;
            //printf("\n");
            printf("%c\n", d);
        }
        curl_easy_cleanup(curl);
    }
    curl_global_cleanup();
    return 0;
}