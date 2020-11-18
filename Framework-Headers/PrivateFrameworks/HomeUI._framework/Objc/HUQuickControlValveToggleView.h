//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUQuickControlInteractiveView-Protocol.h>

@class HUCircleView, HUIconView, HUQuickControlViewProfile, NSString, UIColor;
@protocol HUQuickControlViewInteractionDelegate;

@interface HUQuickControlValveToggleView : UIView <HUQuickControlInteractiveView>
{
    BOOL _open;
    BOOL _userInteractionActive;
    id _value;
    HUQuickControlViewProfile *_profile;
    id<HUQuickControlViewInteractionDelegate> _interactionDelegate;
    HUIconView *_iconView;
    HUCircleView *_circleView;
}

@property (readonly, nonatomic) UIColor *backgroundOffColor;
@property (readonly, nonatomic) UIColor *backgroundOnColor;
@property (strong, nonatomic) HUCircleView *circleView; // @synthesize circleView=_circleView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
@property (weak, nonatomic) id<HUQuickControlViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property (nonatomic) BOOL open; // @synthesize open=_open;
@property (copy, nonatomic) HUQuickControlViewProfile *profile; // @synthesize profile=_profile;
@property (strong, nonatomic) id secondaryValue;
@property (readonly) Class superclass;
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
@property (strong, nonatomic) id value; // @synthesize value=_value;

+ (id)intrinsicSizeDescriptor;
+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (void)_setupIconView;
- (void)_updateAppearance;
- (void)_updateIconDescriptor;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (void)updateConstraints;

@end

