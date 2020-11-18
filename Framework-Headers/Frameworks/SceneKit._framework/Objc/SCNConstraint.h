//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimatable-Protocol.h>

@class NSArray, NSString, SCNOrderedDictionary;

@interface SCNConstraint : NSObject <NSCopying, NSSecureCoding, SCNAnimatable>
{
    struct __C3DConstraint *_constraintRef;
    SCNOrderedDictionary *_animations;
    BOOL _enabled;
    double _influenceFactor;
}

@property (readonly) NSArray *animationKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double influenceFactor;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (const void *)__CFObject;
- (BOOL)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2;
- (void)_syncObjCAnimations;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (struct __C3DAnimationManager *)animationManager;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (struct __C3DConstraint *)constraintRef;
- (id)copy;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)finalizeDecodeConstraint:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAnimationForKeyPaused:(id)arg1;
- (BOOL)isEnabled;
- (BOOL)isPausedOrPausedByInheritance;
- (id)name;
- (void)pauseAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (void)setConstraintRef:(struct __C3DConstraint *)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)unbindAnimatablePath:(id)arg1;

@end

