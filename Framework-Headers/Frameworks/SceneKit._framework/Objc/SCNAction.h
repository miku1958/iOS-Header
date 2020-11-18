//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>

@interface SCNAction : NSObject <NSCopying, NSSecureCoding>
{
    struct SCNCAction *_caction;
}

@property (nonatomic) double duration;
@property (nonatomic) double speed;
@property (nonatomic) CDUnknownBlockType timingFunction;
@property (nonatomic) long long timingMode;

+ (id)actionNamed:(id)arg1;
+ (id)customActionWithDuration:(double)arg1 actionBlock:(CDUnknownBlockType)arg2;
+ (BOOL)editingModeEnabled;
+ (id)fadeInWithDuration:(double)arg1;
+ (id)fadeOpacityBy:(double)arg1 duration:(double)arg2;
+ (id)fadeOpacityTo:(double)arg1 duration:(double)arg2;
+ (id)fadeOutWithDuration:(double)arg1;
+ (id)group:(id)arg1;
+ (id)hide;
+ (id)javaScriptActionWithScript:(id)arg1 duration:(double)arg2;
+ (id)moveBy:(struct SCNVector3)arg1 duration:(double)arg2;
+ (id)moveByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)moveTo:(struct SCNVector3)arg1 duration:(double)arg2;
+ (id)performSelector:(SEL)arg1 onTarget:(id)arg2;
+ (id)playAudioSource:(id)arg1 waitForCompletion:(BOOL)arg2;
+ (id)removeFromParentNode;
+ (id)repeatAction:(id)arg1 count:(unsigned long long)arg2;
+ (id)repeatActionForever:(id)arg1;
+ (id)rotateByAngle:(double)arg1 aroundAxis:(struct SCNVector3)arg2 duration:(double)arg3;
+ (id)rotateByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)rotateToAxisAngle:(struct SCNVector4)arg1 duration:(double)arg2;
+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 shortestUnitArc:(BOOL)arg5;
+ (id)runAction:(id)arg1 onChildNodeWithName:(id)arg2;
+ (id)runBlock:(CDUnknownBlockType)arg1;
+ (id)runBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
+ (id)scaleBy:(double)arg1 duration:(double)arg2;
+ (id)scaleTo:(double)arg1 duration:(double)arg2;
+ (id)sequence:(id)arg1;
+ (void)setEditingModeEnabled:(BOOL)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)unhide;
+ (id)waitForDuration:(double)arg1;
+ (id)waitForDuration:(double)arg1 withRange:(double)arg2;
- (struct SCNCAction *)caction;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (double)durationRange;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)finished;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCustom;
- (BOOL)isRelative;
- (id)parameters;
- (double)ratioForTime:(double)arg1;
- (id)reversedAction;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setCppAction:(void *)arg1;
- (void)setDurationRange:(double)arg1;
- (void)setFinished:(BOOL)arg1;
- (void)setKey:(id)arg1;
- (void)timeJumpWithTarget:(id)arg1 timeOffset:(double)arg2;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (void)wasAddedToTarget:(id)arg1 atTime:(double)arg2;
- (void)wasPausedWithTarget:(id)arg1 atTime:(double)arg2;
- (void)wasRemovedFromTarget:(id)arg1 atTime:(double)arg2;
- (void)willResumeWithTarget:(id)arg1 atTime:(double)arg2;
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;

@end
