//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface _UIDynamicAnimation : NSObject
{
    CDUnknownBlockType _completion;
    int _state;
    unsigned int _began:1;
    unsigned int _running:1;
    unsigned int _yield:1;
    unsigned int _grouped:1;
    unsigned int _usesNSTimer:1;
}

@property (readonly, nonatomic) int state;

+ (void)_updateAnimations:(id)arg1;
+ (void)_updateAnimations:(id)arg1 timer:(id)arg2;
+ (void)_updateAnimationsWithTimer:(id)arg1;
+ (id)dynamicAnimationForView:(id)arg1 withInitialValue:(double)arg2 velocity:(double)arg3 type:(int)arg4 anchorPoint:(struct CGPoint)arg5;
- (BOOL)_animateForInterval:(double)arg1;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2;
- (void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2;
- (void)_callAppliers:(CDUnknownBlockType)arg1 additionalEndAppliers:(CDUnknownBlockType)arg2 done:(BOOL)arg3;
- (void)_cancelWithAppliers:(CDUnknownBlockType)arg1;
- (BOOL)_isGrouped;
- (BOOL)_isRunning;
- (void)_setGrouped:(BOOL)arg1;
- (void)_setShouldYield:(BOOL)arg1;
- (void)_setUsesNSTimer:(BOOL)arg1;
- (BOOL)_shouldYield;
- (void)_stopAnimation;
- (BOOL)_usesNSTimer;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)runWithCompletion:(CDUnknownBlockType)arg1;
- (void)runWithCompletion:(CDUnknownBlockType)arg1 forScreen:(id)arg2 runLoopMode:(id)arg3;
- (void)stop;

@end
