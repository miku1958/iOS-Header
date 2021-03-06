//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUQuickControlInteractiveView-Protocol.h>

@class HUIconView, HUQuickControlIconViewProfile, NSString, UILabel;
@protocol HUQuickControlViewInteractionDelegate;

@interface HUQuickControlIconView : UIView <HUQuickControlInteractiveView>
{
    BOOL _userInteractionActive;
    HUQuickControlIconViewProfile *_profile;
    id<HUQuickControlViewInteractionDelegate> _interactionDelegate;
    unsigned long long _reachabilityState;
    HUIconView *_iconView;
    UILabel *_statusLabel;
    UILabel *_supplementaryLabel;
    id _viewValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
@property (weak, nonatomic) id<HUQuickControlViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property (copy, nonatomic) HUQuickControlIconViewProfile *profile; // @synthesize profile=_profile;
@property (nonatomic) unsigned long long reachabilityState; // @synthesize reachabilityState=_reachabilityState;
@property (strong, nonatomic) id secondaryValue;
@property (strong, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property (readonly) Class superclass;
@property (strong, nonatomic) UILabel *supplementaryLabel; // @synthesize supplementaryLabel=_supplementaryLabel;
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
@property (strong, nonatomic) id value;
@property (strong, nonatomic) id viewValue; // @synthesize viewValue=_viewValue;

+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (struct CGRect)_getLabelsContainingRect;
- (double)_iconAndLabelsHeight;
- (void)_updateLabelFramesOrigins;
- (void)_updateLabelSizes;
- (void)_updateLayout;
- (void)_updateUI;
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (void)layoutSubviews;

@end

