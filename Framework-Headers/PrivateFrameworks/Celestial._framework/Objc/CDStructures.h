//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AVControllerPrivate {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    Class _field6;
    id _field7;
    long long _field8;
    long long _field9;
    float _field10;
    float _field11;
    long long _field12;
    BOOL _field13;
    id _field14;
    float _field15;
    struct __CFString *_field16;
    id _field17;
    BOOL _field18;
    BOOL _field19;
    BOOL _field20;
    id _field21;
    struct OpaqueFigVisualContext *_field22;
    id _field23;
    struct __CFRunLoop *_field24;
    unsigned long long _field25;
    int _field26;
    int _field27;
    int _field28;
    BOOL _field29;
    BOOL _field30;
    BOOL _field31;
    BOOL _field32;
    id _field33;
    struct OpaqueFigPlayer *_field34;
    id _field35;
    id _field36;
    id _field37;
    BOOL _field38;
    BOOL _field39;
    id _field40;
    id _field41;
    BOOL _field42;
    BOOL _field43;
    BOOL _field44;
    int _field45;
    BOOL _field46;
};

struct AVFileValidatorPrivate {
    id _field1;
    id _field2;
    struct FigOpaqueMediaValidator *_field3;
    struct FigMediaValidatorDataLocation _field4;
    struct OpaqueCMByteStream *_field5;
    BOOL _field6;
    BOOL _field7;
    id _field8;
};

struct AVItemPrivate {
    id _field1;
    id _field2;
    double _field3;
    float _field4;
    float _field5;
    float _field6;
    unsigned long long _field7;
    BOOL _field8;
    BOOL _field9;
    id _field10;
    long long _field11;
    long long _field12;
    long long _field13;
    BOOL _field14;
    id _field15;
    id _field16;
    BOOL _field17;
    BOOL _field18;
    id _field19;
    id _field20;
    struct OpaqueFigThread *_field21;
    struct OpaqueCMByteStream *_field22;
    int _field23;
    id _field24;
    id _field25;
};

struct AVRecorderPrivate {
    id _field1;
    id _field2;
};

struct AVSystemControllerPrivate {
    BOOL _field1;
    BOOL _field2;
    float _field3;
    id _field4;
    struct OpaqueFigPlayer *_field5;
};

struct AudioQueueBuffer {
    unsigned int _field1;
    void *_field2;
    unsigned int _field3;
    void *_field4;
    unsigned int _field5;
    struct AudioStreamPacketDescription *_field6;
    unsigned int _field7;
};

struct AudioQueueLevelMeterState {
    float _field1;
    float _field2;
};

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct AudioStreamPacketDescription {
    long long _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct AudioTimeStamp {
    double _field1;
    unsigned long long _field2;
    double _field3;
    unsigned long long _field4;
    struct SMPTETime _field5;
    unsigned int _field6;
    unsigned int _field7;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct FigMediaValidatorDataLocation {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct FigOpaqueMediaValidator;

struct OpaqueCMByteStream;

struct OpaqueFigPlayer;

struct OpaqueFigThread;

struct OpaqueFigVisualContext;

struct SMPTETime {
    short _field1;
    short _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    short _field6;
    short _field7;
    short _field8;
    short _field9;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

