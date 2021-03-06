//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIKeyboardKeyplaneTransition.h>

#import <UIKitCore/CAAnimationDelegate-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardKeySwipeTransition : UIKeyboardKeyplaneTransition <CAAnimationDelegate>
{
    BOOL _disableMeshOptimization;
    NSArray *_startKeysOrdered;
    NSArray *_endKeysOrdered;
    NSArray *_startGeometries;
    NSArray *_transitionKeys;
    NSArray *_keyInfos;
    double _previousProgress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableMeshOptimization; // @synthesize disableMeshOptimization=_disableMeshOptimization;
@property (strong, nonatomic) NSArray *endKeysOrdered; // @synthesize endKeysOrdered=_endKeysOrdered;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *keyInfos; // @synthesize keyInfos=_keyInfos;
@property (nonatomic) double previousProgress; // @synthesize previousProgress=_previousProgress;
@property (strong, nonatomic) NSArray *startGeometries; // @synthesize startGeometries=_startGeometries;
@property (strong, nonatomic) NSArray *startKeysOrdered; // @synthesize startKeysOrdered=_startKeysOrdered;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSArray *transitionKeys; // @synthesize transitionKeys=_transitionKeys;

- (void)_runOpacityAnimation;
- (void)_runTransformAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)commitTransitionRebuild;
- (void)dealloc;
- (void)gatherTransitionKeys;
- (struct CGRect)keyRectForFrame:(struct CGRect)arg1 normalizedSubRect:(struct CGRect)arg2;
- (id)meshTransformForKeyplane:(id)arg1 forward:(BOOL)arg2 initial:(BOOL)arg3;
- (double)nonInteractiveDuration;
- (void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4;
- (void)removeAllAnimations;
- (void)runNonInteractivelyWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateWithProgress:(double)arg1;

@end

