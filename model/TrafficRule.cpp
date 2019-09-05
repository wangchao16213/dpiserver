//
// Created by 王超 on 2019/9/3.
//

#include "TrafficRule.h"

const string &TrafficRule::getId() const {
    return id;
}

void TrafficRule::setId(const string &id) {
    TrafficRule::id = id;
}

const string &TrafficRule::getRuleName() const {
    return ruleName;
}

void TrafficRule::setRuleName(const string &ruleName) {
    TrafficRule::ruleName = ruleName;
}

const vector<string> &TrafficRule::getFilter() const {
    return filter;
}

void TrafficRule::setFilter(const vector<string> &filter) {
    TrafficRule::filter = filter;
}

const string &TrafficRule::getProtoType() const {
    return protoType;
}

void TrafficRule::setProtoType(const string &protoType) {
    TrafficRule::protoType = protoType;
}

const string &TrafficRule::getStatus() const {
    return status;
}

void TrafficRule::setStatus(const string &status) {
    TrafficRule::status = status;
}

const string &TrafficRule::getActionType() const {
    return actionType;
}

void TrafficRule::setActionType(const string &actionType) {
    TrafficRule::actionType = actionType;
}

const string &TrafficRule::getContent() const {
    return content;
}

void TrafficRule::setContent(const string &content) {
    TrafficRule::content = content;
}
