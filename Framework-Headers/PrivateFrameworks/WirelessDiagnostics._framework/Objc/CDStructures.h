//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AWDObserverConnection;

struct AWDServerConnection {
    struct shared_ptr<awd::ServerConnectionInfo> _field1;
};

struct ServerConnectionInfo;

struct __shared_weak_count;

struct shared_ptr<AWDObserverConnection> {
    struct AWDObserverConnection *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<awd::ServerConnectionInfo> {
    struct ServerConnectionInfo *_field1;
    struct __shared_weak_count *_field2;
};

