//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

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
    double _field1;
    double _field2;
};

struct OpaqueFigPlayer;

struct OpaqueFigSubtitleCALayerInternal {
    struct OpaqueFigPlayer *_field1;
    id _field2;
    unsigned char _field3;
    unsigned char _field4;
    struct CGRect _field5;
    unsigned char _field6;
    struct CGSize _field7;
    unsigned char _field8;
    unsigned char _field9;
    struct CGRect _field10;
    struct CGSize _field11;
    unsigned char _field12;
    id _field13;
    struct OpaqueFigSubtitleRenderer *_field14;
    struct __CFDictionary *_field15;
    unsigned char _field16;
    unsigned char _field17;
    struct __CFDictionary *_field18;
    struct __CFArray *_field19;
    struct __CFArray *_field20;
    struct CGRect _field21;
    struct CGRect _field22;
    unsigned char _field23;
    BOOL _field24;
    unsigned char _field25;
};

struct OpaqueFigSubtitleRenderer;

struct OpaqueFigSubtitleWebVTTCueCALayerInternal {
    id _field1;
    id _field2;
    struct OpaqueFigSubtitleRenderer *_field3;
    struct CGRect _field4;
    struct __CFAttributedString *_field5;
    unsigned char _field6;
};

struct OpaqueFigSubtitleWebVTTRegionCALayerInternal {
    id _field1;
    id _field2;
    struct OpaqueFigSubtitleRenderer *_field3;
    struct CGRect _field4;
    struct __CFDictionary *_field5;
    struct __CFArray *_field6;
    unsigned int _field7;
};

struct __CFArray;

struct __CFDictionary;
