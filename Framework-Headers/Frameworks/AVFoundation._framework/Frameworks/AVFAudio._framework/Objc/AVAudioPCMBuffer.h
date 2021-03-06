//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFAudio/AVAudioBuffer.h>

@class NSArray;

@interface AVAudioPCMBuffer : AVAudioBuffer
{
}

@property (readonly, nonatomic) NSArray *averagePowerPerChannel;
@property (readonly, nonatomic) float **floatChannelData;
@property (readonly, nonatomic) unsigned int frameCapacity;
@property (nonatomic) unsigned int frameLength;
@property (readonly, nonatomic) short **int16ChannelData;
@property (readonly, nonatomic) int **int32ChannelData;
@property (readonly, nonatomic) NSArray *peakPowerPerChannel;
@property (readonly, nonatomic) unsigned long long stride;

- (void)_initChannelPtrs;
- (BOOL)appendDataFromBuffer:(id)arg1;
- (BOOL)appendDataFromBuffer:(id)arg1 channel:(long long)arg2;
- (id)calculatePower:(unsigned long long)arg1;
- (float)calculatePower:(unsigned long long)arg1 forFloatData:(float *)arg2 stride:(long long)arg3 frameLength:(unsigned int)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPCMFormat:(id)arg1 frameCapacity:(unsigned int)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setByteLength:(unsigned int)arg1;
- (id)splitIntoSingleChannelBuffers;

@end

