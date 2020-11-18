//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIDragSetDownItemAnimationDelegate-Protocol.h>

@class CADisplayLink, NSArray, NSString, UIViewPropertyAnimator, UIWindow, _UIDragSetDownAnimationWindow;

@interface _UIDragSetDownAnimation : NSObject <_UIDragSetDownItemAnimationDelegate>
{
    NSArray *_itemAnimations;
    CDUnknownBlockType _completion;
    BOOL _hasBegun;
    _UIDragSetDownAnimationWindow *_window;
    CADisplayLink *_displayLink;
    UIViewPropertyAnimator *_remainingItemsPropertyAnimator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIWindow *window;

+ (CDUnknownBlockType)defaultDropAnimationForPlatterView:(id)arg1;
+ (CDUnknownBlockType)defaultMultiItemAnimationForPlatterView:(id)arg1;
+ (id)defaultSetDownPropertyAnimator;
+ (CDUnknownBlockType)defaultSingleItemAnimationForPlatterView:(id)arg1;
- (void).cxx_destruct;
- (void)_allItemAnimationsCompleted;
- (void)begin;
- (id)initWithVisibleDroppedItems:(id)arg1 items:(id)arg2 forSource:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)itemAnimationCompleted:(id)arg1;
- (void)itemAnimationReachedTarget:(id)arg1;
- (void)updateInFlightAnimationTick:(id)arg1;
- (void)updateTargetedDragPreview:(id)arg1 forDragItem:(id)arg2;
- (void)updateVisibleDroppedItems:(id)arg1;

@end

