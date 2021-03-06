//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AVAudioSessionImpl {
    id _field1;
    struct GenericRunLoopThread *_field2;
    struct KVOProperty<float> _field3;
    struct KVOProperty<float> _field4;
    struct KVONSArrayProperty _field5;
    struct KVONSArrayProperty _field6;
    struct KVOProperty<unsigned int> _field7;
    struct KVOProperty<unsigned int> _field8;
    struct KVONSObjectProperty<NSArray *> _field9;
    struct KVOProperty<unsigned int> _field10;
    id _field11;
    BOOL _field12;
    struct KVOProperty<unsigned int> _field13;
    struct KVOProperty<unsigned int> _field14;
    unsigned int _field15;
    unsigned int _field16;
    BOOL _field17;
    struct SessionConnector _field18;
    BOOL _field19;
    BOOL _field20;
};

struct ChannelDescriptionImpl {
    id _field1;
    id _field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct ConnectionResult {
    int _field1;
    unsigned int _field2;
};

struct DataSourceDescriptionImpl {
    unsigned int _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
};

struct GenericRunLoopThread;

struct KVONSArrayProperty {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    id _field3;
    id _field4;
    BOOL _field5;
};

struct KVONSObjectProperty<NSArray *> {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    id _field3;
    id _field4;
    BOOL _field5;
};

struct KVOProperty<float> {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    id _field3;
    id _field4;
    BOOL _field5;
};

struct KVOProperty<unsigned int> {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    id _field3;
    id _field4;
    BOOL _field5;
};

struct PortDescriptionImpl {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    BOOL _field6;
    BOOL _field7;
    BOOL _field8;
    BOOL _field9;
    unsigned long long _field10;
    id _field11;
    id _field12;
    id _field13;
    id _field14;
};

struct RouteDescriptionImpl {
    id _field1;
    id _field2;
    id _field3;
    unsigned long long _field4;
    BOOL _field5;
    BOOL _field6;
};

struct SessionConnector {
    struct shared_ptr<std::__1::function<void (avfaudio::SessionConnector::ConnectionResult)>> _field1;
};

struct function<void (avfaudio::SessionConnector::ConnectionResult)>;

struct shared_ptr<std::__1::function<void (avfaudio::SessionConnector::ConnectionResult)>> {
    struct function<void (avfaudio::SessionConnector::ConnectionResult)> *_field1;
    struct __shared_weak_count *_field2;
};

