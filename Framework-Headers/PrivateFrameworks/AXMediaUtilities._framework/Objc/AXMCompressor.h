//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMAudioEffect.h>

@interface AXMCompressor : AXMAudioEffect
{
    double _attackMS;
    double _releaseMS;
    double _compressionRatio;
    double _gain;
    double _threshold;
    double _sampleRate;
    double _ratio;
    double _gainReduction;
    double _engagement;
    unsigned long long _emaSamples;
    double _ema;
}

@property (nonatomic) double attackMS; // @synthesize attackMS=_attackMS;
@property (nonatomic) double compressionRatio; // @synthesize compressionRatio=_compressionRatio;
@property (nonatomic) double ema; // @synthesize ema=_ema;
@property (nonatomic) unsigned long long emaSamples; // @synthesize emaSamples=_emaSamples;
@property (nonatomic) double engagement; // @synthesize engagement=_engagement;
@property (nonatomic) double gain; // @synthesize gain=_gain;
@property (nonatomic) double gainReduction; // @synthesize gainReduction=_gainReduction;
@property (nonatomic) double ratio; // @synthesize ratio=_ratio;
@property (nonatomic) double releaseMS; // @synthesize releaseMS=_releaseMS;
@property (nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
@property (nonatomic) double threshold; // @synthesize threshold=_threshold;

+ (id)compressor;
+ (id)limiter;
- (id)initWithAttack:(double)arg1 release:(double)arg2 compressionRatio:(double)arg3 threshold:(double)arg4 sampleRate:(double)arg5;
- (void)processSamples:(unsigned long long)arg1;

@end
