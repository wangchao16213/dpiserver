//
// Created by 王超 on 2019/9/3.
//

#include "Channel.h"

const string &Channel::getChannelId() const {
    return channelId;
}

void Channel::setChannelId(const string &channelId) {
    Channel::channelId = channelId;
}

const string &Channel::getChannelName() const {
    return channelName;
}

void Channel::setChannelName(const string &channelName) {
    Channel::channelName = channelName;
}

const string &Channel::getChannelDesc() const {
    return channelDesc;
}

void Channel::setChannelDesc(const string &channelDesc) {
    Channel::channelDesc = channelDesc;
}

const vector<string> &Channel::getMirrorNetCardNames() const {
    return mirrorNetCardNames;
}

void Channel::setMirrorNetCardNames(const vector<string> &mirrorNetCardNames) {
    Channel::mirrorNetCardNames = mirrorNetCardNames;
}

const string &Channel::getGatewayNetCardMacAddr() const {
    return gatewayNetCardMacAddr;
}

void Channel::setGatewayNetCardMacAddr(const string &gatewayNetCardMacAddr) {
    Channel::gatewayNetCardMacAddr = gatewayNetCardMacAddr;
}

const string &Channel::getSendingNetCardName() const {
    return sendingNetCardName;
}

void Channel::setSendingNetCardName(const string &sendingNetCardName) {
    Channel::sendingNetCardName = sendingNetCardName;
}

const vector<TrafficRule> &Channel::getTrafficRules() const {
    return trafficRules;
}

void Channel::setTrafficRules(const vector<TrafficRule> &trafficRules) {
    Channel::trafficRules = trafficRules;
}


void Channel::initChannel() {
    //查询http

    //初始化连接池

    //TODO 临时本地测试
    this->setChannelId("aaaaa");
    this->setChannelDesc("测试渠道");
    this->setChannelName("测试渠道");
    vector<string> mirroNames;
    mirroNames.emplace_back("en0");
    this->setMirrorNetCardNames(mirroNames);
    this->setSendingNetCardName("en0");
    //下发渠道Mac地址
    this->setGatewayNetCardMacAddr("9c:a6:15:8b:ee:89");

    //TODO 这块内存需不需要释放
    vector<TrafficRule> *trafficRules = new vector<TrafficRule>();

    TrafficRule *trafficRule = new TrafficRule();

    trafficRule->setRuleName("测试规则");

    trafficRule->setProtoType(PROTOTYPE_HTTP);


    //设置过滤规则 正则表达式
    vector<string> filters;
    filters.emplace_back("www.baidu.com");
    trafficRule->setFilter(filters);


}
