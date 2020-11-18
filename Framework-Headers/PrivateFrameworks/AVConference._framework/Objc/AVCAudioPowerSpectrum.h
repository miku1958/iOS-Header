//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray;

@interface AVCAudioPowerSpectrum : NSObject <NSSecureCoding>
{
    float _minFrequency;
    float _maxFrequency;
    NSMutableArray *_channels;
    long long _sourceType;
}

@property (readonly, nonatomic) NSArray *channels; // @synthesize channels=_channels;
@property (readonly, nonatomic) float maxFrequency; // @synthesize maxFrequency=_maxFrequency;
@property (readonly, nonatomic) float minFrequency; // @synthesize minFrequency=_minFrequency;
@property (readonly, nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;

+ (BOOL)supportsSecureCoding;
- (void)applyChannelBins:(struct _VCAudioPowerSpectrumEntry *)arg1 binCount:(unsigned int)arg2 channelID:(unsigned short)arg3;
- (void)checkNumChannels:(unsigned short)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
