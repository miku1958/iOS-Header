//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct MTLCompressedPixelFormatInfo {
    unsigned long long blockBytes;
    unsigned long long blockWidth;
    unsigned long long blockHeight;
    unsigned long long blockDepth;
};

struct MTLNormalPixelFormatInfo {
    unsigned long long pixelBytes;
    unsigned char componentCount;
    unsigned char alignment;
    unsigned long long pixelBytesRender;
    unsigned long long pixelBytesRenderMSAA;
};

struct MTLPixelFormatInfo {
    char *name;
    unsigned int flags;
    unsigned long long castClass;
    union {
        struct MTLNormalPixelFormatInfo normal;
        struct MTLCompressedPixelFormatInfo compressed;
    } type;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    double red;
    double green;
    double blue;
    double alpha;
} CDStruct_3ead2808;

typedef struct {
    CDStruct_14f26992 _field1;
    CDStruct_14f26992 _field2;
} CDStruct_4c83c94d;

