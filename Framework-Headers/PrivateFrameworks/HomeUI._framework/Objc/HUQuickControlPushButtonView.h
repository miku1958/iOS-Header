//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUQuickControlInteractiveView-Protocol.h>

@class HUIconView, HUQuickControlPushButtonViewProfile, HUQuickControlRoundButton, NSString, UIImpactFeedbackGenerator, UILabel, UILongPressGestureRecognizer;
@protocol HUQuickControlViewInteractionDelegate;

@interface HUQuickControlPushButtonView : UIView <HUQuickControlInteractiveView>
{
    BOOL _userInteractionActive;
    id<HUQuickControlViewInteractionDelegate> _interactionDelegate;
    unsigned long long _reachabilityState;
    HUQuickControlPushButtonViewProfile *_profile;
    NSString *_descriptionText;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    HUQuickControlRoundButton *_roundButton;
    HUIconView *_decorationIconView;
    UILabel *_buttonLabel;
    unsigned long long _controlState;
}

@property (strong, nonatomic) UILabel *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
@property (nonatomic) unsigned long long controlState; // @synthesize controlState=_controlState;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) HUIconView *decorationIconView; // @synthesize decorationIconView=_decorationIconView;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property (strong, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<HUQuickControlViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property (strong, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property (copy, nonatomic) HUQuickControlPushButtonViewProfile *profile; // @synthesize profile=_profile;
@property (nonatomic) unsigned long long reachabilityState; // @synthesize reachabilityState=_reachabilityState;
@property (strong, nonatomic) HUQuickControlRoundButton *roundButton; // @synthesize roundButton=_roundButton;
@property (strong, nonatomic) id secondaryValue;
@property (readonly) Class superclass;
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
@property (strong, nonatomic) id value;

+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (void)_actuateTapticFeedbackWithIntensity:(double)arg1;
- (void)_animateToEnlargeView;
- (void)_animateToShrinkView;
- (void)_contentSizeCategoryDidChange;
- (void)_prepareForTapticFeedback;
- (void)_updateDecorationIconDescriptorAnimated:(BOOL)arg1;
- (void)_updateUI;
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (void)dealloc;
- (void)handleTap:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (void)layoutSubviews;

@end
