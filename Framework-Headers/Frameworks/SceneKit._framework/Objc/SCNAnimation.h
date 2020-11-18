//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimation-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, SCNTimingFunction;

@interface SCNAnimation : NSObject <SCNAnimation, NSCopying, NSSecureCoding>
{
    struct __C3DAnimation *_animationRef;
    NSString *_keyPath;
    double _duration;
    double _repeatCount;
    double _timeOffset;
    double _beginTime;
    BOOL _autoreverses;
    BOOL _removedOnCompletion;
    BOOL _applyOnCompletion;
    BOOL _additive;
    BOOL _cumulative;
    BOOL _usesSceneTimeBase;
    BOOL _fillForward;
    BOOL _fillBackward;
    SCNTimingFunction *_timingFunction;
    NSArray *_animationEvents;
    double _fadeInDuration;
    double _fadeOutDuration;
    CDUnknownBlockType _animationDidStart;
    CDUnknownBlockType _animationDidStop;
    NSMutableDictionary *_userInfo;
    id _caAnimationCache;
    id _userAnimation;
    BOOL _didMutate;
}

@property (nonatomic, getter=isAdditive) BOOL additive;
@property (copy, nonatomic) CDUnknownBlockType animationDidStart;
@property (copy, nonatomic) CDUnknownBlockType animationDidStop;
@property (copy, nonatomic) NSArray *animationEvents;
@property (nonatomic, getter=isAppliedOnCompletion) BOOL appliedOnCompletion;
@property (nonatomic) BOOL autoreverses;
@property (nonatomic) double blendInDuration;
@property (nonatomic) double blendOutDuration;
@property (nonatomic, getter=isCumulative) BOOL cumulative;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic) BOOL fillsBackward;
@property (nonatomic) BOOL fillsForward;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *keyPath;
@property (nonatomic, getter=isRemovedOnCompletion) BOOL removedOnCompletion;
@property (nonatomic) double repeatCount;
@property (nonatomic) double startDelay;
@property (readonly) Class superclass;
@property (nonatomic) double timeOffset;
@property (strong, nonatomic) SCNTimingFunction *timingFunction;
@property (nonatomic) BOOL usesSceneTimeBase;

+ (id)animationFromScene:(id)arg1;
+ (id)animationNamed:(id)arg1;
+ (id)animationWithC3DAnimation:(struct __C3DAnimation *)arg1;
+ (id)animationWithCAAnimation:(id)arg1;
+ (id)animationWithContentsOfURL:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (const void *)__CFObject;
- (void)_didMutate;
- (void)_setAnimationRef:(struct __C3DAnimation *)arg1;
- (void)_syncObjCModel;
- (struct __C3DAnimation *)animationRef;
- (id)caAnimation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (double)fadeInDuration;
- (double)fadeOutDuration;
- (id)initWithC3DAnimation:(struct __C3DAnimation *)arg1;
- (id)initWithCAAnimation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)prepareWithTarget:(id)arg1 implicitDuration:(double)arg2;
- (double)repeatDuration;
- (void)setFadeInDuration:(double)arg1;
- (void)setFadeOutDuration:(double)arg1;
- (void)setRepeatDuration:(double)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)userAnimation;
- (id)valueForUndefinedKey:(id)arg1;

@end
