#include <iostream>
#include <pcap.h>
#include <curl/curl.h>
#include <string>
#include "model/Channel.h"

int main() {

    /**
     * 初始化推送渠道
     */
    Channel *channel = new Channel();
    channel->initChannel();







    delete channel;
    return 0;
}