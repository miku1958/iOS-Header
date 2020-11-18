//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class _UIFeedback;

@interface _UIFeedbackParameters : NSObject <NSCopying>
{
    float _volume;
    float _rate;
    float _transposition;
    float _attackTime;
    float _decayTime;
    float _releaseTime;
    _UIFeedback *_feedback;
    _UIFeedbackParameters *_parentParameters;
}

@property (nonatomic) float attackTime; // @synthesize attackTime=_attackTime;
@property (readonly, nonatomic, getter=_isAudio) BOOL audio;
@property (nonatomic) float decayTime; // @synthesize decayTime=_decayTime;
@property (readonly, nonatomic, getter=_effectiveVolume) float effectiveVolume;
@property (weak, nonatomic) _UIFeedback *feedback; // @synthesize feedback=_feedback;
@property (weak, nonatomic) _UIFeedbackParameters *parentParameters; // @synthesize parentParameters=_parentParameters;
@property (nonatomic) float rate; // @synthesize rate=_rate;
@property (nonatomic) float releaseTime; // @synthesize releaseTime=_releaseTime;
@property (nonatomic) float transposition; // @synthesize transposition=_transposition;
@property (nonatomic) float volume; // @synthesize volume=_volume;

+ (id)parameters;
- (void).cxx_destruct;
- (float)_effectiveValueForParameterWithKey:(id)arg1;
- (void)_updateParameterWithKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 feedback:(id)arg2;
- (id)initWithFeedback:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

