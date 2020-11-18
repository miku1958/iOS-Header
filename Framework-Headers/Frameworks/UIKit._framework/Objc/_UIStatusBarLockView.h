//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/CAAnimationDelegate-Protocol.h>
#import <UIKitCore/_UIStatusBarDisplayable-Protocol.h>

@class NSString, UIAccessibilityHUDItem, _UIStatusBarImageView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarLockView : UIView <CAAnimationDelegate, _UIStatusBarDisplayable>
{
    _UIStatusBarImageView *_bodyView;
    _UIStatusBarImageView *_shackleView;
    CDUnknownBlockType _completionBlock;
}

@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (strong, nonatomic) _UIStatusBarImageView *bodyView; // @synthesize bodyView=_bodyView;
@property (copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long overriddenVerticalAlignment;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (strong, nonatomic) _UIStatusBarImageView *shackleView; // @synthesize shackleView=_shackleView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsCrossfade;

- (void).cxx_destruct;
- (void)animateUnlockWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)applyStyleAttributes:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)jiggleWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)resetLock;

@end
