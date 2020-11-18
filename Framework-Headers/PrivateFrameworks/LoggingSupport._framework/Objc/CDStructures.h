//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct _os_log_index_timeref {
    unsigned char uuid[16];
    unsigned long long continuous;
};

struct catalog_hdr_s {
    unsigned short _field1;
    unsigned long long _field2;
};

struct catalog_procinfo_s {
    unsigned short _field1;
    unsigned short _field2;
    int _field3;
    unsigned long long _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned char _field7[16];
    unsigned char _field8[16];
    struct hashtable *_field9;
    struct hashtable *_field10;
};

struct catalog_s {
    struct catalog_hdr_s _field1;
    struct os_trace_uuid_map_s *_field2;
    struct os_trace_str_map_s *_field3;
    unsigned long long _field4;
    struct os_procinfo_map_s *_field5;
    unsigned long long _field6;
    unsigned long long _field7;
    struct subchunk_queue_t _field8;
    unsigned long long _field9;
};

struct catalog_subchunk_s {
    struct {
        struct catalog_subchunk_s *_field1;
        struct catalog_subchunk_s **_field2;
    } _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned int _field4;
    unsigned int _field5;
    struct hashtable *_field6;
    struct hashtable *_field7;
};

struct hashtable;

struct mach_timebase_info {
    unsigned int _field1;
    unsigned int _field2;
};

struct os_activity_breadcrumb_s {
    unsigned int _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
    char *_field5;
    char *_field6;
};

struct os_activity_create_s {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
    char *_field5;
    struct timeval _field6;
    struct timezone _field7;
    unsigned int _field8;
    unsigned int _field9;
    char *_field10;
    unsigned long long _field11;
    unsigned long long _field12;
};

struct os_activity_statedump_s {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
    char *_field5;
    struct timeval _field6;
    struct timezone _field7;
    unsigned int _field8;
    unsigned int _field9;
    char *_field10;
    unsigned long long _field11;
};

struct os_activity_stream_activity_s {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
    char *_field5;
    struct timeval _field6;
    struct timezone _field7;
    unsigned int _field8;
    unsigned int _field9;
    char *_field10;
};

struct os_activity_stream_common_s {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
    char *_field5;
    struct timeval _field6;
    struct timezone _field7;
    unsigned int _field8;
    unsigned int _field9;
};

struct os_activity_stream_common_with_name_s {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
    char *_field5;
    struct timeval _field6;
    struct timezone _field7;
    unsigned int _field8;
    unsigned int _field9;
    char *_field10;
};

struct os_activity_stream_entry_s {
    unsigned int _field1;
    int _field2;
    unsigned long long _field3;
    char *_field4;
    char *_field5;
    unsigned long long _field6;
    unsigned long long _field7;
    union {
        struct os_activity_stream_common_s _field1;
        struct os_activity_stream_common_with_name_s _field2;
        struct os_activity_create_s _field3;
        struct os_activity_transition_s _field4;
        struct os_log_message_s _field5;
        struct os_trace_message_s _field6;
        struct os_activity_useraction_s _field7;
        struct os_activity_statedump_s _field8;
        struct os_activity_timesync_s _field9;
        struct os_activity_breadcrumb_s _field10;
        struct os_activity_stream_activity_s _field11;
        struct os_trace_message_s _field12;
    } _field8;
};

struct os_activity_timesync_s {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
    char *_field5;
    struct timeval _field6;
    struct timezone _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned char _field10[16];
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    unsigned char _field14;
};

struct os_activity_transition_s {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
    char *_field5;
    struct timeval _field6;
    struct timezone _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned long long _field10;
};

struct os_activity_useraction_s {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
    char *_field5;
    struct timeval _field6;
    struct timezone _field7;
    unsigned int _field8;
    unsigned int _field9;
    char *_field10;
    BOOL _field11;
};

struct os_log_message_s {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
    char *_field5;
    struct timeval _field6;
    struct timezone _field7;
    unsigned int _field8;
    unsigned int _field9;
    char *_field10;
    char *_field11;
    unsigned long long _field12;
    char *_field13;
    unsigned long long _field14;
    char *_field15;
    char *_field16;
    unsigned int _field17;
    unsigned char _field18;
    BOOL _field19;
};

struct os_procinfo_map_s;

struct os_timesync_header_s {
    unsigned short _field1;
    unsigned short _field2;
    unsigned int _field3;
};

struct os_timesync_range_s {
    struct os_trace_uuid_map_s *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned char _field4[0][16];
};

struct os_timesync_time_entry_s {
    struct os_timesync_header_s _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    struct timezone _field4;
};

