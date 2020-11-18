//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct _C3Base {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        unsigned char _field2[4];
        unsigned int _field3;
    } _field1;
};

struct _Chunkserver__ErrorResponse;

struct _Metricsinfo__HTTPMetricsInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    double _field8;
    int _field9;
    double _field10;
    int _field11;
    double _field12;
    double _field13;
    double _field14;
    long long _field15;
    long long _field16;
    int _field17;
    long long _field18;
    unsigned long long _field19;
    unsigned long long _field20;
    int _field21;
    double _field22;
    int _field23;
    long long _field24;
    int _field25;
    long long _field26;
    unsigned int _field27;
    struct _Chunkserver__ErrorResponse *_field28;
    int _field29;
    double _field30;
    int _field31;
    double _field32;
};

struct _Metricsinfo__SocketInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    unsigned int _field4;
    int _field5;
};

struct _ProtobufCMessage {
    struct _ProtobufCMessageDescriptor *_field1;
    unsigned int _field2;
    struct _ProtobufCMessageUnknownField *_field3;
};

struct _ProtobufCMessageDescriptor;

struct _ProtobufCMessageUnknownField;

struct __CFHTTPMessage;

struct __CFString;

struct __sFILE;

struct _mmcs_http_request_options;

struct mmcs_cfnetwork_http_context;

struct mmcs_curl_http_context;

struct mmcs_http_context {
    struct _C3Base _field1;
    int _field2;
    struct _Metricsinfo__HTTPMetricsInfo _field3;
    struct __CFString *_field4;
    long long _field5;
    double _field6;
    double _field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
    int _field13;
    struct __CFUUID *_field14;
    double _field15;
    double _field16;
    struct __CFError *_field17;
    struct __CFHTTPMessage *_field18;
    unsigned char _field19;
    unsigned long long _field20;
    struct _mmcs_http_request_options *_field21;
    double _field22;
    double _field23;
    struct __CFHTTPMessage *_field24;
    unsigned char _field25;
    struct __CFData *_field26;
    unsigned char _field27;
    struct __sFILE *_field28;
    struct __sFILE *_field29;
    struct _Metricsinfo__SocketInfo _field30;
    struct mmcs_metrics_http_info *_field31;
    CDUnknownFunctionPointerType _field32;
    CDUnknownFunctionPointerType _field33;
    CDUnknownFunctionPointerType _field34;
    CDUnknownFunctionPointerType _field35;
    CDUnknownFunctionPointerType _field36;
    CDUnknownFunctionPointerType _field37;
    CDUnknownFunctionPointerType _field38;
    CDUnknownFunctionPointerType _field39;
    void *_field40;
    void *_field41;
    struct os_activity_s *_field42;
    struct voucher_s *_field43;
    struct mmcs_read_stream_pool *_field44;
    struct __CFRunLoop *_field45;
    struct __CFArray *_field46;
    union {
        struct mmcs_cfnetwork_http_context *_field1;
        struct mmcs_nsurlsession_http_context *_field2;
        struct mmcs_curl_http_context *_field3;
        void *_field4;
    } _field47;
};

struct mmcs_http_context_options {
    struct __CFString *_field1;
    struct __CFHTTPMessage *_field2;
    struct _mmcs_http_request_options *_field3;
    double _field4;
    double _field5;
    unsigned long long _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    void *_field13;
    CDUnknownFunctionPointerType _field14;
    void *_field15;
    unsigned char _field16;
    double _field17;
    struct os_activity_s *_field18;
};

struct mmcs_metrics_http_info;

struct mmcs_nsurlsession_http_context;

struct mmcs_read_stream_pool;

struct os_activity_s;

struct voucher_s;

