//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIStatusBarItemView.h>

#import <UIKitCore/CAAnimationDelegate-Protocol.h>

@class NSString, UIView, _UIExpandingGlyphsView, _UIStatusBarLockItemPadlockView;

__attribute__((visibility("hidden")))
@interface UIStatusBarLockItemView : UIStatusBarItemView <CAAnimationDelegate>
{
    BOOL _alongsideViewIsBecomingVisible;
    int _animationCount;
    UIView *_viewToAnimateAlongside;
    _UIStatusBarLockItemPadlockView *_padlockView;
    UIView *_textClippingView;
    _UIExpandingGlyphsView *_textView;
    double _padlockViewCenterOffsetFromForegroundViewCenter;
    UIView *_timeItemSnapshot;
    double _timeItemSnapshotCenterOffsetFromForegroundViewCenter;
    double _widthNeededDuringAnimation;
    double _widthNeededForFinalState;
    CDUnknownBlockType _animationCompletionBlock;
}

@property (nonatomic) BOOL alongsideViewIsBecomingVisible; // @synthesize alongsideViewIsBecomingVisible=_alongsideViewIsBecomingVisible;
@property (copy, nonatomic) CDUnknownBlockType animationCompletionBlock; // @synthesize animationCompletionBlock=_animationCompletionBlock;
@property (nonatomic) int animationCount; // @synthesize animationCount=_animationCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _UIStatusBarLockItemPadlockView *padlockView; // @synthesize padlockView=_padlockView;
@property (nonatomic) double padlockViewCenterOffsetFromForegroundViewCenter; // @synthesize padlockViewCenterOffsetFromForegroundViewCenter=_padlockViewCenterOffsetFromForegroundViewCenter;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIView *textClippingView; // @synthesize textClippingView=_textClippingView;
@property (strong, nonatomic) _UIExpandingGlyphsView *textView; // @synthesize textView=_textView;
@property (strong, nonatomic) UIView *timeItemSnapshot; // @synthesize timeItemSnapshot=_timeItemSnapshot;
@property (nonatomic) double timeItemSnapshotCenterOffsetFromForegroundViewCenter; // @synthesize timeItemSnapshotCenterOffsetFromForegroundViewCenter=_timeItemSnapshotCenterOffsetFromForegroundViewCenter;
@property (weak, nonatomic) UIView *viewToAnimateAlongside; // @synthesize viewToAnimateAlongside=_viewToAnimateAlongside;
@property (nonatomic) double widthNeededDuringAnimation; // @synthesize widthNeededDuringAnimation=_widthNeededDuringAnimation;
@property (nonatomic) double widthNeededForFinalState; // @synthesize widthNeededForFinalState=_widthNeededForFinalState;

+ (double)lockSlideAnimationDuration;
- (void).cxx_destruct;
- (void)_beginAnimation;
- (void)_endAnimation;
- (BOOL)_isAnimating;
- (id)accessibilityHUDRepresentation;
- (void)animateUnlockForegroundView:(id)arg1 timeItemSnapshot:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (BOOL)isExclusive;
- (void)jiggleCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setVisible:(BOOL)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;
- (double)updateContentsAndWidth;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;

@end

