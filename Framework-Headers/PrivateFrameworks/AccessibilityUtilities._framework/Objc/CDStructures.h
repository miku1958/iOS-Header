//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AXLogColorTheme {
    long long errorColor;
    long long warningColor;
    long long infoColor;
    long long debugColor;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct MIDIIOErrorNotification {
    int _field1;
    unsigned int _field2;
    unsigned int _field3;
    int _field4;
};

struct MIDIObjectAddRemoveNotification {
    int _field1;
    unsigned int _field2;
    unsigned int _field3;
    int _field4;
    unsigned int _field5;
    int _field6;
};

struct MIDIObjectPropertyChangeNotification {
    int _field1;
    unsigned int _field2;
    unsigned int _field3;
    int _field4;
    struct __CFString *_field5;
};

struct MIDIPacket {
    unsigned long long _field1;
    unsigned short _field2;
    unsigned char _field3[256];
};

struct MIDIPacketList {
    unsigned int _field1;
    struct MIDIPacket _field2[1];
};

struct NSString {
    Class _field1;
};

struct _AXEventDataStorage {
    long long eventSenderIdentifier;
};

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

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned int _field1[2];
} CDStruct_52eb0d21;

typedef struct {
    unsigned int val[8];
} CDStruct_4c969caf;

typedef struct {
    int _field1;
    float _field2;
} CDStruct_3a8d9e70;

typedef struct {
    short _field1;
    int _field2;
} CDStruct_6d9e24e6;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    float _field4;
    float _field5;
    struct CGPoint _field6;
    unsigned int _field7;
    void *_field8;
} CDStruct_723b0d29;

typedef struct {
    int _field1;
    int _field2;
    struct CGPoint _field3;
    struct CGPoint _field4;
    unsigned int _field5;
    unsigned long long _field6;
    void *_field7;
    int _field8;
    int _field9;
    unsigned int _field10;
    unsigned char _field11[0];
} CDStruct_7f3c0925;

typedef struct {
    int _field1;
    unsigned short _field2;
    unsigned short _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
    CDStruct_723b0d29 _field13[0];
} CDStruct_f2c5c900;

