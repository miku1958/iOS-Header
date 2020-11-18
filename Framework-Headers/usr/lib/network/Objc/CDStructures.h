//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct in6_addr;

struct in_addr;

struct netcore_stats_data_usage_snapshot {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
};

struct netcore_stats_network_event {
    int _field1;
    unsigned int _field2;
};

struct netcore_stats_tcp_cell_fallback_report {
    struct netcore_stats_network_event _field1[20];
    struct netcore_stats_data_usage_snapshot _field2[20];
    int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    BOOL _field7;
    unsigned char _field8[7];
};

struct netcore_stats_tcp_report {
    union {
        struct {
            struct netcore_stats_tcp_statistics_report _field1;
            struct netcore_stats_tcp_cell_fallback_report _field2;
            struct netcore_stats_tcp_statistics_report _field3[8];
            int _field4;
            unsigned int _field5;
        } _field1;
        struct nw_connection_report_s _field2;
    } _field1;
    BOOL _field2;
    BOOL _field3;
    unsigned char _field4[6];
};

struct netcore_stats_tcp_statistics_report {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    unsigned long long _field14;
    unsigned long long _field15;
    unsigned long long _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
    unsigned int _field21;
    unsigned int _field22;
    unsigned int _field23;
    unsigned int _field24;
    unsigned int _field25;
    unsigned int _field26;
    unsigned int _field27;
    unsigned int _field28;
    unsigned int _field29;
    unsigned int _field30;
    unsigned int _field31;
    unsigned int _field32;
    unsigned int _field33;
    int _field34;
    int _field35;
    int _field36;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :5;
    unsigned char _field37[6];
};

struct nw_connection_report_s {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
    unsigned int _field21;
    unsigned int _field22;
    unsigned int _field23;
    unsigned int _field24;
    unsigned int _field25;
    unsigned int _field26;
    unsigned int _field27;
    unsigned int _field28;
    unsigned int _field29;
    unsigned int _field30;
    unsigned int _field31;
    unsigned int _field32;
    unsigned int _field33;
    int _field34;
    int _field35;
    int _field36;
    int _field37;
    int _field38;
    int _field39;
    int _field40;
    int _field41;
    unsigned char _field42;
    unsigned char _field43;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :4;
    unsigned char _field44[3];
};

struct nw_connection_throughput_monitor_s {
    unsigned long long current_bytes;
    unsigned long long current_time;
    unsigned long long last_bytes;
    unsigned long long last_time;
    void *timer;
    unsigned int minimum;
    unsigned char __pad[4];
};

struct nw_connection_timestamp_s {
    unsigned long long _field1;
    unsigned long long _field2;
    struct nw_endpoint_handler_event_s _field3;
    long long _field4;
    unsigned char _field5[0];
};

struct nw_endpoint_handler_event_s {
    unsigned int _field1;
    unsigned int _field2;
};

struct nw_listen_protocol {
    struct nw_listen_protocol_callbacks *callbacks;
    struct nw_protocol *protocol_handler;
    void *protocol_handler_context;
    void *handle;
};

struct nw_listen_protocol_callbacks {
    CDUnknownFunctionPointerType new_flow;
    CDUnknownFunctionPointerType disconnected;
};

struct nw_protocol {
    unsigned char flow_id[16];
    struct nw_protocol_identifier *identifier;
    struct nw_protocol_callbacks *callbacks;
    struct nw_protocol *output_handler;
    void *handle;
    struct nw_protocol *default_input_handler;
    void *output_handler_context;
};

struct nw_protocol_callbacks {
    CDUnknownFunctionPointerType add_input_handler;
    CDUnknownFunctionPointerType remove_input_handler;
    CDUnknownFunctionPointerType replace_input_handler;
    CDUnknownFunctionPointerType connect;
    CDUnknownFunctionPointerType disconnect;
    CDUnknownFunctionPointerType connected;
    CDUnknownFunctionPointerType disconnected;
    CDUnknownFunctionPointerType error;
    CDUnknownFunctionPointerType input_available;
    CDUnknownFunctionPointerType output_available;
    CDUnknownFunctionPointerType get_input_frames;
    CDUnknownFunctionPointerType get_output_frames;
    CDUnknownFunctionPointerType finalize_output_frames;
    CDUnknownFunctionPointerType link_state;
    CDUnknownFunctionPointerType get_parameters;
    CDUnknownFunctionPointerType get_path;
    CDUnknownFunctionPointerType get_local_endpoint;
    CDUnknownFunctionPointerType get_remote_endpoint;
    CDUnknownFunctionPointerType register_notification;
    CDUnknownFunctionPointerType unregister_notification;
    CDUnknownFunctionPointerType notify;
    CDUnknownFunctionPointerType updated_path;
    CDUnknownFunctionPointerType supports_external_data;
    CDUnknownFunctionPointerType input_finished;
    CDUnknownFunctionPointerType output_finished;
    CDUnknownFunctionPointerType get_output_local_endpoint;
    CDUnknownFunctionPointerType get_output_interface;
    CDUnknownFunctionPointerType waiting_for_output;
    CDUnknownFunctionPointerType copy_info;
    CDUnknownFunctionPointerType add_listen_handler;
    CDUnknownFunctionPointerType remove_listen_handler;
    CDUnknownFunctionPointerType supports_message_frames;
    CDUnknownFunctionPointerType reset;
    CDUnknownFunctionPointerType input_flush;
};

struct nw_protocol_identifier {
    char name[32];
    int level;
    int mapping;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct tcp_conn_status {
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
};

struct tcp_connection_info {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :17;
    unsigned long long _field17;
    unsigned long long _field18;
    unsigned long long _field19;
    unsigned long long _field20;
    unsigned long long _field21;
    unsigned long long _field22;
    unsigned long long _field23;
};

struct tcp_info {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    int _field19;
    unsigned int _field20;
    unsigned long long _field21;
    unsigned long long _field22;
    unsigned long long _field23;
    unsigned long long _field24;
    unsigned long long _field25;
    unsigned long long _field26;
    unsigned long long _field27;
    unsigned long long _field28;
    unsigned long long _field29;
    unsigned char _field30;
    unsigned char _field31;
    unsigned short _field32;
    unsigned long long _field33;
    unsigned long long _field34;
    unsigned long long _field35;
    unsigned long long _field36;
    unsigned long long _field37;
    unsigned long long _field38;
    unsigned long long _field39;
    unsigned long long _field40;
    unsigned long long _field41;
    unsigned long long _field42;
    unsigned long long _field43;
    unsigned long long _field44;
    struct tcp_conn_status _field45;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int _field46;
    unsigned int _field47;
    unsigned int _field48;
    unsigned int _field49;
    unsigned int _field50;
    unsigned int _field51;
    unsigned int _field52;
    unsigned int _field53;
    unsigned int _field54;
    unsigned long long _field55;
};

