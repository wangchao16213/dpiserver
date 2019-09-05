//
// Created by 王超 on 2019/9/3.
//

#ifndef DPISERVER_TRAFFICRULE_H
#define DPISERVER_TRAFFICRULE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define PROTOTYPE_HTTP "0"
#define PROTOTYPE_UDP "1"
#define PROTOTYPE_DNS "2"



class TrafficRule {
private:
    string id;
    string ruleName;
    vector<string> filter;
    // 0 http 1 UDP 2 DNS
    string protoType;
    // 0 禁用 1 启用
    string status;
    //动作类型 0 动态跳转 1 内容植入 2 流量统计 3 RST连接
    string actionType;
    string content;
public:
    const string &getId() const;

    void setId(const string &id);

    const string &getRuleName() const;

    void setRuleName(const string &ruleName);

    const vector<string> &getFilter() const;

    void setFilter(const vector<string> &filter);

    const string &getProtoType() const;

    void setProtoType(const string &protoType);

    const string &getStatus() const;

    void setStatus(const string &status);

    const string &getActionType() const;

    void setActionType(const string &actionType);

    const string &getContent() const;

    void setContent(const string &content);


};


#endif //DPISERVER_TRAFFICRULE_H
