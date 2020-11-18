//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VCAudioPayload : NSObject
{
    struct SoundDec_t *encoder;
    int payload;
    unsigned int _codecSamplesPerFrame;
    unsigned int blockSize;
    unsigned int _codecSampleRate;
    unsigned int _inputSampleRate;
    double _srcRatio;
    unsigned int ttyBlockSize;
    unsigned int encodedBytesPerFrame;
    unsigned int bundleHeaderBytes;
    unsigned int bitrate;
    NSArray *supportedBitrates;
    BOOL canBundle;
    BOOL canSetBitrate;
    BOOL forcingBitrate;
    BOOL useSBR;
    BOOL shouldReset;
    BOOL shouldLimitMaxPacketSize;
    BOOL dtxEnabled;
    BOOL payloadOctetAligned;
    int format;
    unsigned int internalBundleFactor;
}

@property (readonly, nonatomic) unsigned int bitrate; // @synthesize bitrate;
@property (readonly, nonatomic) unsigned int blockSize; // @synthesize blockSize;
@property (readonly, nonatomic) unsigned int bundleHeaderBytes; // @synthesize bundleHeaderBytes;
@property (readonly, nonatomic) BOOL canBundle; // @synthesize canBundle;
@property (nonatomic) BOOL dtxEnabled; // @synthesize dtxEnabled;
@property (readonly, nonatomic) unsigned int encodedBytesPerFrame; // @synthesize encodedBytesPerFrame;
@property (readonly, nonatomic) int payload; // @synthesize payload;
@property (nonatomic) BOOL payloadOctetAligned; // @synthesize payloadOctetAligned;
@property (nonatomic) unsigned int sampleRate; // @synthesize sampleRate=_codecSampleRate;
@property (readonly, nonatomic) unsigned int samplesPerFrame;
@property (readonly, nonatomic) NSArray *supportedBitrates; // @synthesize supportedBitrates;
@property (readonly, nonatomic) BOOL useCookie;
@property (nonatomic) BOOL useSBR; // @synthesize useSBR;

+ (unsigned int)blockSizeForPayload:(int)arg1;
+ (BOOL)isPayloadSupported:(int)arg1;
- (unsigned int)aacBitrate;
- (BOOL)createEncoderWithInputFormat:(struct AudioStreamBasicDescription *)arg1;
- (void)createSupportedBitrates;
- (void)createSupportedBitratesForAACELD;
- (void)createSupportedBitratesForAMR16k;
- (void)createSupportedBitratesForAMR8k;
- (void)createSupportedBitratesForOpus;
- (void)dealloc;
- (int)encodeAudio:(void *)arg1 numInputBytes:(int)arg2 outputBytes:(void *)arg3 numOutputBytes:(int)arg4;
- (unsigned int)flags;
- (BOOL)getMagicCookie:(char *)arg1 withLength:(unsigned int *)arg2;
- (id)initWithPayload:(int)arg1 blockSize:(unsigned int)arg2;
- (BOOL)isDtxEmptyPacket:(unsigned int)arg1;
- (float)qualityForBitRate:(unsigned int)arg1;
- (void)resetEncoder;
- (void)resetEncoderWithSampleBuffer:(char *)arg1 numBytes:(int)arg2;
- (BOOL)setBitrate:(unsigned int)arg1;
- (void)setInputSampleRate:(unsigned int)arg1;
- (void)setInternalBundleSamples:(unsigned int)arg1;
- (BOOL)setupEncodeProperties;
- (BOOL)setupInputProperties;

@end
