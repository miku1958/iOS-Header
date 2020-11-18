//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AXMAudioDataSource : NSObject
{
    BOOL _circular;
    vector_12bd641b *_sampleBuffer;
    unsigned long long _length;
    unsigned long long _currentSampleIndex;
    double _level;
    NSArray *_effectsChain;
    NSString *_name;
    double _sampleRate;
}

@property (nonatomic, getter=isCircular) BOOL circular; // @synthesize circular=_circular;
@property (nonatomic) unsigned long long currentSampleIndex; // @synthesize currentSampleIndex=_currentSampleIndex;
@property (readonly, nonatomic) NSArray *effectsChain; // @synthesize effectsChain=_effectsChain;
@property (nonatomic) unsigned long long length; // @synthesize length=_length;
@property (nonatomic) double level; // @synthesize level=_level;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) vector_12bd641b *sampleBuffer; // @synthesize sampleBuffer=_sampleBuffer;
@property (readonly, nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;

- (void).cxx_destruct;
- (void)addEffectToChain:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1 sampleRate:(double)arg2 circular:(BOOL)arg3;
- (void)normalizeAudio;
- (void)processEffects:(unsigned long long)arg1;
- (void)removeEffectFromChain:(id)arg1;

@end
