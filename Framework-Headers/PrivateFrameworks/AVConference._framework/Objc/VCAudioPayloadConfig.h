//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VCAudioPayloadConfig : NSObject
{
    int _payload;
    int _format;
    unsigned int _blockSize;
    unsigned int _codecSampleRate;
    unsigned int _inputSampleRate;
    unsigned int _codecSamplesPerFrame;
    unsigned int _inputSamplesPerFrame;
    unsigned int _internalBundleFactor;
    unsigned int _bundleHeaderBytes;
    NSArray *_supportedBitrates;
    unsigned int _bitrate;
    BOOL _forcingBitrate;
    BOOL _useSBR;
    BOOL _isDTXEnabled;
    unsigned int _evsSIDPeriod;
    BOOL _payloadOctetAligned;
}

@property (readonly, nonatomic) unsigned int bitrate; // @synthesize bitrate=_bitrate;
@property (readonly, nonatomic) unsigned int blockSize; // @synthesize blockSize=_blockSize;
@property (readonly, nonatomic) unsigned int bundleHeaderBytes; // @synthesize bundleHeaderBytes=_bundleHeaderBytes;
@property (readonly, nonatomic) unsigned int codecSampleRate; // @synthesize codecSampleRate=_codecSampleRate;
@property (readonly, nonatomic) unsigned int evsSIDPeriod; // @synthesize evsSIDPeriod=_evsSIDPeriod;
@property (readonly, nonatomic) unsigned int flags;
@property (readonly, nonatomic) BOOL forcingBitrate; // @synthesize forcingBitrate=_forcingBitrate;
@property (readonly, nonatomic) int format; // @synthesize format=_format;
@property (readonly, nonatomic) unsigned int inputSampleRate; // @synthesize inputSampleRate=_inputSampleRate;
@property (readonly, nonatomic) unsigned int internalBundleFactor; // @synthesize internalBundleFactor=_internalBundleFactor;
@property (readonly, nonatomic) BOOL isDTXEnabled; // @synthesize isDTXEnabled=_isDTXEnabled;
@property (readonly, nonatomic) int payload; // @synthesize payload=_payload;
@property (readonly, nonatomic) BOOL payloadOctetAligned; // @synthesize payloadOctetAligned=_payloadOctetAligned;
@property (readonly, nonatomic) unsigned int samplesPerFrame; // @synthesize samplesPerFrame=_inputSamplesPerFrame;
@property (readonly, nonatomic) NSArray *supportedBitrates; // @synthesize supportedBitrates=_supportedBitrates;

- (unsigned int)aacBitrate;
- (id)className;
- (BOOL)configure:(id)arg1;
- (void)createSupportedBitrates;
- (void)createSupportedBitratesForAACELD;
- (void)createSupportedBitratesForAMR16k;
- (void)createSupportedBitratesForAMR8k;
- (void)createSupportedBitratesForEVS;
- (void)createSupportedBitratesForOpus;
- (void)dealloc;
- (id)description;
- (id)initWithConfigDict:(id)arg1;
- (float)qualityForBitRate:(unsigned int)arg1;
- (void)setUseSBR:(BOOL)arg1;
- (void)setupEncodeProperties:(id)arg1;

@end

