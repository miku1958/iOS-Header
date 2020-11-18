//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HMDAudioStreamBitRate, HMDAudioStreamNumAudioChannels, HMDAudioStreamPacketTime, HMDAudioStreamSampleRate;

@interface HMDAudioStreamCodecParameters : NSObject <NSCopying>
{
    HMDAudioStreamNumAudioChannels *_numAudioChannels;
    HMDAudioStreamBitRate *_bitRate;
    HMDAudioStreamSampleRate *_sampleRate;
    HMDAudioStreamPacketTime *_packetTime;
}

@property (strong, nonatomic) HMDAudioStreamBitRate *bitRate; // @synthesize bitRate=_bitRate;
@property (strong, nonatomic) HMDAudioStreamNumAudioChannels *numAudioChannels; // @synthesize numAudioChannels=_numAudioChannels;
@property (strong, nonatomic) HMDAudioStreamPacketTime *packetTime; // @synthesize packetTime=_packetTime;
@property (strong, nonatomic) HMDAudioStreamSampleRate *sampleRate; // @synthesize sampleRate=_sampleRate;

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (id)initWithNumAudioChannels:(id)arg1 bitRate:(id)arg2 sampleRate:(id)arg3 packetTime:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)parseFromData:(id)arg1 error:(id *)arg2;
- (id)serializeWithError:(id *)arg1;

@end

