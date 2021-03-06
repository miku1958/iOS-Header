//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class HAPAudioCodecBitRateWrapper, HAPAudioCodecSampleRateWrapper, HAPTLVUnsignedNumberValue, NSString;

@interface HAPAudioStreamCodecParameters : NSObject <NSCopying, HAPTLVProtocol>
{
    HAPTLVUnsignedNumberValue *_numAudioChannels;
    HAPAudioCodecBitRateWrapper *_bitRate;
    HAPAudioCodecSampleRateWrapper *_sampleRate;
    HAPTLVUnsignedNumberValue *_packetTime;
}

@property (strong, nonatomic) HAPAudioCodecBitRateWrapper *bitRate; // @synthesize bitRate=_bitRate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HAPTLVUnsignedNumberValue *numAudioChannels; // @synthesize numAudioChannels=_numAudioChannels;
@property (strong, nonatomic) HAPTLVUnsignedNumberValue *packetTime; // @synthesize packetTime=_packetTime;
@property (strong, nonatomic) HAPAudioCodecSampleRateWrapper *sampleRate; // @synthesize sampleRate=_sampleRate;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithNumAudioChannels:(id)arg1 bitRate:(id)arg2 sampleRate:(id)arg3 packetTime:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)parseFromData:(id)arg1 error:(id *)arg2;
- (id)serializeWithError:(id *)arg1;

@end

