//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSString, UIBarButtonItem, UIColor, UIImageView, UITapGestureRecognizer;
@protocol UIDimmingViewDelegate;

__attribute__((visibility("hidden")))
@interface UIDimmingView : UIView <UIGestureRecognizerDelegate>
{
    UIBarButtonItem *_highlightedBarButtonItem;
    UIImageView *_highlightedImageView;
    UIImageView *_backgroundGlow;
    NSArray *_passthroughViews;
    BOOL _ignoresTouches;
    BOOL _inPassthroughHitTest;
    UIColor *_dimmingColor;
    UITapGestureRecognizer *_singleFingerTapRecognizer;
    BOOL _suppressesBackdrops;
    id<UIDimmingViewDelegate> _delegate;
    double _percentDisplayed;
    double _percentLightened;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UIDimmingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIColor *dimmingColor; // @synthesize dimmingColor=_dimmingColor;
@property (readonly, nonatomic) BOOL displayed;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIBarButtonItem *highlightedBarButtonItem;
@property (nonatomic) BOOL ignoresTouches; // @synthesize ignoresTouches=_ignoresTouches;
@property (copy, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews=_passthroughViews;
@property (nonatomic) double percentDisplayed; // @synthesize percentDisplayed=_percentDisplayed;
@property (nonatomic) double percentLightened; // @synthesize percentLightened=_percentLightened;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressesBackdrops; // @synthesize suppressesBackdrops=_suppressesBackdrops;

+ (id)defaultDimmingColor;
- (void).cxx_destruct;
- (id)_backdropViewsToAnimate;
- (void)_sendDelegateDimmingViewWasTapped;
- (void)_simulateTap;
- (void)dealloc;
- (void)dimmingRemovalAnimationDidStop;
- (void)display:(BOOL)arg1;
- (void)display:(BOOL)arg1 withAnimationDuration:(double)arg2 afterDelay:(double)arg3;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleSingleTap:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)mouseUp:(struct __GSEvent *)arg1;
- (int)textEffectsVisibilityLevel;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBackgroundColor;

@end