struct os_trace_blob_s {
    union {
        char *ob_b;
        void *ob_v;
        char *ob_s;
        char *ob_c;
    } ;
    unsigned int ob_len;
    unsigned int ob_size;
    unsigned int ob_maxsize;
    unsigned short ob_flags;
    BOOL ob_binary;
};

struct os_trace_message_s {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
    char *_field5;
    struct timeval _field6;
    struct timezone _field7;
    unsigned int _field8;
    unsigned int _field9;
    char *_field10;
    void *_field11;
    unsigned long long _field12;
    id _field13;
};

struct os_trace_str_map_s;

struct os_trace_uuid_map_s;

struct subchunk_queue_t {
    struct catalog_subchunk_s *_field1;
    struct catalog_subchunk_s **_field2;
};

struct timeval {
    long long tv_sec;
    int tv_usec;
};

struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
};

struct tracev3_chunk_catalog_s {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned char _field5[0];
};

struct tracev3_chunk_catalog_v2_s {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5;
    unsigned short _field6[3];
    unsigned long long _field7;
    unsigned char _field8[0];
};

struct tracev3_chunk_firehose_old_s {
    unsigned long long _field1;
    int _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5[0];
};

struct tracev3_chunk_firehose_s {
    unsigned long long _field1;
    unsigned int _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5[2];
    unsigned char _field6[0];
};

struct tracev3_chunk_header_s {
    struct mach_timebase_info _field1;
    unsigned long long _field2;
    long long _field3;
    int _field4;
    int _field5;
    int _field6;
    unsigned int _field7;
    struct tracev3_subchunk_preamble_s _field8;
    struct tracev3_subchunk_continuous_s _field9;
    struct tracev3_subchunk_preamble_s _field10;
    struct tracev3_subchunk_systeminfo_s _field11;
    struct tracev3_subchunk_preamble_s _field12;
    struct tracev3_subchunk_generation_s _field13;
    struct tracev3_subchunk_preamble_s _field14;
    struct tracev3_subchunk_timezone_s _field15;
};

struct tracev3_chunk_log_preamble_s {
    unsigned long long _field1;
    unsigned int _field2;
    unsigned char _field3;
    unsigned char _field4[3];
};

struct tracev3_chunk_oversize_old_s {
    unsigned long long _field1;
    unsigned int _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned char _field5[0];
};

struct tracev3_chunk_oversize_s {
    unsigned long long _field1;
    unsigned int _field2;
    unsigned char _field3;
    unsigned char _field4[3];
    unsigned long long _field5;
    unsigned int _field6;
    unsigned short _field7;
    unsigned short _field8;
    unsigned char _field9[0];
};

struct tracev3_chunk_preamble_s {
    unsigned int _field1;
    unsigned int _field2;
    unsigned long long _field3;
};

struct tracev3_chunk_s {
    struct tracev3_chunk_preamble_s _field1;
    union {
        struct tracev3_chunk_header_s _field1;
        struct tracev3_chunk_catalog_s _field2;
        struct tracev3_chunk_catalog_v2_s _field3;
        struct tracev3_chunk_log_preamble_s _field4;
        struct tracev3_chunk_firehose_s _field5;
        struct tracev3_chunk_firehose_old_s _field6;
        struct tracev3_chunk_oversize_s _field7;
        struct tracev3_chunk_oversize_old_s _field8;
        struct tracev3_chunk_statedump_s _field9;
        unsigned char _field10[0];
    } _field2;
};

struct tracev3_chunk_statedump_s {
    unsigned long long _field1;
    unsigned int _field2;
    unsigned char _field3;
    unsigned char _field4[3];
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned char _field7[16];
    unsigned char _field8[0];
};

struct tracev3_subchunk_continuous_s {
    unsigned long long _field1;
};

struct tracev3_subchunk_generation_s {
    unsigned char _field1[16];
    int _field2;
    int _field3;
};

struct tracev3_subchunk_preamble_s {
    unsigned int _field1;
    unsigned int _field2;
};

struct tracev3_subchunk_systeminfo_s {
    int _field1;
    int _field2;
    char _field3[16];
    char _field4[32];
};

struct tracev3_subchunk_timezone_s {
    char _field1[48];
};

#pragma mark Typedef'd Structures

typedef struct {
    struct _os_log_index_timeref olim_oldestpersist;
    struct _os_log_index_timeref olim_oldestspecial;
    struct _os_log_index_timeref olim_oldestlive;
    struct _os_log_index_timeref olim_end;
    struct _os_log_index_timeref *olim_oldest;
    struct {
        struct _os_log_index_timeref timeref;
        unsigned char ttl;
    } olim_ttl[5];
} CDStruct_b8fedf57;

