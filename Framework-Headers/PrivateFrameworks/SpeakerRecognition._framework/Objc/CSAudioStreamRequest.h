//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSAudioRecordContext;
@protocol OS_xpc_object;

@interface CSAudioStreamRequest : NSObject
{
    BOOL _requiresHistoricalBuffer;
    BOOL _useCustomizedRecordSettings;
    BOOL _lpcmIsFloat;
    BOOL _isSiri;
    unsigned int _lpcmBitDepth;
    unsigned int _numberOfChannels;
    unsigned int _encoderBitRate;
    CSAudioRecordContext *_recordContext;
    long long _audioFormat;
    double _sampleRate;
}

@property (nonatomic) long long audioFormat; // @synthesize audioFormat=_audioFormat;
@property (nonatomic) unsigned int encoderBitRate; // @synthesize encoderBitRate=_encoderBitRate;
@property (nonatomic) BOOL isSiri; // @synthesize isSiri=_isSiri;
@property (nonatomic) unsigned int lpcmBitDepth; // @synthesize lpcmBitDepth=_lpcmBitDepth;
@property (nonatomic) BOOL lpcmIsFloat; // @synthesize lpcmIsFloat=_lpcmIsFloat;
@property (nonatomic) unsigned int numberOfChannels; // @synthesize numberOfChannels=_numberOfChannels;
@property (strong, nonatomic) CSAudioRecordContext *recordContext; // @synthesize recordContext=_recordContext;
@property (nonatomic) BOOL requiresHistoricalBuffer; // @synthesize requiresHistoricalBuffer=_requiresHistoricalBuffer;
@property (nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
@property (nonatomic) BOOL useCustomizedRecordSettings; // @synthesize useCustomizedRecordSettings=_useCustomizedRecordSettings;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;

+ (id)defaultRequestWithContext:(id)arg1;
+ (id)requestForLpcmRecordSettingsWithContext:(id)arg1;
+ (id)requestForOpusRecordSettingsWithContext:(id)arg1;
+ (id)requestForSpeexRecordSettingsWithContext:(id)arg1;
- (void).cxx_destruct;
- (id)initWithXPCObject:(id)arg1;

@end

