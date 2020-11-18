//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSSet, PUReviewScreenDoneButton, UIButton;

@interface PUReviewScreenTopBar : UIView
{
    NSSet *_availableButtons;
    NSSet *_enabledButtons;
    unsigned long long _backgroundStyle;
    PUReviewScreenDoneButton *_doneButton;
    UIButton *_retakeButton;
    struct CGPoint _doneButtonCenterAlignmentPoint;
}

@property (copy, nonatomic) NSSet *availableButtons; // @synthesize availableButtons=_availableButtons;
@property (nonatomic) unsigned long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property (readonly, nonatomic) PUReviewScreenDoneButton *doneButton; // @synthesize doneButton=_doneButton;
@property (nonatomic) struct CGPoint doneButtonCenterAlignmentPoint; // @synthesize doneButtonCenterAlignmentPoint=_doneButtonCenterAlignmentPoint;
@property (copy, nonatomic) NSSet *enabledButtons; // @synthesize enabledButtons=_enabledButtons;
@property (readonly, nonatomic) UIButton *retakeButton; // @synthesize retakeButton=_retakeButton;

+ (id)supportedButtons;
- (void).cxx_destruct;
- (id)_buttonForButtonType:(long long)arg1;
- (BOOL)_isButtonAvailable:(long long)arg1;
- (BOOL)_isButtonEnabled:(long long)arg1;
- (void)_updateBackgroundColor;
- (void)_updateButtonVisibility;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

