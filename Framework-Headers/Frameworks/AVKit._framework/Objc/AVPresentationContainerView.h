//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPresentationContainerViewAppearanceProxy, AVPresentationContainerViewLayer;

__attribute__((visibility("hidden")))
@interface AVPresentationContainerView : UIView
{
    BOOL _counterRotatingContentView;
    BOOL _wantsAppearanceConfigValues;
    BOOL _beingPresented;
    BOOL _beingDismissed;
    BOOL _willBeginOrientationChange;
    UIView *_presentationContainerContentView;
    long long _fromOrientation;
    long long _toOrientation;
}

@property (readonly, nonatomic) AVPresentationContainerViewAppearanceProxy *appearanceProxy;
@property (nonatomic, getter=isBeingDismissed) BOOL beingDismissed; // @synthesize beingDismissed=_beingDismissed;
@property (nonatomic, getter=isBeingPresented) BOOL beingPresented; // @synthesize beingPresented=_beingPresented;
@property (nonatomic, getter=isCounterRotatingContentView) BOOL counterRotatingContentView; // @synthesize counterRotatingContentView=_counterRotatingContentView;
@property (nonatomic) long long fromOrientation; // @synthesize fromOrientation=_fromOrientation;
@property (readonly, nonatomic) AVPresentationContainerViewLayer *layer; // @dynamic layer;
@property (weak, nonatomic) UIView *presentationContainerContentView; // @synthesize presentationContainerContentView=_presentationContainerContentView;
@property (nonatomic) long long toOrientation; // @synthesize toOrientation=_toOrientation;
@property (nonatomic) BOOL wantsAppearanceConfigValues; // @synthesize wantsAppearanceConfigValues=_wantsAppearanceConfigValues;
@property (nonatomic) BOOL willBeginOrientationChange; // @synthesize willBeginOrientationChange=_willBeginOrientationChange;

+ (Class)layerClass;
- (void).cxx_destruct;
- (struct CGAffineTransform)_contentTransform;
- (double)_continuousCornerRadius;
- (double)_cornerRadius;
- (double)_radiansForCounterRotation;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setCornerRadius:(double)arg1;
- (BOOL)avkit_isBeingDismissed;
- (BOOL)avkit_isBeingPresented;
- (BOOL)avkit_isCounterRotatedForTransition;
- (BOOL)avkit_isVideoGravityFrozen;
- (struct UIEdgeInsets)avkit_overrideLayoutMarginsForCounterRotation;
- (struct UIEdgeInsets)avkit_overrideLayoutMarginsForInterfaceOrientation:(long long)arg1;
- (void)didStopTransition;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setClipsToBounds:(BOOL)arg1;
- (void)willBeginAdjustingOrientation;
- (void)willStartDismissalTransitionFromInterfaceOrientation:(long long)arg1 toOrientation:(long long)arg2 needsCounterRotation:(BOOL)arg3;
- (void)willStartPresentationTransitionFromInterfaceOrientation:(long long)arg1 toOrientation:(long long)arg2 needsCounterRotation:(BOOL)arg3;

@end

