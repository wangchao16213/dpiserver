//
// Created by 王超 on 2019/9/3.
//

#ifndef DPISERVER_CHANNEL_H
#define DPISERVER_CHANNEL_H

#include <string>
#include <vector>
#include "TrafficRule.h"
using namespace std;
class Channel {
private:
    string channelId;
    string channelName;
    string channelDesc;
    vector<string> mirrorNetCardNames;
    string gatewayNetCardMacAddr;
    string sendingNetCardName;
    vector<TrafficRule> trafficRules;
public:
    const string &getChannelId() const;

    void setChannelId(const string &channelId);

    const string &getChannelName() const;

    void setChannelName(const string &channelName);

    const string &getChannelDesc() const;

    void setChannelDesc(const string &channelDesc);

    const vector<string> &getMirrorNetCardNames() const;

    void setMirrorNetCardNames(const vector<string> &mirrorNetCardNames);

    const string &getGatewayNetCardMacAddr() const;

    void setGatewayNetCardMacAddr(const string &gatewayNetCardMacAddr);

    const string &getSendingNetCardName() const;

    void setSendingNetCardName(const string &sendingNetCardName);

    void initChannel();

    const vector<TrafficRule> &getTrafficRules() const;

    void setTrafficRules(const vector<TrafficRule> &trafficRules);
};


#endif //DPISERVER_CHANNEL_H
