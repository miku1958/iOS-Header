//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAKeyframeAnimation.h>

@interface SCN_CAKeyframeAnimation : CAKeyframeAnimation
{
    struct __C3DKeyframedAnimation *_c3dAnimation;
    BOOL _caReady;
}

- (void)_clearC3DCache;
- (void)_convertToCA;
- (BOOL)additive;
- (id)animationEvents;
- (BOOL)autoreverses;
- (id)biasValues;
- (struct __C3DKeyframedAnimation *)c3dAnimation;
- (BOOL)commitsOnCompletion;
- (id)continuityValues;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)cumulative;
- (void)dealloc;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (double)fadeInDuration;
- (double)fadeOutDuration;
- (id)fillMode;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAdditive;
- (BOOL)isCumulative;
- (BOOL)isRemovedOnCompletion;
- (id)keyPath;
- (id)keyTimes;
- (float)repeatCount;
- (double)repeatDuration;
- (void)setAdditive:(BOOL)arg1;
- (void)setAnimationEvents:(id)arg1;
- (void)setAutoreverses:(BOOL)arg1;
- (void)setBiasValues:(id)arg1;
- (void)setC3dAnimation:(struct __C3DKeyframedAnimation *)arg1;
- (void)setCommitsOnCompletion:(BOOL)arg1;
- (void)setContinuityValues:(id)arg1;
- (void)setCumulative:(BOOL)arg1;
- (void)setDuration:(double)arg1;
- (void)setFadeInDuration:(double)arg1;
- (void)setFadeOutDuration:(double)arg1;
- (void)setFillMode:(id)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setKeyTimes:(id)arg1;
- (void)setRemovedOnCompletion:(BOOL)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setRepeatDuration:(double)arg1;
- (void)setSpeed:(float)arg1;
- (void)setTensionValues:(id)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setTimingFunction:(id)arg1;
- (void)setTimingFunctions:(id)arg1;
- (void)setUsesSceneTimeBase:(BOOL)arg1;
- (void)setValues:(id)arg1;
- (float)speed;
- (id)tensionValues;
- (double)timeOffset;
- (id)timingFunction;
- (id)timingFunctions;
- (BOOL)usesSceneTimeBase;
- (id)values;

@end

